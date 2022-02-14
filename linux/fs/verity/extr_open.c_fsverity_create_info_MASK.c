
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_size; } ;
struct TYPE_3__ {int digest_size; TYPE_2__* hash_alg; } ;
struct fsverity_info {int measurement; TYPE_1__ tree_params; int root_hash; struct inode const* inode; } ;
struct fsverity_descriptor {int version; int salt_size; int root_hash; int salt; int log_blocksize; int hash_algorithm; int data_size; int __reserved; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fsverity_info* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,struct fsverity_descriptor*,int ) ;
 int FUNC_2 (struct inode const*,char*,...) ;
 int FUNC_3 (struct fsverity_info*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,struct inode const*,int ,int ,int ,int) ;
 int FUNC_5 (struct fsverity_info*,struct fsverity_descriptor*,size_t) ;
 struct fsverity_info* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (char*,int ,int ,int ) ;

struct fsverity_info *FUNC_11(const struct inode *VAR_4,
        void *VAR_5, size_t VAR_6)
{
 struct fsverity_descriptor *VAR_7 = VAR_5;
 struct fsverity_info *VAR_8;
 int VAR_9;

 if (VAR_6 < sizeof(*VAR_7)) {
  FUNC_2(VAR_4, "Unrecognized descriptor size: %zu bytes",
        VAR_6);
  return FUNC_0(-VAR_0);
 }

 if (VAR_7->version != 1) {
  FUNC_2(VAR_4, "Unrecognized descriptor version: %u",
        VAR_7->version);
  return FUNC_0(-VAR_0);
 }

 if (FUNC_8(VAR_7->__reserved, 0, sizeof(VAR_7->__reserved))) {
  FUNC_2(VAR_4, "Reserved bits set in descriptor");
  return FUNC_0(-VAR_0);
 }

 if (VAR_7->salt_size > sizeof(VAR_7->salt)) {
  FUNC_2(VAR_4, "Invalid salt_size: %u", VAR_7->salt_size);
  return FUNC_0(-VAR_0);
 }

 if (FUNC_7(VAR_7->data_size) != VAR_4->i_size) {
  FUNC_2(VAR_4,
        "Wrong data_size: %llu (desc) != %lld (inode)",
        FUNC_7(VAR_7->data_size), VAR_4->i_size);
  return FUNC_0(-VAR_0);
 }

 VAR_8 = FUNC_6(VAR_3, VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_1);
 VAR_8->inode = VAR_4;

 VAR_9 = FUNC_4(&VAR_8->tree_params, VAR_4,
            VAR_7->hash_algorithm,
            VAR_7->log_blocksize,
            VAR_7->salt, VAR_7->salt_size);
 if (VAR_9) {
  FUNC_2(VAR_4,
        "Error %d initializing Merkle tree parameters",
        VAR_9);
  goto out;
 }

 FUNC_9(VAR_8->root_hash, VAR_7->root_hash, VAR_8->tree_params.digest_size);

 VAR_9 = FUNC_1(VAR_8->tree_params.hash_alg, VAR_7,
           VAR_8->measurement);
 if (VAR_9) {
  FUNC_2(VAR_4, "Error %d computing file measurement", VAR_9);
  goto out;
 }
 FUNC_10("Computed file measurement: %s:%*phN\n",
   VAR_8->tree_params.hash_alg->name,
   VAR_8->tree_params.digest_size, VAR_8->measurement);

 VAR_9 = FUNC_5(VAR_8, VAR_7, VAR_6);
out:
 if (VAR_9) {
  FUNC_3(VAR_8);
  VAR_8 = FUNC_0(VAR_9);
 }
 return VAR_8;
}

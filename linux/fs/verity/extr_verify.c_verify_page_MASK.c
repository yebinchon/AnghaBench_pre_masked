
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct page {int index; } ;
struct merkle_tree_params {unsigned int digest_size; int num_levels; TYPE_3__* hash_alg; } ;
struct inode {TYPE_2__* i_sb; } ;
struct fsverity_info {int * root_hash; struct merkle_tree_params tree_params; } ;
struct ahash_request {int dummy; } ;
typedef int pgoff_t ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {TYPE_1__* s_vop; } ;
struct TYPE_4__ {struct page* (* read_merkle_tree_page ) (struct inode*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct fsverity_info const*,int const*,int *,int const,int) ;
 int FUNC_8 (struct page*,unsigned int,unsigned int const,int *) ;
 int FUNC_9 (struct inode*,char*,int,int ) ;
 int FUNC_10 (struct merkle_tree_params const*,struct inode*,struct ahash_request*,struct page*,int *) ;
 int FUNC_11 (struct merkle_tree_params const*,int const,int,int *,unsigned int*) ;
 int FUNC_12 (char*,int,unsigned int const,unsigned int const,...) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (struct page*) ;
 struct page* FUNC_15 (struct inode*,int ) ;

__attribute__((used)) static bool FUNC_16(struct inode *VAR_2, const struct fsverity_info *VAR_3,
   struct ahash_request *VAR_4, struct page *VAR_5)
{
 const struct merkle_tree_params *VAR_6 = &VAR_3->tree_params;
 const unsigned int VAR_7 = VAR_6->digest_size;
 const pgoff_t VAR_8 = VAR_5->index;
 int VAR_9;
 u8 VAR_10[VAR_0];
 const u8 *VAR_11;
 u8 VAR_12[VAR_0];
 struct page *VAR_13[VAR_1];
 unsigned int VAR_14[VAR_1];
 int VAR_15;

 if (FUNC_6(!FUNC_3(VAR_5) || FUNC_4(VAR_5)))
  return 0;

 FUNC_13("Verifying data page %lu...\n", VAR_8);






 for (VAR_9 = 0; VAR_9 < VAR_6->num_levels; VAR_9++) {
  pgoff_t VAR_16;
  unsigned int VAR_17;
  struct page *VAR_18;

  FUNC_11(VAR_6, VAR_8, VAR_9, &VAR_16, &VAR_17);

  FUNC_13("Level %d: hindex=%lu, hoffset=%u\n",
         VAR_9, VAR_16, VAR_17);

  VAR_18 = VAR_2->i_sb->s_vop->read_merkle_tree_page(VAR_2,
          VAR_16);
  if (FUNC_0(VAR_18)) {
   VAR_15 = FUNC_1(VAR_18);
   FUNC_9(VAR_2,
         "Error %d reading Merkle tree page %lu",
         VAR_15, VAR_16);
   goto out;
  }

  if (FUNC_2(VAR_18)) {
   FUNC_8(VAR_18, VAR_17, VAR_7, VAR_10);
   VAR_11 = VAR_10;
   FUNC_14(VAR_18);
   FUNC_13("Hash page already checked, want %s:%*phN\n",
          VAR_6->hash_alg->name,
          VAR_7, VAR_11);
   goto descend;
  }
  FUNC_13("Hash page not yet checked\n");
  VAR_13[VAR_9] = VAR_18;
  VAR_14[VAR_9] = VAR_17;
 }

 VAR_11 = VAR_3->root_hash;
 FUNC_12("Want root hash: %s:%*phN\n",
   VAR_6->hash_alg->name, VAR_7, VAR_11);
descend:

 for (; VAR_9 > 0; VAR_9--) {
  struct page *VAR_19 = VAR_13[VAR_9 - 1];
  unsigned int VAR_20 = VAR_14[VAR_9 - 1];

  VAR_15 = FUNC_10(VAR_6, VAR_2, VAR_4, VAR_19, VAR_12);
  if (VAR_15)
   goto out;
  VAR_15 = FUNC_7(VAR_3, VAR_11, VAR_12, VAR_8, VAR_9 - 1);
  if (VAR_15)
   goto out;
  FUNC_5(VAR_19);
  FUNC_8(VAR_19, VAR_20, VAR_7, VAR_10);
  VAR_11 = VAR_10;
  FUNC_14(VAR_19);
  FUNC_12("Verified hash page at level %d, now want %s:%*phN\n",
    VAR_9 - 1, VAR_6->hash_alg->name, VAR_7, VAR_11);
 }


 VAR_15 = FUNC_10(VAR_6, VAR_2, VAR_4, VAR_5, VAR_12);
 if (VAR_15)
  goto out;
 VAR_15 = FUNC_7(VAR_3, VAR_11, VAR_12, VAR_8, -1);
out:
 for (; VAR_9 > 0; VAR_9--)
  FUNC_14(VAR_13[VAR_9 - 1]);

 return VAR_15 == 0;
}

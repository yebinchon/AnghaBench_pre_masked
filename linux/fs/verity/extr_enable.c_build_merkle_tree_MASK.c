
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct merkle_tree_params {int block_size; int log_blocksize; unsigned int num_levels; int hashes_per_block; int log_arity; int digest_size; TYPE_1__* hash_alg; } ;
struct inode {int i_size; } ;
struct ahash_request {int dummy; } ;
struct TYPE_2__ {int tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ahash_request* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct inode*,unsigned int,int,struct merkle_tree_params const*,int *,struct ahash_request*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_2,
        const struct merkle_tree_params *VAR_3,
        u8 *VAR_4)
{
 u8 *VAR_5;
 struct ahash_request *VAR_6;
 u64 VAR_7;
 unsigned int VAR_8;
 int VAR_9 = -VAR_0;

 if (VAR_2->i_size == 0) {

  FUNC_6(VAR_4, 0, VAR_3->digest_size);
  return 0;
 }

 VAR_5 = FUNC_4(VAR_3->block_size, VAR_1);
 VAR_6 = FUNC_0(VAR_3->hash_alg->tfm, VAR_1);
 if (!VAR_5 || !VAR_6)
  goto out;






 VAR_7 = (VAR_2->i_size + VAR_3->block_size - 1) >>
   VAR_3->log_blocksize;
 for (VAR_8 = 0; VAR_8 <= VAR_3->num_levels; VAR_8++) {
  VAR_9 = FUNC_2(VAR_2, VAR_8, VAR_7, VAR_3,
           VAR_5, VAR_6);
  if (VAR_9)
   goto out;
  VAR_7 = (VAR_7 + VAR_3->hashes_per_block - 1) >>
    VAR_3->log_arity;
 }
 FUNC_5(VAR_4, VAR_5, VAR_3->digest_size);
 VAR_9 = 0;
out:
 FUNC_3(VAR_5);
 FUNC_1(VAR_6);
 return VAR_9;
}

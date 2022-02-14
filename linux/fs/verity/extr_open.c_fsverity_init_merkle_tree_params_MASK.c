
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct merkle_tree_params {int digest_size; unsigned int log_blocksize; int block_size; int log_arity; int hashes_per_block; scalar_t__ num_levels; int* level_start; int tree_size; struct fsverity_hash_alg const* hashstate; struct fsverity_hash_alg const* hash_alg; } ;
struct inode {int i_size; } ;
struct fsverity_hash_alg {int digest_size; int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct fsverity_hash_alg const*) ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct fsverity_hash_alg const*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct inode const*,char*,...) ;
 struct fsverity_hash_alg* FUNC_4 (struct inode const*,unsigned int) ;
 struct fsverity_hash_alg const* FUNC_5 (struct fsverity_hash_alg const*,int const*,size_t) ;
 int FUNC_6 (struct inode const*,char*,int,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct fsverity_hash_alg const*) ;
 int FUNC_10 (struct merkle_tree_params*,int ,int) ;
 int FUNC_11 (char*,int,int,...) ;

int FUNC_12(struct merkle_tree_params *VAR_3,
         const struct inode *VAR_4,
         unsigned int VAR_5,
         unsigned int VAR_6,
         const u8 *VAR_7, size_t VAR_8)
{
 const struct fsverity_hash_alg *VAR_9;
 int VAR_10;
 u64 VAR_11;
 u64 VAR_12;
 int VAR_13;

 FUNC_10(VAR_3, 0, sizeof(*VAR_3));

 VAR_9 = FUNC_4(VAR_4, VAR_5);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);
 VAR_3->hash_alg = VAR_9;
 VAR_3->digest_size = VAR_9->digest_size;

 VAR_3->hashstate = FUNC_5(VAR_9, VAR_7,
       VAR_8);
 if (FUNC_0(VAR_3->hashstate)) {
  VAR_10 = FUNC_1(VAR_3->hashstate);
  VAR_3->hashstate = ((void*)0);
  FUNC_3(VAR_4, "Error %d preparing hash state", VAR_10);
  goto out_err;
 }

 if (VAR_6 != VAR_2) {
  FUNC_6(VAR_4, "Unsupported log_blocksize: %u",
         VAR_6);
  VAR_10 = -VAR_0;
  goto out_err;
 }
 VAR_3->log_blocksize = VAR_6;
 VAR_3->block_size = 1 << VAR_6;

 if (FUNC_2(!FUNC_8(VAR_3->digest_size))) {
  VAR_10 = -VAR_0;
  goto out_err;
 }
 if (VAR_3->block_size < 2 * VAR_3->digest_size) {
  FUNC_6(VAR_4,
         "Merkle tree block size (%u) too small for hash algorithm \"%s\"",
         VAR_3->block_size, VAR_9->name);
  VAR_10 = -VAR_0;
  goto out_err;
 }
 VAR_3->log_arity = VAR_3->log_blocksize - FUNC_7(VAR_3->digest_size);
 VAR_3->hashes_per_block = 1 << VAR_3->log_arity;

 FUNC_11("Merkle tree uses %s with %u-byte blocks (%u hashes/block), salt=%*phN\n",
   VAR_9->name, VAR_3->block_size, VAR_3->hashes_per_block,
   (int)VAR_8, VAR_7);
 VAR_11 = (VAR_4->i_size + VAR_3->block_size - 1) >> VAR_6;
 FUNC_11("Data is %lld bytes (%llu blocks)\n", VAR_4->i_size, VAR_11);
 while (VAR_11 > 1) {
  if (VAR_3->num_levels >= VAR_1) {
   FUNC_3(VAR_4, "Too many levels in Merkle tree");
   VAR_10 = -VAR_0;
   goto out_err;
  }
  VAR_11 = (VAR_11 + VAR_3->hashes_per_block - 1) >>
    VAR_3->log_arity;

  VAR_3->level_start[VAR_3->num_levels++] = VAR_11;
 }


 VAR_12 = 0;
 for (VAR_13 = (int)VAR_3->num_levels - 1; VAR_13 >= 0; VAR_13--) {
  VAR_11 = VAR_3->level_start[VAR_13];
  VAR_3->level_start[VAR_13] = VAR_12;
  FUNC_11("Level %d is %llu blocks starting at index %llu\n",
    VAR_13, VAR_11, VAR_12);
  VAR_12 += VAR_11;
 }

 VAR_3->tree_size = VAR_12 << VAR_6;
 return 0;

out_err:
 FUNC_9(VAR_3->hashstate);
 FUNC_10(VAR_3, 0, sizeof(*VAR_3));
 return VAR_10;
}

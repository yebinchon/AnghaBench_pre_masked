
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merkle_tree_params {unsigned int log_arity; unsigned int* level_start; unsigned int log_blocksize; } ;
typedef unsigned int pgoff_t ;



__attribute__((used)) static void FUNC_0(const struct merkle_tree_params *VAR_0,
     pgoff_t VAR_1, unsigned int VAR_2, pgoff_t *VAR_3,
     unsigned int *VAR_4)
{
 pgoff_t VAR_5;


 VAR_5 = VAR_1 >> (VAR_2 * VAR_0->log_arity);


 *VAR_3 = VAR_0->level_start[VAR_2] + (VAR_5 >> VAR_0->log_arity);


 *VAR_4 = (VAR_5 & ((1 << VAR_0->log_arity) - 1)) <<
     (VAR_0->log_blocksize - VAR_0->log_arity);
}

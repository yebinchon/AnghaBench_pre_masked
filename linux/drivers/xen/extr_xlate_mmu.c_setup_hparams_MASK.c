
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remap_data {size_t h_iter; unsigned long* h_gpfns; int * fgfn; scalar_t__* h_errs; int * h_idxs; } ;



__attribute__((used)) static void FUNC_0(unsigned long VAR_0, void *VAR_1)
{
 struct remap_data *VAR_2 = VAR_1;

 VAR_2->h_idxs[VAR_2->h_iter] = *VAR_2->fgfn;
 VAR_2->h_gpfns[VAR_2->h_iter] = VAR_0;
 VAR_2->h_errs[VAR_2->h_iter] = 0;

 VAR_2->h_iter++;
 VAR_2->fgfn++;
}

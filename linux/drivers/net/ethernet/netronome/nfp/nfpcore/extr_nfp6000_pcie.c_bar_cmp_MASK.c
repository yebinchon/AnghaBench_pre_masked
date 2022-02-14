
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_bar {scalar_t__ bitsize; int index; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct nfp_bar *VAR_2 = VAR_0, *VAR_3 = VAR_1;

 if (VAR_2->bitsize == VAR_3->bitsize)
  return VAR_2->index - VAR_3->index;
 else
  return VAR_2->bitsize - VAR_3->bitsize;
}

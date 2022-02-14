
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef void* u32 ;
struct genwqe_reg {int val; void* idx; void* addr; } ;
struct genwqe_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct genwqe_dev *VAR_1, struct genwqe_reg *VAR_2,
         unsigned int *VAR_3, unsigned int VAR_4, u32 VAR_5, u32 VAR_6,
         u64 VAR_7)
{
 if (FUNC_0(*VAR_3 >= VAR_4))
  return -VAR_0;

 VAR_2[*VAR_3].addr = VAR_5;
 VAR_2[*VAR_3].idx = VAR_6;
 VAR_2[*VAR_3].val = VAR_7;
 ++*VAR_3;
 return 0;
}

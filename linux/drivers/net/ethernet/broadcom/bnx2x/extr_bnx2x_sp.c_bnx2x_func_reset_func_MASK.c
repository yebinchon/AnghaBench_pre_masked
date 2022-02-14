
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_func_sp_drv_ops {int (* reset_hw_func ) (struct bnx2x*) ;} ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;

__attribute__((used)) static inline void FUNC_1(struct bnx2x *VAR_0,
     const struct bnx2x_func_sp_drv_ops *VAR_1)
{
 VAR_1->reset_hw_func(VAR_0);
}

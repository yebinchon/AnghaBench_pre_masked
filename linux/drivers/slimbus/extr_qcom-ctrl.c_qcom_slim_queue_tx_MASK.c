
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct qcom_slim_ctrl {scalar_t__ base; } ;


 int FUNC_0 (scalar_t__,void*,int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct qcom_slim_ctrl *VAR_0, void *VAR_1,
          u8 VAR_2, u32 VAR_3)
{
 int VAR_4 = (VAR_2 + 3) >> 2;

 FUNC_0(VAR_0->base + VAR_3, VAR_1, VAR_4);


 FUNC_1();
}

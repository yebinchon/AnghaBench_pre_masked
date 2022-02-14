
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qcom_glink {int features; } ;



 int FUNC_0 (struct qcom_glink*) ;

__attribute__((used)) static void FUNC_1(struct qcom_glink *VAR_0,
           u32 VAR_1,
           u32 VAR_2)
{
 switch (VAR_1) {
 case 0:
  break;
 case 128:
  VAR_0->features &= VAR_2;

 default:
  FUNC_0(VAR_0);
  break;
 }
}

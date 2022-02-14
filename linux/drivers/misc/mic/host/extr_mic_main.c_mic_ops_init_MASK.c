
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_device {int family; int * smpt_ops; int * intr_ops; int * ops; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct mic_device *VAR_3)
{
 switch (VAR_3->family) {
 case 128:
  VAR_3->ops = &VAR_1;
  VAR_3->intr_ops = &VAR_0;
  VAR_3->smpt_ops = &VAR_2;
  break;
 default:
  break;
 }
}

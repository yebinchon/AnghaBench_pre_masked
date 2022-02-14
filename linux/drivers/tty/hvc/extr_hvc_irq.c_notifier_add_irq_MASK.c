
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvc_struct {int irq_requested; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ,char*,struct hvc_struct*) ;

int FUNC_1(struct hvc_struct *VAR_1, int VAR_2)
{
 int VAR_3;

 if (!VAR_2) {
  VAR_1->irq_requested = 0;
  return 0;
 }
 VAR_3 = FUNC_0(VAR_2, VAR_0, VAR_1->flags,
   "hvc_console", VAR_1);
 if (!VAR_3)
  VAR_1->irq_requested = 1;
 return VAR_3;
}

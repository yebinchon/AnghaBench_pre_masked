
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchtec_ntb {int ntb; } ;
struct switchtec_dev {struct switchtec_ntb* sndev; int * link_notifier; } ;
struct device {int dummy; } ;
struct class_interface {int dummy; } ;


 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct switchtec_ntb*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct switchtec_ntb*) ;
 int FUNC_4 (struct switchtec_ntb*) ;
 int FUNC_5 (struct switchtec_ntb*) ;
 struct switchtec_dev* FUNC_6 (struct device*) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_0,
     struct class_interface *VAR_1)
{
 struct switchtec_dev *VAR_2 = FUNC_6(VAR_0);
 struct switchtec_ntb *VAR_3 = VAR_2->sndev;

 if (!VAR_3)
  return;

 VAR_2->link_notifier = ((void*)0);
 VAR_2->sndev = ((void*)0);
 FUNC_2(&VAR_3->ntb);
 FUNC_4(VAR_3);
 FUNC_5(VAR_3);
 FUNC_3(VAR_3);
 FUNC_1(VAR_3);
 FUNC_0(VAR_0, "ntb device unregistered\n");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncsi_dev {scalar_t__ state; scalar_t__ link_up; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct ncsi_dev *VAR_1)
{
 if (FUNC_1(VAR_1->state != VAR_0))
  return;

 FUNC_0(VAR_1->dev, "NCSI interface %s\n",
     VAR_1->link_up ? "up" : "down");
}

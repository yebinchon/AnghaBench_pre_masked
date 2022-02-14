
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expander_device {struct ex_phy* ex_phy; } ;
struct ex_phy {int linkrate; } ;
struct domain_device {struct expander_device ex_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct domain_device*,int,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct domain_device *VAR_2, int VAR_3)
{
 struct expander_device *VAR_4 = &VAR_2->ex_dev;
 struct ex_phy *VAR_5 = &VAR_4->ex_phy[VAR_3];

 FUNC_0(VAR_2, VAR_3, VAR_0, ((void*)0));
 VAR_5->linkrate = VAR_1;
}

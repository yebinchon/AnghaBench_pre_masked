
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expander_device {int * ex_phy; int num_phys; } ;
struct domain_device {struct expander_device ex_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct domain_device*,int) ;

__attribute__((used)) static int FUNC_3(struct domain_device *VAR_2)
{
 struct expander_device *VAR_3 = &VAR_2->ex_dev;
 int VAR_4 = -VAR_0;

 VAR_3->ex_phy = FUNC_0(VAR_3->num_phys, sizeof(*VAR_3->ex_phy), VAR_1);
 if (!VAR_3->ex_phy)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_2, -1);
 if (VAR_4)
  goto out_err;

 return 0;
 out_err:
 FUNC_1(VAR_3->ex_phy);
 VAR_3->ex_phy = ((void*)0);
 return VAR_4;
}

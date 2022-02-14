
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aac_dev {scalar_t__ msi_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct aac_dev*,int ) ;
 int FUNC_1 (int) ;

void FUNC_2(struct aac_dev *VAR_1)
{
 if (VAR_1->msi_enabled) {
  FUNC_0(VAR_1, VAR_0);
  VAR_1->msi_enabled = 0;
  FUNC_1(5000);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aac_dev {int msi_enabled; } ;
struct TYPE_2__ {int ODR_R; int ODR_MSI; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aac_dev*,int ) ;

__attribute__((used)) static int FUNC_1(struct aac_dev *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = 0;

 VAR_4 = FUNC_0(VAR_3, VAR_0.ODR_MSI) & VAR_1 ? 1 : 0;

 if (!VAR_3->msi_enabled) {






  VAR_5 = FUNC_0(VAR_3, VAR_0.ODR_R) >> VAR_2;
  if (!(VAR_5 & 1) && VAR_4)
   VAR_3->msi_enabled = 1;
  return VAR_5;
 }

 return VAR_4;
}

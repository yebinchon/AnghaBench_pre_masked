
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ef4_nic {int phy_mode; int wanted_fc; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int (* init_phy ) (struct ef4_nic*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ef4_nic*,int ) ;
 int FUNC_1 (struct ef4_nic*) ;
 int FUNC_2 (struct ef4_nic*,int ) ;
 int FUNC_3 (struct ef4_nic*,int ) ;
 TYPE_2__* FUNC_4 (struct ef4_nic*) ;
 int FUNC_5 (struct ef4_nic*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ef4_nic*) ;
 int FUNC_8 (struct ef4_nic*) ;

__attribute__((used)) static int FUNC_9(struct ef4_nic *VAR_3)
{
 int VAR_4;

 FUNC_4(VAR_3)->type->init_phy(VAR_3);

 if (!(VAR_3->phy_mode & VAR_1)) {
  VAR_4 = FUNC_3(VAR_3, VAR_2);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_4 = FUNC_2(VAR_3, VAR_2);
  if (VAR_4 < 0)
   return VAR_4;
 }

 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;


 FUNC_0(VAR_3, VAR_3->wanted_fc);
 FUNC_1(VAR_3);

 FUNC_6(VAR_0 / 5);


 FUNC_5(VAR_3);

 return 0;
}

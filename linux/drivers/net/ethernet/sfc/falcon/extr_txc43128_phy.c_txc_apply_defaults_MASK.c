
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ef4_nic {int dummy; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int (* init_phy ) (struct ef4_nic*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ef4_nic*,int ,int ) ;
 int FUNC_1 (struct ef4_nic*,int ,int ,int) ;
 TYPE_2__* FUNC_2 (struct ef4_nic*) ;
 int FUNC_3 (struct ef4_nic*) ;
 int FUNC_4 (struct ef4_nic*) ;

__attribute__((used)) static void FUNC_5(struct ef4_nic *VAR_13)
{
 int VAR_14;







 FUNC_1(VAR_13, VAR_0, VAR_4, VAR_9);
 FUNC_1(VAR_13, VAR_0, VAR_5, VAR_9);


 FUNC_1(VAR_13, VAR_0,
         VAR_2, VAR_6);
 FUNC_1(VAR_13, VAR_0,
         VAR_3, VAR_6);




 FUNC_1(VAR_13, VAR_1,
         VAR_4, VAR_8);
 FUNC_1(VAR_13, VAR_1,
         VAR_5, VAR_8);
 FUNC_1(VAR_13, VAR_1,
         VAR_2, VAR_7);
 FUNC_1(VAR_13, VAR_1,
         VAR_3, VAR_7);


 VAR_14 = FUNC_0(VAR_13, VAR_0, VAR_12);


 VAR_14 &= ~((1 << VAR_11) | (1 << VAR_10));
 FUNC_1(VAR_13, VAR_0, VAR_12, VAR_14);


 FUNC_4(VAR_13);

 FUNC_2(VAR_13)->type->init_phy(VAR_13);
}

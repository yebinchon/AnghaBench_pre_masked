
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_nic {TYPE_1__* type; int net_dev; } ;
struct TYPE_2__ {int (* init ) (struct ef4_nic*) ;int (* fini ) (struct ef4_nic*) ;} ;


 int FUNC_0 (struct ef4_nic*) ;
 int FUNC_1 (struct ef4_nic*) ;
 int FUNC_2 (struct ef4_nic*) ;
 int FUNC_3 (struct ef4_nic*) ;
 int FUNC_4 (struct ef4_nic*) ;
 int FUNC_5 (struct ef4_nic*) ;
 int FUNC_6 (struct ef4_nic*) ;
 int FUNC_7 (struct ef4_nic*) ;
 int FUNC_8 (struct ef4_nic*) ;
 int FUNC_9 (struct ef4_nic*,int ,int ,char*) ;
 int VAR_0 ;
 int FUNC_10 (struct ef4_nic*) ;
 int FUNC_11 (struct ef4_nic*) ;

__attribute__((used)) static int FUNC_12(struct ef4_nic *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_7(VAR_1);
 if (VAR_2)
  goto fail1;

 FUNC_3(VAR_1);

 VAR_2 = VAR_1->type->init(VAR_1);
 if (VAR_2) {
  FUNC_9(VAR_1, VAR_0, VAR_1->net_dev,
     "failed to initialise NIC\n");
  goto fail3;
 }

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2) {
  FUNC_9(VAR_1, VAR_0, VAR_1->net_dev,
     "failed to initialise port\n");
  goto fail4;
 }

 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2)
  goto fail5;
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  goto fail6;

 return 0;

 fail6:
 FUNC_5(VAR_1);
 fail5:
 FUNC_2(VAR_1);
 fail4:
 VAR_1->type->fini(VAR_1);
 fail3:
 FUNC_1(VAR_1);
 FUNC_8(VAR_1);
 fail1:
 return VAR_2;
}

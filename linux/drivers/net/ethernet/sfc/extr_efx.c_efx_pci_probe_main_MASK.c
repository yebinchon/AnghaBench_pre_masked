
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* type; int net_dev; int filter_sem; } ;
struct TYPE_2__ {int (* init ) (struct efx_nic*) ;int (* fini ) (struct efx_nic*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int FUNC_6 (struct efx_nic*) ;
 int FUNC_7 (struct efx_nic*) ;
 int FUNC_8 (struct efx_nic*) ;
 int FUNC_9 (struct efx_nic*) ;
 int FUNC_10 (struct efx_nic*) ;
 int FUNC_11 (struct efx_nic*) ;
 int FUNC_12 (struct efx_nic*,int ,int ,char*) ;
 int VAR_0 ;
 int FUNC_13 (struct efx_nic*) ;
 int FUNC_14 (struct efx_nic*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct efx_nic *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_9(VAR_1);
 if (VAR_2)
  goto fail1;

 FUNC_5(VAR_1);

 FUNC_0(&VAR_1->filter_sem);
 VAR_2 = VAR_1->type->init(VAR_1);
 FUNC_15(&VAR_1->filter_sem);
 if (VAR_2) {
  FUNC_12(VAR_1, VAR_0, VAR_1->net_dev,
     "failed to initialise NIC\n");
  goto fail3;
 }

 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2) {
  FUNC_12(VAR_1, VAR_0, VAR_1->net_dev,
     "failed to initialise port\n");
  goto fail4;
 }

 VAR_2 = FUNC_8(VAR_1);
 if (VAR_2)
  goto fail5;

 FUNC_11(VAR_1);
 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  goto fail6;

 return 0;

 fail6:
 FUNC_1(VAR_1);
 FUNC_7(VAR_1);
 fail5:
 FUNC_4(VAR_1);
 fail4:
 VAR_1->type->fini(VAR_1);
 fail3:
 FUNC_3(VAR_1);
 FUNC_10(VAR_1);
 fail1:
 return VAR_2;
}

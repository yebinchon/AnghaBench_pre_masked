
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int dummy; } ;
struct apple_gmux_data {scalar_t__ gpe; int iolen; int iostart; int bdev; int dhandle; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int * VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct apple_gmux_data*) ;
 int VAR_2 ;
 int FUNC_6 (struct apple_gmux_data*) ;
 struct apple_gmux_data* FUNC_7 (struct pnp_dev*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(struct pnp_dev *VAR_3)
{
 struct apple_gmux_data *VAR_4 = FUNC_7(VAR_3);

 FUNC_9();
 FUNC_5(VAR_4);
 if (VAR_4->gpe >= 0) {
  FUNC_0(((void*)0), VAR_4->gpe);
  FUNC_1(VAR_4->dhandle,
        VAR_0,
        &VAR_2);
 }

 FUNC_4(VAR_4->bdev);

 FUNC_8(VAR_4->iostart, VAR_4->iolen);
 VAR_1 = ((void*)0);
 FUNC_6(VAR_4);

 FUNC_2();
 FUNC_3();
}

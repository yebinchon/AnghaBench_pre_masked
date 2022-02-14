
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct if_sdio_card {scalar_t__ model; TYPE_1__* func; int priv; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct if_sdio_card*) ;
 int FUNC_1 (struct if_sdio_card*,int*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int *,scalar_t__,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int,int ,int*) ;

__attribute__((used)) static int FUNC_7(struct if_sdio_card *VAR_5)
{
 int VAR_6;
 u16 VAR_7;




 FUNC_4(VAR_5->func);
 FUNC_6(VAR_5->func, 0x00, VAR_1, &VAR_6);
 FUNC_5(VAR_5->func);

 FUNC_4(VAR_5->func);
 VAR_7 = FUNC_1(VAR_5, &VAR_6);
 FUNC_5(VAR_5->func);

 FUNC_2("firmware status = %#x\n", VAR_7);
 FUNC_2("scratch ret = %d\n", VAR_6);

 if (VAR_6)
  goto out;
 if (VAR_7 == VAR_0) {
  FUNC_2("firmware already loaded\n");
  FUNC_0(VAR_5);
  return 0;
 } else if ((VAR_5->model == VAR_2) && (VAR_7 & 0x7fff)) {
  FUNC_2("firmware may be running\n");
  FUNC_0(VAR_5);
  return 0;
 }

 VAR_6 = FUNC_3(VAR_5->priv, &VAR_5->func->dev, VAR_5->model,
         VAR_3, VAR_4);

out:
 return VAR_6;
}

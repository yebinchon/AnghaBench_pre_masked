
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_mmc_card {struct mwifiex_adapter* adapter; } ;
struct sdio_func {int dummy; } ;
struct mwifiex_adapter {int work_flags; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct device*,char*) ;
 struct sdio_func* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_5 (struct mwifiex_adapter*) ;
 int FUNC_6 (struct mwifiex_adapter*,int ) ;
 struct sdio_mmc_card* FUNC_7 (struct sdio_func*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_4)
{
 struct sdio_func *VAR_5 = FUNC_2(VAR_4);
 struct sdio_mmc_card *VAR_6;
 struct mwifiex_adapter *VAR_7;

 VAR_6 = FUNC_7(VAR_5);
 if (!VAR_6 || !VAR_6->adapter) {
  FUNC_1(VAR_4, "resume: invalid card or adapter\n");
  return 0;
 }

 VAR_7 = VAR_6->adapter;

 if (!FUNC_8(VAR_1, &VAR_7->work_flags)) {
  FUNC_4(VAR_7, VAR_3,
       "device already resumed\n");
  return 0;
 }

 FUNC_0(VAR_1, &VAR_7->work_flags);


 FUNC_3(FUNC_6(VAR_7, VAR_0),
     VAR_2);

 FUNC_5(VAR_7);

 return 0;
}

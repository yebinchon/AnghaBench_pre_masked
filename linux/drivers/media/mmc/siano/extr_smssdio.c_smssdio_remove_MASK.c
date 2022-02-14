
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smssdio_device {int coredev; scalar_t__ split_cb; } ;
struct sdio_func {int dummy; } ;


 int FUNC_0 (struct smssdio_device*) ;
 int FUNC_1 (struct sdio_func*) ;
 int FUNC_2 (struct sdio_func*) ;
 struct smssdio_device* FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (struct sdio_func*) ;
 int FUNC_5 (struct sdio_func*) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct sdio_func *VAR_0)
{
 struct smssdio_device *VAR_1;

 VAR_1 = FUNC_3(VAR_0);


 if (VAR_1->split_cb)
  FUNC_6(VAR_1->coredev, VAR_1->split_cb);

 FUNC_7(VAR_1->coredev);

 FUNC_1(VAR_0);
 FUNC_5(VAR_0);
 FUNC_2(VAR_0);
 FUNC_4(VAR_0);

 FUNC_0(VAR_1);
}

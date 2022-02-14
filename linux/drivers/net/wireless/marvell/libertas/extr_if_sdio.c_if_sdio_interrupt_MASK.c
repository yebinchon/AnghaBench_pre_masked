
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdio_func {int dummy; } ;
struct if_sdio_card {TYPE_1__* priv; int func; } ;
struct TYPE_2__ {int is_activity_detected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct if_sdio_card*) ;
 int FUNC_1 (char*,unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 struct if_sdio_card* FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int,int ,int*) ;

__attribute__((used)) static void FUNC_6(struct sdio_func *VAR_3)
{
 int VAR_4;
 struct if_sdio_card *VAR_5;
 u8 VAR_6;

 VAR_5 = FUNC_3(VAR_3);

 VAR_6 = FUNC_4(VAR_5->func, VAR_1, &VAR_4);
 if (VAR_4 || !VAR_6)
  return;

 FUNC_1("interrupt: 0x%X\n", (unsigned)VAR_6);

 FUNC_5(VAR_5->func, ~VAR_6, VAR_1, &VAR_4);
 if (VAR_4)
  return;





 VAR_5->priv->is_activity_detected = 1;
 if (VAR_6 & VAR_0)
  FUNC_2(VAR_5->priv);


 if (VAR_6 & VAR_2) {
  VAR_4 = FUNC_0(VAR_5);
  if (VAR_4)
   return;
 }
}

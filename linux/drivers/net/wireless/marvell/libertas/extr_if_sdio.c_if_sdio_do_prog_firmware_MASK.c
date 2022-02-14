
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {struct if_sdio_card* card; } ;
struct if_sdio_card {int dummy; } ;
struct firmware {int dummy; } ;


 int FUNC_0 (struct if_sdio_card*) ;
 int FUNC_1 (struct if_sdio_card*,struct firmware const*) ;
 int FUNC_2 (struct if_sdio_card*,struct firmware const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static void FUNC_5(struct lbs_private *VAR_0, int VAR_1,
         const struct firmware *VAR_2,
         const struct firmware *VAR_3)
{
 struct if_sdio_card *VAR_4 = VAR_0->card;

 if (VAR_1) {
  FUNC_4("failed to find firmware (%d)\n", VAR_1);
  return;
 }

 VAR_1 = FUNC_1(VAR_4, VAR_2);
 if (VAR_1)
  return;

 FUNC_3("Helper firmware loaded\n");

 VAR_1 = FUNC_2(VAR_4, VAR_3);
 if (VAR_1)
  return;

 FUNC_3("Firmware loaded\n");
 FUNC_0(VAR_4);
}

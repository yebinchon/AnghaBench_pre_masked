
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct lbs_private {int dev; scalar_t__ card; } ;
struct if_cs_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct if_cs_card*) ;
 int FUNC_1 (struct if_cs_card*) ;
 int FUNC_2 (struct if_cs_card*,int ) ;
 int FUNC_3 (struct if_cs_card*,int ,int) ;
 int FUNC_4 (struct if_cs_card*,int ,int *,int) ;
 int FUNC_5 (struct if_cs_card*,int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int FUNC_8(struct lbs_private *VAR_6, u8 *VAR_7, u16 VAR_8)
{
 struct if_cs_card *VAR_9 = (struct if_cs_card *)VAR_6->card;
 int VAR_10 = -1;
 int VAR_11 = 0;

 FUNC_0(VAR_9);


 while (1) {
  u16 VAR_12 = FUNC_2(VAR_9, VAR_1);
  if (VAR_12 & VAR_0)
   break;
  if (++VAR_11 > 100) {
   FUNC_7(VAR_6->dev, "card not ready for commands\n");
   goto done;
  }
  FUNC_6(1);
 }

 FUNC_3(VAR_9, VAR_3, VAR_8);

 FUNC_4(VAR_9, VAR_2, VAR_7, VAR_8 / 2);

 if (VAR_8 & 1)
  FUNC_5(VAR_9, VAR_2, VAR_7[VAR_8-1]);



 FUNC_3(VAR_9, VAR_5, VAR_0);



 FUNC_3(VAR_9, VAR_4, VAR_0);
 VAR_10 = 0;

done:
 FUNC_1(VAR_9);
 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct lbs_private {scalar_t__ card; } ;
struct if_cs_card {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct if_cs_card*) ;
 int FUNC_2 (struct if_cs_card*) ;
 int FUNC_3 (struct if_cs_card*,int ) ;
 int FUNC_4 (struct if_cs_card*,int ,int) ;
 int FUNC_5 (struct if_cs_card*,int ,int *,int) ;
 int FUNC_6 (struct if_cs_card*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct lbs_private *VAR_6, u8 *VAR_7, u16 VAR_8)
{
 struct if_cs_card *VAR_9 = (struct if_cs_card *)VAR_6->card;
 u16 VAR_10;

 FUNC_1(VAR_9);

 VAR_10 = FUNC_3(VAR_9, VAR_1);
 FUNC_0((VAR_10 & VAR_0) == 0);

 FUNC_4(VAR_9, VAR_5, VAR_8);


 FUNC_5(VAR_9, VAR_4, VAR_7, VAR_8 / 2);
 if (VAR_8 & 1)
  FUNC_6(VAR_9, VAR_4, VAR_7[VAR_8-1]);

 FUNC_4(VAR_9, VAR_3, VAR_0);
 FUNC_4(VAR_9, VAR_2, VAR_0);
 FUNC_2(VAR_9);
}

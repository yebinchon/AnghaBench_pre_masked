
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rsi_common {int hibernate_resume; } ;



 int VAR_0 ;
 size_t VAR_1 ;

 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct rsi_common*,int*) ;
 int FUNC_2 (struct rsi_common*,int*) ;

int FUNC_3(struct rsi_common *VAR_2, u8 *VAR_3)
{
 u8 VAR_4 = VAR_3[VAR_1];

 switch (VAR_4) {
 case 129:
  FUNC_0(VAR_0, "common card ready received\n");
  VAR_2->hibernate_resume = 0;
  FUNC_1(VAR_2, VAR_3);
  break;
 case 128:
  FUNC_0(VAR_0, "sleep notify received\n");
  FUNC_2(VAR_2, VAR_3);
  break;
 }

 return 0;
}

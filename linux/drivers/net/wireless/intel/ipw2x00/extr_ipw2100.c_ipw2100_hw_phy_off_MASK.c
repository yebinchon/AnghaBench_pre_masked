
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipw2100_priv {int net_dev; } ;
struct host_command {int host_command_length; int host_command_sequence; int host_command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ipw2100_priv*,struct host_command*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ipw2100_priv *VAR_7)
{



 struct host_command VAR_8 = {
  .host_command = VAR_0,
  .host_command_sequence = 0,
  .host_command_length = 0,
 };
 int VAR_9, VAR_10;
 u32 VAR_11, VAR_12;

 FUNC_0("CARD_DISABLE_PHY_OFF\n");


 VAR_9 = FUNC_1(VAR_7, &VAR_8);
 if (VAR_9)
  return VAR_9;

 for (VAR_10 = 0; VAR_10 < 2500; VAR_10++) {
  FUNC_2(VAR_7->net_dev, VAR_6, &VAR_11);
  FUNC_2(VAR_7->net_dev, VAR_3, &VAR_12);

  if ((VAR_11 & VAR_5) &&
      (VAR_12 & VAR_4))
   return 0;

  FUNC_3((FUNC_0(50)));
 }

 return -VAR_1;
}

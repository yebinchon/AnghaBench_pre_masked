
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl8xxxu_priv {int dummy; } ;
struct TYPE_2__ {int data; int cmd; } ;
struct h2c_cmd {TYPE_1__ joinbss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct h2c_cmd*,int ,int) ;
 int FUNC_1 (struct rtl8xxxu_priv*,struct h2c_cmd*,int) ;

void FUNC_2(struct rtl8xxxu_priv *VAR_3,
      u8 VAR_4, bool VAR_5)
{
 struct h2c_cmd VAR_6;

 FUNC_0(&VAR_6, 0, sizeof(struct h2c_cmd));

 VAR_6.joinbss.cmd = VAR_2;

 if (VAR_5)
  VAR_6.joinbss.data = VAR_0;
 else
  VAR_6.joinbss.data = VAR_1;

 FUNC_1(VAR_3, &VAR_6, sizeof(VAR_6.joinbss));
}

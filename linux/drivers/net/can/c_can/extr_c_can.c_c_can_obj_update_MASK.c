
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct c_can_priv {int (* read_reg ) (struct c_can_priv*,int) ;int (* write_reg32 ) (struct c_can_priv*,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,char*) ;
 struct c_can_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct c_can_priv*,int,int) ;
 int FUNC_4 (struct c_can_priv*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_3, int VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct c_can_priv *VAR_7 = FUNC_2(VAR_3);
 int VAR_8, VAR_9 = FUNC_0(VAR_0, VAR_4);

 VAR_7->write_reg32(VAR_7, VAR_9, (VAR_5 << 16) | VAR_6);

 for (VAR_8 = VAR_2; VAR_8; VAR_8--) {
  if (!(VAR_7->read_reg(VAR_7, VAR_9) & VAR_1))
   return;
  FUNC_5(1);
 }
 FUNC_1(VAR_3, "Updating object timed out\n");

}

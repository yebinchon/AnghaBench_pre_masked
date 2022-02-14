
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct c_can_priv {int (* read_reg ) (struct c_can_priv*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct c_can_priv*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
        struct c_can_priv *VAR_4, u32 VAR_5)
{
 int VAR_6 = 0;

 while (VAR_5 != (VAR_4->read_reg(VAR_4, VAR_1) & VAR_0)) {
  FUNC_2(10);
  if (VAR_6++ > 1000) {
   FUNC_0(VAR_3, "CCTRL: set CONTROL_INIT failed\n");
   return -VAR_2;
  }
 }
 return 0;
}

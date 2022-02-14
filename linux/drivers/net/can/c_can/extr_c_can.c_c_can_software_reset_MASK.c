
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct c_can_priv {scalar_t__ type; int (* read_reg ) (struct c_can_priv*,int ) ;int (* write_reg ) (struct c_can_priv*,int ,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct c_can_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct c_can_priv*,int ,int) ;
 int FUNC_4 (struct c_can_priv*,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5)
{
 struct c_can_priv *VAR_6 = FUNC_2(VAR_5);
 int VAR_7 = 0;

 if (VAR_6->type != VAR_0)
  return 0;

 VAR_6->write_reg(VAR_6, VAR_3, VAR_2 | VAR_1);
 while (VAR_6->read_reg(VAR_6, VAR_3) & VAR_2) {
  FUNC_0(20);
  if (VAR_7++ > 100) {
   FUNC_1(VAR_5, "CCTRL: software reset failed\n");
   return -VAR_4;
  }
 }

 return 0;
}

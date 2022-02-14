
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct c_can_priv {int (* write_reg ) (struct c_can_priv*,int ,int ) ;} ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*,int,int,int ) ;
 struct c_can_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct c_can_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2, int VAR_3, int VAR_4)
{
 struct c_can_priv *VAR_5 = FUNC_2(VAR_2);

 VAR_5->write_reg(VAR_5, FUNC_0(VAR_1, VAR_3), 0);
 FUNC_1(VAR_2, VAR_3, VAR_4, VAR_0);
}

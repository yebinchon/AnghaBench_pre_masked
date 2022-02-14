
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct c_can_priv {int (* write_reg ) (struct c_can_priv*,int ,int ) ;int (* write_reg32 ) (struct c_can_priv*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct net_device*,int,int ,int ) ;
 struct c_can_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct c_can_priv*,int ,int ) ;
 int FUNC_5 (struct c_can_priv*,int ,int ) ;
 int FUNC_6 (struct c_can_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_5, int VAR_6,
           u32 VAR_7, u32 VAR_8, u32 VAR_9, u32 VAR_10)
{
 struct c_can_priv *VAR_11 = FUNC_3(VAR_5);

 VAR_8 |= FUNC_0(29);
 VAR_11->write_reg32(VAR_11, FUNC_1(VAR_3, VAR_6), VAR_8);

 VAR_9 |= VAR_1;
 VAR_11->write_reg32(VAR_11, FUNC_1(VAR_0, VAR_6), VAR_9);

 VAR_11->write_reg(VAR_11, FUNC_1(VAR_4, VAR_6), VAR_10);
 FUNC_2(VAR_5, VAR_6, VAR_7, VAR_2);
}

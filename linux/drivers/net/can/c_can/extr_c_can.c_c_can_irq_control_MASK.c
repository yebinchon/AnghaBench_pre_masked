
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct c_can_priv {int (* read_reg ) (struct c_can_priv*,int ) ;int (* write_reg ) (struct c_can_priv*,int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct c_can_priv*,int ) ;
 int FUNC_1 (struct c_can_priv*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct c_can_priv *VAR_2, bool VAR_3)
{
 u32 VAR_4 = VAR_2->read_reg(VAR_2, VAR_1) & ~VAR_0;

 if (VAR_3)
  VAR_4 |= VAR_0;

 VAR_2->write_reg(VAR_2, VAR_1, VAR_4);
}

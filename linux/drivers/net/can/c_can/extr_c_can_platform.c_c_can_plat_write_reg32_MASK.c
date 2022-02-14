
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct c_can_priv {int (* write_reg ) (struct c_can_priv const*,int,int) ;} ;
typedef enum reg { ____Placeholder_reg } reg ;


 int FUNC_0 (struct c_can_priv const*,int,int) ;
 int FUNC_1 (struct c_can_priv const*,int,int) ;

__attribute__((used)) static void FUNC_2(const struct c_can_priv *VAR_0, enum reg VAR_1,
  u32 VAR_2)
{
 VAR_0->write_reg(VAR_0, VAR_1 + 1, VAR_2 >> 16);
 VAR_0->write_reg(VAR_0, VAR_1, VAR_2);
}

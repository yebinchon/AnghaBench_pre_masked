
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct c_can_priv {int (* read_reg32 ) (struct c_can_priv const*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct c_can_priv const*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(const struct c_can_priv *VAR_1, u32 VAR_2)
{
 while (VAR_1->read_reg32(VAR_1, VAR_0) & VAR_2)
  FUNC_1(1);
}

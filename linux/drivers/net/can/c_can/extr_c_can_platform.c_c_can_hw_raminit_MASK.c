
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct c_can_priv {int (* write_reg32 ) (struct c_can_priv const*,int ,int ) ;int (* read_reg32 ) (struct c_can_priv const*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct c_can_priv const*,int ) ;
 int FUNC_1 (struct c_can_priv const*,int ) ;
 int FUNC_2 (struct c_can_priv const*,int ,int ) ;
 int FUNC_3 (struct c_can_priv const*,int ,int ) ;

__attribute__((used)) static void FUNC_4(const struct c_can_priv *VAR_2, bool VAR_3)
{
 u32 VAR_4;

 VAR_4 = VAR_2->read_reg32(VAR_2, VAR_0);
 VAR_4 &= ~VAR_1;
 VAR_2->write_reg32(VAR_2, VAR_0, VAR_4);
 FUNC_0(VAR_2, VAR_4);

 if (VAR_3) {
  VAR_4 |= VAR_1;
  VAR_2->write_reg32(VAR_2, VAR_0, VAR_4);
  FUNC_0(VAR_2, VAR_4);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct c_can_priv {int (* read_reg ) (struct c_can_priv*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct c_can_priv*,int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct c_can_priv *VAR_1)
{
 u32 VAR_2 = VAR_1->read_reg(VAR_1, VAR_0);

 return VAR_2;
}

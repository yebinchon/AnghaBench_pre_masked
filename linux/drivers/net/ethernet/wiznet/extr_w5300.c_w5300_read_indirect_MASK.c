
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct w5300_priv {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct w5300_priv*,int ) ;
 int FUNC_3 (struct w5300_priv*,int ,int ) ;

__attribute__((used)) static u16 FUNC_4(struct w5300_priv *VAR_2, u16 VAR_3)
{
 unsigned long VAR_4;
 u16 VAR_5;

 FUNC_0(&VAR_2->reg_lock, VAR_4);
 FUNC_3(VAR_2, VAR_0, VAR_3);
 VAR_5 = FUNC_2(VAR_2, VAR_1);
 FUNC_1(&VAR_2->reg_lock, VAR_4);

 return VAR_5;
}

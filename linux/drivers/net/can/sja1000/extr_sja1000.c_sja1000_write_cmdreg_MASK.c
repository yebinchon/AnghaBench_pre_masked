
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sja1000_priv {int cmdreg_lock; int (* read_reg ) (struct sja1000_priv*,int ) ;int (* write_reg ) (struct sja1000_priv*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct sja1000_priv*,int ,int ) ;
 int FUNC_3 (struct sja1000_priv*,int ) ;

__attribute__((used)) static void FUNC_4(struct sja1000_priv *VAR_2, u8 VAR_3)
{
 unsigned long VAR_4;





 FUNC_0(&VAR_2->cmdreg_lock, VAR_4);
 VAR_2->write_reg(VAR_2, VAR_0, VAR_3);
 VAR_2->read_reg(VAR_2, VAR_1);
 FUNC_1(&VAR_2->cmdreg_lock, VAR_4);
}

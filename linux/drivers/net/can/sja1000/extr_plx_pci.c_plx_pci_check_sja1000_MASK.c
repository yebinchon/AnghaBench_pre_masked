
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1000_priv {int (* read_reg ) (struct sja1000_priv const*,int ) ;int (* write_reg ) (struct sja1000_priv const*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct sja1000_priv const*,int ) ;
 int FUNC_1 (struct sja1000_priv const*,int ) ;
 int FUNC_2 (struct sja1000_priv const*,int ) ;
 int FUNC_3 (struct sja1000_priv const*,int ,int ) ;
 int FUNC_4 (struct sja1000_priv const*,int ) ;
 int FUNC_5 (struct sja1000_priv const*,int ) ;
 int FUNC_6 (struct sja1000_priv const*,int ) ;

__attribute__((used)) static inline int FUNC_7(const struct sja1000_priv *VAR_13)
{
 int VAR_14 = 0;





 if ((VAR_13->read_reg(VAR_13, VAR_1) & VAR_3) ==
     VAR_2 &&
     (VAR_13->read_reg(VAR_13, VAR_12) == VAR_7) &&
     (VAR_13->read_reg(VAR_13, VAR_10) == VAR_4))
  VAR_14 = 1;


 VAR_13->write_reg(VAR_13, VAR_9, VAR_0);





 if (VAR_13->read_reg(VAR_13, VAR_11) == VAR_6 &&
     VAR_13->read_reg(VAR_13, VAR_12) == VAR_8 &&
     VAR_13->read_reg(VAR_13, VAR_10) == VAR_5)
  return VAR_14;

 return 0;
}

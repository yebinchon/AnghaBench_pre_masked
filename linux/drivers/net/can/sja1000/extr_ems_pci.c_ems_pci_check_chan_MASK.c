
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1000_priv {unsigned char (* read_reg ) (struct sja1000_priv const*,int ) ;int (* write_reg ) (struct sja1000_priv const*,int ,unsigned char) ;} ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sja1000_priv const*,int ,int) ;
 int FUNC_1 (struct sja1000_priv const*,int ,unsigned char) ;
 unsigned char FUNC_2 (struct sja1000_priv const*,int ) ;

__attribute__((used)) static inline int FUNC_3(const struct sja1000_priv *VAR_3)
{
 unsigned char VAR_4;


 VAR_3->write_reg(VAR_3, VAR_2, 1);

 VAR_3->write_reg(VAR_3, VAR_1, VAR_0);


 VAR_4 = VAR_3->read_reg(VAR_3, VAR_1);

 if (VAR_4 == VAR_0)
  return 1;

 return 0;
}

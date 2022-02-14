
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_msiof_spi_priv {int ctlr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sh_msiof_spi_priv*,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sh_msiof_spi_priv *VAR_4, void *VAR_5)
{
 bool VAR_6 = FUNC_1(VAR_4->ctlr);
 int VAR_7 = 0;


 if (!VAR_6)
  VAR_7 = FUNC_0(VAR_4, VAR_1, 0);
 if (!VAR_7)
  VAR_7 = FUNC_0(VAR_4, VAR_3, 0);
 if (VAR_5 && !VAR_7)
  VAR_7 = FUNC_0(VAR_4, VAR_0, 0);
 if (!VAR_7 && !VAR_6)
  VAR_7 = FUNC_0(VAR_4, VAR_2, 0);

 return VAR_7;
}

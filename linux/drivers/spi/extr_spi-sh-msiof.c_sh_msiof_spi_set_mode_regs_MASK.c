
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sh_msiof_spi_priv {TYPE_1__* ctlr; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct sh_msiof_spi_priv*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct sh_msiof_spi_priv *VAR_4,
           const void *VAR_5, void *VAR_6,
           u32 VAR_7, u32 VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_7) | FUNC_1(VAR_8);

 if (VAR_5 || (VAR_4->ctlr->flags & VAR_2))
  FUNC_2(VAR_4, VAR_3, VAR_9);
 else
  FUNC_2(VAR_4, VAR_3, VAR_9 | VAR_0);

 if (VAR_6)
  FUNC_2(VAR_4, VAR_1, VAR_9);
}

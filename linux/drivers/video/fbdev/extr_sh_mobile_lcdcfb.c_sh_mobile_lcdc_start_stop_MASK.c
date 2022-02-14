
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sh_mobile_lcdc_priv {TYPE_1__* ch; } ;
struct TYPE_3__ {int enabled; } ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (struct sh_mobile_lcdc_priv*,int ) ;
 unsigned long FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (struct sh_mobile_lcdc_priv*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct sh_mobile_lcdc_priv *VAR_5,
          int VAR_6)
{
 unsigned long VAR_7 = FUNC_2(VAR_5, VAR_3);
 int VAR_8;


 if (VAR_6)
  FUNC_4(VAR_5, VAR_3, VAR_7 | VAR_0);
 else
  FUNC_4(VAR_5, VAR_3, VAR_7 & ~VAR_0);


 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_5->ch); VAR_8++)
  if (FUNC_2(VAR_5, VAR_3) & VAR_5->ch[VAR_8].enabled)
   while (1) {
    VAR_7 = FUNC_3(&VAR_5->ch[VAR_8], VAR_1)
        & VAR_2;
    if (VAR_6 && VAR_7 == VAR_2)
     break;
    if (!VAR_6 && VAR_7 == 0)
     break;
    FUNC_1();
   }

 if (!VAR_6)
  FUNC_4(VAR_5, VAR_4, 1);
}

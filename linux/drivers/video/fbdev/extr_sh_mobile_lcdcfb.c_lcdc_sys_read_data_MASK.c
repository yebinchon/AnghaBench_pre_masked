
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_chan {int lcdc; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct sh_mobile_lcdc_chan*) ;
 unsigned long FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static unsigned long FUNC_5(void *VAR_7)
{
 struct sh_mobile_lcdc_chan *VAR_8 = VAR_7;

 FUNC_3(VAR_8->lcdc, VAR_5, VAR_2);
 FUNC_2(VAR_8->lcdc, VAR_6, VAR_3, 0);
 FUNC_3(VAR_8->lcdc, VAR_4, VAR_0 |
     (FUNC_0(VAR_8) ? 2 : 0));
 FUNC_4(1);
 FUNC_2(VAR_8->lcdc, VAR_6, VAR_3, 0);

 return FUNC_1(VAR_8->lcdc, VAR_5) & VAR_1;
}

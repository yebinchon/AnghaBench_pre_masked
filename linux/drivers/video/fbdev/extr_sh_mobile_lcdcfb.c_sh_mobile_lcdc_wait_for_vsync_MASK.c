
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_chan {int vsync_completion; int lcdc; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct sh_mobile_lcdc_chan *VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;




 VAR_5 = FUNC_0(VAR_4->lcdc, VAR_3);
 VAR_5 |= VAR_2 | VAR_1;
 FUNC_1(VAR_4->lcdc, VAR_3, VAR_5);

 VAR_6 = FUNC_3(&VAR_4->vsync_completion,
       FUNC_2(100));
 if (!VAR_6)
  return -VAR_0;

 return 0;
}

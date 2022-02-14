
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf50633_bl {unsigned int brightness_limit; int bl; } ;
struct pcf50633 {int bl_pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct pcf50633_bl* FUNC_1 (int ) ;

int FUNC_2(struct pcf50633 *VAR_1, unsigned int VAR_2)
{
 struct pcf50633_bl *VAR_3 = FUNC_1(VAR_1->bl_pdev);

 if (!VAR_3)
  return -VAR_0;

 VAR_3->brightness_limit = VAR_2 & 0x3f;
 FUNC_0(VAR_3->bl);

 return 0;
}

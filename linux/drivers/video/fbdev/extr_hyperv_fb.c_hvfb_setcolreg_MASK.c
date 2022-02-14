
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int transp; int blue; int green; int red; } ;
struct fb_info {int* pseudo_palette; TYPE_1__ var; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int *) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_1, unsigned VAR_2, unsigned VAR_3,
     unsigned VAR_4, unsigned VAR_5, struct fb_info *VAR_6)
{
 u32 *VAR_7 = VAR_6->pseudo_palette;

 if (VAR_1 > 15)
  return -VAR_0;

 VAR_7[VAR_1] = FUNC_0(VAR_2, &VAR_6->var.red)
  | FUNC_0(VAR_3, &VAR_6->var.green)
  | FUNC_0(VAR_4, &VAR_6->var.blue)
  | FUNC_0(VAR_5, &VAR_6->var.transp);

 return 0;
}

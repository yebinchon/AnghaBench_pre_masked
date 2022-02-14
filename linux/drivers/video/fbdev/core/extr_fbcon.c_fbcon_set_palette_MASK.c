
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct vc_data {size_t vc_num; int* vc_palette; } ;
struct fb_info {int fix; int var; } ;
struct TYPE_4__ {int len; scalar_t__ start; } ;


 size_t* VAR_0 ;
 int FUNC_0 (struct vc_data*) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,struct fb_info*) ;
 scalar_t__ FUNC_5 (struct vc_data*,struct fb_info*) ;
 int* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 struct fb_info** VAR_5 ;

__attribute__((used)) static void FUNC_6(struct vc_data *VAR_6, const unsigned char *VAR_7)
{
 struct fb_info *VAR_8 = VAR_5[VAR_0[VAR_6->vc_num]];
 int VAR_9, VAR_10, VAR_11, VAR_12;
 u8 VAR_13;

 if (FUNC_5(VAR_6, VAR_8))
  return;

 if (!FUNC_0(VAR_6))
  return;

 VAR_12 = FUNC_3(&VAR_8->var, &VAR_8->fix);
 if (VAR_12 > 3) {
  for (VAR_9 = VAR_10 = 0; VAR_9 < 16; VAR_9++) {
   VAR_11 = VAR_7[VAR_9];
   VAR_13 = VAR_6->vc_palette[VAR_10++];
   VAR_4[VAR_11] = (VAR_13 << 8) | VAR_13;
   VAR_13 = VAR_6->vc_palette[VAR_10++];
   VAR_3[VAR_11] = (VAR_13 << 8) | VAR_13;
   VAR_13 = VAR_6->vc_palette[VAR_10++];
   VAR_1[VAR_11] = (VAR_13 << 8) | VAR_13;
  }
  VAR_2.len = 16;
  VAR_2.start = 0;




 } else
  FUNC_1(FUNC_2(1 << VAR_12), &VAR_2);

 FUNC_4(&VAR_2, VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef unsigned int u16 ;
struct tw5864_input {unsigned int* md_threshold_grid_values; } ;
struct TYPE_2__ {scalar_t__ addr; } ;
struct tw5864_h264_frame {TYPE_1__ mv; struct tw5864_input* input; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct tw5864_h264_frame *VAR_1)
{
 struct tw5864_input *VAR_2 = VAR_1->input;
 u32 *VAR_3 = (u32 *)VAR_1->mv.addr;
 int VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  const u16 VAR_6 = VAR_2->md_threshold_grid_values[VAR_4];
  const unsigned int VAR_7 = FUNC_0(VAR_3[VAR_4]);

  if (VAR_7 > VAR_6)
   VAR_5 = 1;

  if (VAR_5)
   break;
 }
 return VAR_5;
}

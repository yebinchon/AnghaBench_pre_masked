
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int vb2_buf; } ;
struct go7007_buffer {int frame_offset; TYPE_1__ vb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int* FUNC_0 (int *,int ) ;

__attribute__((used)) static u32 FUNC_1(struct go7007_buffer *VAR_3, int VAR_4)
{
 u8 *VAR_5 = FUNC_0(&VAR_3->vb.vb2_buf, 0);

 switch (VAR_4) {
 case 131:
  return VAR_1;
 case 128:
  switch ((VAR_5[VAR_3->frame_offset + 4] >> 6) & 0x3) {
  case 0:
   return VAR_1;
  case 1:
   return VAR_2;
  case 2:
   return VAR_0;
  default:
   return 0;
  }
 case 130:
 case 129:
  switch ((VAR_5[VAR_3->frame_offset + 5] >> 3) & 0x7) {
  case 1:
   return VAR_1;
  case 2:
   return VAR_2;
  case 3:
   return VAR_0;
  default:
   return 0;
  }
 }

 return 0;
}

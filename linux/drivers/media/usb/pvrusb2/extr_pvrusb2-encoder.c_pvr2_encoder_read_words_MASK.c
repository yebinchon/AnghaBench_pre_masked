
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pvr2_hdw {unsigned int* cmd_buffer; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int*,unsigned int) ;
 int FUNC_1 (struct pvr2_hdw*,unsigned int*,int,unsigned int*,int) ;

__attribute__((used)) static int FUNC_2(struct pvr2_hdw *VAR_2,
       unsigned int VAR_3,
       u32 *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;
 unsigned int VAR_8;
 while (VAR_5) {
  VAR_8 = 16;
  if (VAR_8 > VAR_5) VAR_8 = VAR_5;
  if (VAR_8 < 16) VAR_8 = 1;
  VAR_2->cmd_buffer[0] =
   ((VAR_8 == 1) ?
    VAR_1 : VAR_0);
  VAR_2->cmd_buffer[1] = 0;
  VAR_2->cmd_buffer[2] = 0;
  VAR_2->cmd_buffer[3] = 0;
  VAR_2->cmd_buffer[4] = 0;
  VAR_2->cmd_buffer[5] = ((VAR_3>>16) & 0xffu);
  VAR_2->cmd_buffer[6] = ((VAR_3>>8) & 0xffu);
  VAR_2->cmd_buffer[7] = (VAR_3 & 0xffu);
  VAR_7 = FUNC_1(VAR_2,
     VAR_2->cmd_buffer,8,
     VAR_2->cmd_buffer,
     (VAR_8 == 1 ? 4 : 16 * 4));
  if (VAR_7) return VAR_7;

  for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
   VAR_4[VAR_6] = FUNC_0(VAR_2->cmd_buffer,VAR_6*4);
  }
  VAR_4 += VAR_8;
  VAR_5 -= VAR_8;
  VAR_3 += VAR_8;
 }

 return 0;
}

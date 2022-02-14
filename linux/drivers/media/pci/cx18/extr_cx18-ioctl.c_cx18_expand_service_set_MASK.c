
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct v4l2_sliced_vbi_format {int ** service_lines; scalar_t__ service_set; } ;


 int FUNC_0 (int,int,scalar_t__,int) ;

void FUNC_1(struct v4l2_sliced_vbi_format *VAR_0, int VAR_1)
{
 u16 VAR_2 = VAR_0->service_set;
 int VAR_3, VAR_4;

 VAR_0->service_set = 0;
 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < 24; VAR_4++)
   VAR_0->service_lines[VAR_3][VAR_4] = FUNC_0(VAR_3, VAR_4, VAR_2, VAR_1);
 }
}

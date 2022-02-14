
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_sliced_vbi_format {int io_size; int service_set; int** service_lines; int** reserved; } ;
struct v4l2_sliced_vbi_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int**,int ,int) ;

void FUNC_1(struct v4l2_sliced_vbi_format *VAR_3, u32 VAR_4)
{
 VAR_3->io_size = sizeof(struct v4l2_sliced_vbi_data) * 36;
 VAR_3->service_set = VAR_4;
 FUNC_0(VAR_3->service_lines, 0, sizeof(VAR_3->service_lines));
 FUNC_0(VAR_3->reserved, 0, sizeof(VAR_3->reserved));

 if (VAR_3->service_set == 0)
  return;

 if (VAR_3->service_set & VAR_0) {
  VAR_3->service_lines[0][21] = VAR_0;
  VAR_3->service_lines[1][21] = VAR_0;
 }
 if (VAR_3->service_set & VAR_2) {
  unsigned VAR_5;

  for (VAR_5 = 7; VAR_5 <= 18; VAR_5++)
   VAR_3->service_lines[0][VAR_5] =
   VAR_3->service_lines[1][VAR_5] = VAR_1;
  VAR_3->service_lines[0][23] = VAR_2;
 }
}

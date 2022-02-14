
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct v4l2_decode_vbi_line {int* p; int line; int is_second_field; scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__* sliced_data; } ;
struct cx18 {TYPE_2__ vbi; int sd_av; scalar_t__ is_60hz; } ;
struct TYPE_3__ {int data; int line; int field; scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*,int) ;
 int* VAR_3 ;
 int FUNC_1 (int ,struct v4l2_decode_vbi_line,int ,struct v4l2_decode_vbi_line*) ;

__attribute__((used)) static u32 FUNC_2(struct cx18 *VAR_4, u8 *VAR_5, u32 VAR_6,
          const u32 VAR_7)
{
 struct v4l2_decode_vbi_line VAR_8;
 int VAR_9;
 u32 VAR_10 = 0;
 u32 VAR_11 = VAR_4->is_60hz ? VAR_1
        : VAR_0;


 for (VAR_9 = VAR_7, VAR_5 += VAR_7; VAR_9 < VAR_6; VAR_9++, VAR_5++) {
  if (VAR_5[0] == 0xff && !VAR_5[1] && !VAR_5[2] &&
      (VAR_5[3] == VAR_3[0] ||
       VAR_5[3] == VAR_3[1]))
   break;
 }






 VAR_6 -= (VAR_9 - VAR_7);
 if (VAR_6 < VAR_11)
  return VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_6 / VAR_11; VAR_9++) {
  u8 *VAR_12 = VAR_5 + VAR_9 * VAR_11;


  if (VAR_12[0] != 0xff || VAR_12[1] || VAR_12[2] ||
      (VAR_12[3] != VAR_3[0] &&
       VAR_12[3] != VAR_3[1]))
   continue;
  VAR_8.p = VAR_12 + 4;
  FUNC_1(VAR_4->sd_av, VAR_8, VAR_2, &VAR_8);
  if (VAR_8.type) {
   VAR_4->vbi.sliced_data[VAR_10].id = VAR_8.type;
   VAR_4->vbi.sliced_data[VAR_10].field = VAR_8.is_second_field;
   VAR_4->vbi.sliced_data[VAR_10].line = VAR_8.line;
   FUNC_0(VAR_4->vbi.sliced_data[VAR_10].data, VAR_8.p, 42);
   VAR_10++;
  }
 }
 return VAR_10;
}

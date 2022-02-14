
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int bitrate; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int*,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static u8 *
FUNC_2(u8 *VAR_2, const u8 *VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = VAR_3[1];
 u8 VAR_8;


 VAR_3 += 2;

 FUNC_1(VAR_0, "AP IE Rates", (u8 *) VAR_3, VAR_7);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  VAR_8 = VAR_1[VAR_5].bitrate / 5;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
   if (VAR_8 == (VAR_3[VAR_6] & 0x7f)) {
    *VAR_2++ = VAR_3[VAR_6];
    *VAR_4 = *VAR_4 + 1;
   }
  }
 }
 return VAR_2;
}

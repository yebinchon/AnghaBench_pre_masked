
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_size_row; scalar_t__ vc_origin; } ;
struct fbcon_display {int dummy; } ;


 unsigned short* FUNC_0 (unsigned short*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct vc_data*,unsigned short*,int,int,int) ;
 unsigned short FUNC_3 (unsigned short*) ;
 int FUNC_4 (unsigned short,unsigned short*) ;

__attribute__((used)) static void FUNC_5(struct vc_data *VAR_0, struct fbcon_display *VAR_1,
    int VAR_2, int VAR_3, int VAR_4)
{
 unsigned short *VAR_5 = (unsigned short *)
     (VAR_0->vc_origin + VAR_0->vc_size_row * VAR_2);
 unsigned short *VAR_6 = VAR_5 + VAR_4;

 while (VAR_3--) {
  unsigned short *VAR_7 = VAR_6;
  unsigned short *VAR_8 = FUNC_0(VAR_6, 1);
  unsigned short VAR_9;
  int VAR_10 = 0;
  unsigned short VAR_11 = 1;

  do {
   VAR_9 = FUNC_3(VAR_6);
   if (VAR_11 != (VAR_9 & 0xff00)) {
    VAR_11 = VAR_9 & 0xff00;
    if (VAR_6 > VAR_7) {
     FUNC_2(VAR_0, VAR_7, VAR_6 - VAR_7,
          VAR_2, VAR_10);
     VAR_10 += VAR_6 - VAR_7;
     VAR_7 = VAR_6;
    }
   }
   if (VAR_9 == FUNC_3(VAR_5)) {
    if (VAR_6 > VAR_7) {
     FUNC_2(VAR_0, VAR_7, VAR_6 - VAR_7,
           VAR_2, VAR_10);
     VAR_10 += VAR_6 - VAR_7 + 1;
     VAR_7 = VAR_6 + 1;
    } else {
     VAR_10++;
     VAR_7++;
    }
   }
   FUNC_4(VAR_9, VAR_5);
   FUNC_1();
   VAR_6++;
   VAR_5++;
  } while (VAR_6 < VAR_8);
  if (VAR_6 > VAR_7)
   FUNC_2(VAR_0, VAR_7, VAR_6 - VAR_7, VAR_2, VAR_10);
  FUNC_1();
  if (VAR_4 > 0)
   VAR_2++;
  else {
   VAR_2--;

   VAR_6 -= VAR_0->vc_size_row;
   VAR_5 -= VAR_0->vc_size_row;
  }
 }
}

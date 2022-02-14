
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgastate {int vgabase; } ;
struct vc_data {int vc_hi_font_mask; int * vc_sw; } ;
struct TYPE_2__ {struct vc_data* d; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct vc_data*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned short) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 char FUNC_6 (char*) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (char,char*) ;
 int FUNC_10 (int ,int ,int) ;

__attribute__((used)) static int FUNC_11(struct vgastate *VAR_22, char *VAR_23, int VAR_24,
  bool VAR_25)
{
 unsigned short VAR_26 = VAR_20 + 6;
 int VAR_27 = 0x00, VAR_28, VAR_29;
 char *VAR_30;
 bool VAR_31 = 0;
 if (VAR_21 != VAR_11) {
  VAR_30 = (char *) FUNC_0(VAR_14, 0);
  VAR_28 = 0x0e;
 } else {
  VAR_30 = (char *) FUNC_0(VAR_12, 0);
  VAR_28 = 0x0a;
 }
 if (VAR_24) {
  VAR_18 = !VAR_23;
  if (!VAR_23)
   VAR_25 = 0;
  VAR_27 = VAR_23 ? (VAR_25 ? 0x0e : 0x0a) : 0x00;
 }

 if (!VAR_18)
  VAR_30 += 4 * VAR_13;


 FUNC_4(&VAR_19);

 FUNC_10(VAR_22->vgabase, VAR_10, 0x1);

 FUNC_10(VAR_22->vgabase, VAR_9, 0x04);

 FUNC_10(VAR_22->vgabase, VAR_8, 0x07);

 FUNC_10(VAR_22->vgabase, VAR_10, 0x03);


 FUNC_8(VAR_22->vgabase, VAR_6, 0x02);

 FUNC_8(VAR_22->vgabase, VAR_5, 0x00);

 FUNC_8(VAR_22->vgabase, VAR_4, 0x00);
 FUNC_5(&VAR_19);

 if (VAR_23) {
  if (VAR_24)
   for (VAR_29 = 0; VAR_29 < VAR_13; VAR_29++) {
    FUNC_9(VAR_23[VAR_29], VAR_30 + VAR_29);
    FUNC_2();
   }
  else
   for (VAR_29 = 0; VAR_29 < VAR_13; VAR_29++) {
    VAR_23[VAR_29] = FUNC_6(VAR_30 + VAR_29);
    FUNC_2();
   }






  if (VAR_25) {
   VAR_30 += 2 * VAR_13;
   VAR_23 += VAR_13;
   if (VAR_24)
    for (VAR_29 = 0; VAR_29 < VAR_13; VAR_29++) {
     FUNC_9(VAR_23[VAR_29], VAR_30 + VAR_29);
     FUNC_2();
    }
   else
    for (VAR_29 = 0; VAR_29 < VAR_13; VAR_29++) {
     VAR_23[VAR_29] = FUNC_6(VAR_30 + VAR_29);
     FUNC_2();
    }
  }
 }

 FUNC_4(&VAR_19);

 FUNC_10(VAR_22->vgabase, VAR_10, 0x01);

 FUNC_10(VAR_22->vgabase, VAR_9, 0x03);

 FUNC_10(VAR_22->vgabase, VAR_8, 0x03);

 if (VAR_24)
  FUNC_10(VAR_22->vgabase, VAR_7, VAR_27);

 FUNC_10(VAR_22->vgabase, VAR_10, 0x03);


 FUNC_8(VAR_22->vgabase, VAR_6, 0x00);

 FUNC_8(VAR_22->vgabase, VAR_5, 0x10);

 FUNC_8(VAR_22->vgabase, VAR_4, VAR_28);


 if ((VAR_24) && (VAR_25 != VAR_16)) {
  VAR_16 = VAR_25;


  FUNC_3(VAR_26);

  FUNC_7(VAR_22->vgabase, VAR_3, VAR_25 ? 0x07 : 0x0f);


  FUNC_3(VAR_26);
  FUNC_7(VAR_22->vgabase, VAR_2, 0);
  VAR_31 = 1;
 }
 FUNC_5(&VAR_19);

 if (VAR_31) {
  for (VAR_29 = 0; VAR_29 < VAR_1; VAR_29++) {
   struct vc_data *VAR_32 = VAR_15[VAR_29].d;
   if (VAR_32 && VAR_32->vc_sw == &VAR_17) {


    VAR_32->vc_hi_font_mask = 0x00;
    FUNC_1(VAR_32);
    VAR_32->vc_hi_font_mask = VAR_25 ? 0x0800 : 0;
   }
  }
 }
 return 0;
}

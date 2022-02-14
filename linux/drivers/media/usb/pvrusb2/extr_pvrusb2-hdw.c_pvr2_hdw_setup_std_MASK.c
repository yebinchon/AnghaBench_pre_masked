
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct TYPE_8__ {int valid_bits; } ;
struct TYPE_9__ {TYPE_2__ type_bitmask; } ;
struct TYPE_10__ {TYPE_3__ def; } ;
struct pvr2_hdw {int std_mask_eeprom; int std_mask_avail; int std_mask_cur; int std_dirty; TYPE_4__ std_info_cur; TYPE_1__* hdw_desc; } ;
typedef int buf ;
struct TYPE_11__ {int msk; int pat; int std; } ;
struct TYPE_7__ {int default_std_mask; } ;


 unsigned int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int FUNC_1 (struct pvr2_hdw*) ;
 unsigned int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int ,char*,unsigned int,char*) ;
 TYPE_5__* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct pvr2_hdw *VAR_2)
{
 char VAR_3[40];
 unsigned int VAR_4;
 v4l2_std_id VAR_5,VAR_6,VAR_7;

 VAR_5 = FUNC_1(VAR_2);
 VAR_7 = VAR_5 ? 0 : VAR_2->hdw_desc->default_std_mask;

 VAR_4 = FUNC_2(VAR_3,sizeof(VAR_3),VAR_2->std_mask_eeprom);
 FUNC_3(VAR_0,
     "Supported video standard(s) reported available in hardware: %.*s",
     VAR_4,VAR_3);

 VAR_2->std_mask_avail = VAR_2->std_mask_eeprom;

 VAR_6 = (VAR_5|VAR_7) & ~VAR_2->std_mask_avail;
 if (VAR_6) {
  VAR_4 = FUNC_2(VAR_3,sizeof(VAR_3),VAR_6);
  FUNC_3(VAR_0,
      "Expanding supported video standards to include: %.*s",
      VAR_4,VAR_3);
  VAR_2->std_mask_avail |= VAR_6;
 }

 VAR_2->std_info_cur.def.type_bitmask.valid_bits = VAR_2->std_mask_avail;

 if (VAR_5) {
  VAR_4 = FUNC_2(VAR_3,sizeof(VAR_3),VAR_5);
  FUNC_3(VAR_0,
      "Initial video standard forced to %.*s",
      VAR_4,VAR_3);
  VAR_2->std_mask_cur = VAR_5;
  VAR_2->std_dirty = !0;
  return;
 }
 if (VAR_7) {
  VAR_4 = FUNC_2(VAR_3,sizeof(VAR_3),VAR_7);
  FUNC_3(VAR_0,
      "Initial video standard (determined by device type): %.*s",
      VAR_4, VAR_3);
  VAR_2->std_mask_cur = VAR_7;
  VAR_2->std_dirty = !0;
  return;
 }

 {
  unsigned int VAR_8;
  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++) {
   if (VAR_1[VAR_8].msk ?
       ((VAR_1[VAR_8].pat ^
        VAR_2->std_mask_eeprom) &
        VAR_1[VAR_8].msk) :
       (VAR_1[VAR_8].pat !=
        VAR_2->std_mask_eeprom)) continue;
   VAR_4 = FUNC_2(VAR_3,sizeof(VAR_3),
        VAR_1[VAR_8].std);
   FUNC_3(VAR_0,
       "Initial video standard guessed as %.*s",
       VAR_4,VAR_3);
   VAR_2->std_mask_cur = VAR_1[VAR_8].std;
   VAR_2->std_dirty = !0;
   return;
  }
 }

}

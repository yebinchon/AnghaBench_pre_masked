
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {int unit_number; int tuner_type; int tuner_updated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct pvr2_hdw *VAR_3)
{
 int VAR_4 = VAR_3->unit_number;
 int VAR_5 = -1;
 if ((VAR_4 >= 0) && (VAR_4 < VAR_1)) {
  VAR_5 = VAR_2[VAR_4];
 }
 if (VAR_5 < 0) return -VAR_0;
 VAR_3->tuner_type = VAR_5;
 VAR_3->tuner_updated = !0;
 return 0;
}

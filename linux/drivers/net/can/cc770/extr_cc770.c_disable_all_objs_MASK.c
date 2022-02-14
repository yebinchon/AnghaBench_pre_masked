
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cc770_priv {int* obj_flags; int control_normal_mode; } ;
struct TYPE_2__ {int ctrl0; int ctrl1; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct cc770_priv const*,int ,int) ;
 TYPE_1__* VAR_11 ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(const struct cc770_priv *VAR_12)
{
 int VAR_13, VAR_14;

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_12->obj_flags); VAR_13++) {
  VAR_14 = FUNC_2(VAR_13);

  if (VAR_12->obj_flags[VAR_13] & VAR_0) {
   if (VAR_13 > 0 && VAR_12->control_normal_mode & VAR_2)
    continue;

   FUNC_1(VAR_12, VAR_11[VAR_14].ctrl1,
     VAR_6 | VAR_4 |
     VAR_10 | VAR_7);
   FUNC_1(VAR_12, VAR_11[VAR_14].ctrl0,
     VAR_5 | VAR_9 |
     VAR_8 | VAR_3);
  } else {

   FUNC_1(VAR_12, VAR_11[VAR_14].ctrl1,
     VAR_7 | VAR_10 |
     VAR_1 | VAR_6);
   FUNC_1(VAR_12, VAR_11[VAR_14].ctrl0,
     VAR_5 | VAR_9 |
     VAR_8 | VAR_3);
  }
 }
}

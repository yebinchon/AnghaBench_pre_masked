
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ sensor; scalar_t__ bridge; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
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
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_13, s32 VAR_14, s32 VAR_15,
       s32 VAR_16, s32 VAR_17)
{
 struct sd *VAR_18 = (struct sd *) VAR_13;

 if (VAR_18->sensor == VAR_12) {
  VAR_14 = (VAR_14 << 2) - 1;
  FUNC_0(VAR_13, VAR_2, VAR_14);
  FUNC_0(VAR_13, VAR_1, VAR_14 >> 8);
  if (VAR_18->bridge == VAR_0)
   FUNC_0(VAR_13, VAR_5,
      VAR_15 >> 8);
  FUNC_0(VAR_13, VAR_6, VAR_15);
  if (VAR_18->bridge == VAR_0)
   FUNC_0(VAR_13, VAR_7,
     VAR_15 >> 8);
  FUNC_0(VAR_13, VAR_8, VAR_15);
  if (VAR_18->sensor == VAR_12) {
   if (VAR_18->bridge == VAR_0)
    FUNC_0(VAR_13, VAR_3,
      VAR_16 >> 8);
   FUNC_0(VAR_13, VAR_4, VAR_16);
   if (VAR_18->bridge == VAR_0)
    FUNC_0(VAR_13, VAR_9,
      VAR_17 >> 8);
   FUNC_0(VAR_13, VAR_10, VAR_17);
  }
  FUNC_0(VAR_13, VAR_11,
    VAR_18->bridge == VAR_0 ? 0x80 : 0x81);
  return;
 }


 FUNC_0(VAR_13, 0x10,
    VAR_14);

 FUNC_0(VAR_13, 0x00,
    VAR_15);
}

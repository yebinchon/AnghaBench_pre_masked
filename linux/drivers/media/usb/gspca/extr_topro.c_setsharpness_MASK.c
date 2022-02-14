
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {scalar_t__ bridge; } ;
struct TYPE_2__ {int width; } ;
struct gspca_dev {TYPE_1__ pixfmt; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_3, s32 VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_3;

 if (VAR_5->bridge == VAR_0) {
  VAR_4 |= 0x08;
  if (VAR_3->pixfmt.width == 640)
   FUNC_0(VAR_3, VAR_2, 0x00);
  else
   VAR_4 |= 0x04;
  FUNC_0(VAR_3, VAR_1, VAR_4);
 } else {
  VAR_4 = (VAR_4 << 5) | 0x08;
  FUNC_0(VAR_3, 0x59, VAR_4);
 }
}

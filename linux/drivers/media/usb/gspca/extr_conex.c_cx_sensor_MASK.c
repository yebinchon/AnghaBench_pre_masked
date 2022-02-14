
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {scalar_t__ curr_mode; TYPE_2__ cam; } ;
typedef int __u8 ;
struct TYPE_3__ {int priv; } ;


 int * VAR_0 ;
 int const* VAR_1 ;
 int const* VAR_2 ;
 int const* VAR_3 ;
 int const* VAR_4 ;
 int const* VAR_5 ;
 int const* VAR_6 ;
 int const* VAR_7 ;
 int const* VAR_8 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int const*,int) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev*VAR_9)
{
 int VAR_10 = 0;
 int VAR_11;
 const __u8 *VAR_12 = VAR_0;

 FUNC_1(VAR_9, 0x0020, VAR_2, 8);
 FUNC_1(VAR_9, 0x0028, VAR_3, 8);
 FUNC_1(VAR_9, 0x0010, VAR_1, 2);
 FUNC_2(VAR_9, 0x0092, 0x03);

 switch (VAR_9->cam.cam_mode[(int) VAR_9->curr_mode].priv) {
 case 0:
  FUNC_1(VAR_9, 0x0071, VAR_4, 4);
  break;
 case 1:
  FUNC_1(VAR_9, 0x0071, VAR_5, 4);
  break;
 default:

  FUNC_1(VAR_9, 0x0071, VAR_6, 4);
  break;
 case 3:
  FUNC_1(VAR_9, 0x0071, VAR_7, 4);
  break;
 }
 FUNC_1(VAR_9, 0x007b, VAR_8, 6);
 FUNC_2(VAR_9, 0x00f8, 0x00);
 FUNC_1(VAR_9, 0x0010, VAR_1, 2);
 FUNC_2(VAR_9, 0x0098, 0x41);
 for (VAR_10 = 0; VAR_10 < 11; VAR_10++) {
  if (VAR_10 == 3 || VAR_10 == 5 || VAR_10 == 8)
   VAR_11 = 8;
  else
   VAR_11 = 4;
  FUNC_1(VAR_9, 0x00e5, VAR_12, VAR_11);
  if (VAR_11 == 4)
   FUNC_0(VAR_9, 0x00e8, 1);
  else
   FUNC_0(VAR_9, 0x00e8, VAR_11);
  VAR_12 += VAR_11;
 }
 FUNC_0(VAR_9, 0x00e7, 8);
}

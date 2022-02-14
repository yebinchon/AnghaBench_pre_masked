
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sd {int flags; int sensor; int vstart; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct gspca_dev*,int,int*) ;
 int FUNC_2 (struct gspca_dev*,int,int*) ;
 int FUNC_3 (struct gspca_dev*,int,int) ;
 int FUNC_4 (struct gspca_dev*,int,int) ;
 int FUNC_5 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_6(struct gspca_dev *VAR_2, s32 VAR_3, s32 VAR_4)
{
 u8 VAR_5, VAR_6;
 u16 VAR_7;
 struct sd *VAR_8 = (struct sd *) VAR_2;

 if ((VAR_8->flags & VAR_0) && FUNC_0(VAR_1)) {
  VAR_3 = !VAR_3;
  VAR_4 = !VAR_4;
 }

 switch (VAR_8->sensor) {
 case 129:
  VAR_5 = 0x01;
  if (VAR_3)
   VAR_5 |= 0x20;
  if (VAR_4) {
   VAR_5 |= 0x10;
   VAR_8->vstart = 2;
  } else {
   VAR_8->vstart = 3;
  }
  FUNC_5(VAR_2, 0x1182, VAR_8->vstart);
  FUNC_3(VAR_2, 0x1e, VAR_5);
  break;
 case 128:
  FUNC_1(VAR_2, 0x1e, &VAR_5);
  VAR_5 &= ~0x30;
  VAR_6 = 0x01;
  if (VAR_3)
   VAR_5 |= 0x20;
  if (VAR_4) {
   VAR_5 |= 0x10;
   VAR_6 = 0x49;
  }
  FUNC_3(VAR_2, 0x1e, VAR_5);
  FUNC_3(VAR_2, 0x3a, VAR_6);
  break;
 case 131:
 case 132:
  FUNC_2(VAR_2, 0x20, &VAR_7);
  VAR_7 &= ~0xc0a0;
  if (VAR_3)
   VAR_7 |= 0x8080;
  if (VAR_4)
   VAR_7 |= 0x4020;
  FUNC_4(VAR_2, 0x20, VAR_7);
  break;
 case 133:
 case 134:
 case 130:
  FUNC_2(VAR_2, 0x20, &VAR_7);
  VAR_7 &= ~0x0003;
  if (VAR_3)
   VAR_7 |= 0x0002;
  if (VAR_4)
   VAR_7 |= 0x0001;
  FUNC_4(VAR_2, 0x20, VAR_7);
  break;
 case 135:
  FUNC_1(VAR_2, 0x01, &VAR_5);
  VAR_5 &= ~0x03;
  if (VAR_4)
   VAR_5 |= 0x01;
  if (VAR_3)
   VAR_5 |= 0x02;
  FUNC_3(VAR_2, 0x01, VAR_5);
  break;
 }
}

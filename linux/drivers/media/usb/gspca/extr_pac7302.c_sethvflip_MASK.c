
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sd {int flags; TYPE_2__* vflip; TYPE_1__* hflip; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_3__ {int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 u8 VAR_4, VAR_5, VAR_6;

 VAR_5 = VAR_3->hflip->val;
 if (VAR_3->flags & VAR_0)
  VAR_5 = !VAR_5;
 VAR_6 = VAR_3->vflip->val;
 if (VAR_3->flags & VAR_1)
  VAR_6 = !VAR_6;

 FUNC_0(VAR_2, 0xff, 0x03);
 VAR_4 = (VAR_5 ? 0x08 : 0x00) | (VAR_6 ? 0x04 : 0x00);
 FUNC_0(VAR_2, 0x21, VAR_4);


 FUNC_0(VAR_2, 0x11, 0x01);
}

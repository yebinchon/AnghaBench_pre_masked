
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct gspca_dev {int dummy; } ;
struct sd {int sensor; struct gspca_dev gspca_dev; TYPE_2__* vflip; TYPE_1__* hflip; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_3__ {int val; } ;






 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 u8 VAR_2;

 switch (VAR_1->sensor) {
 case 131:
  VAR_2 = 0x18;
  if (VAR_1->vflip->val)
   VAR_2 |= 0x01;
  FUNC_0(VAR_0, 0x01, VAR_2);
  break;
 case 130:
  VAR_2 = 0x02;
  if (!VAR_1->vflip->val)
   VAR_2 |= 0x80;
  FUNC_0(VAR_0, 0x75, VAR_2);
  break;
 case 129:
  VAR_2 = 0x06;
  if (VAR_1->vflip->val)
   VAR_2 |= 0x80;
  FUNC_0(VAR_0, 0x75, VAR_2);
  break;
 case 128:
  VAR_2 = 0x0a;
  if (VAR_1->hflip->val)
   VAR_2 |= 0x80;
  if (VAR_1->vflip->val)
   VAR_2 |= 0x40;
  FUNC_0(&VAR_1->gspca_dev, 0x1e, VAR_2);
  break;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sd {size_t sensor; TYPE_1__* plfreq; } ;
struct gspca_dev {int dummy; } ;
typedef int __u8 ;
struct TYPE_4__ {int sensor_addr; } ;
struct TYPE_3__ {int val; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int*) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;

 if (VAR_4->sensor == VAR_0 || VAR_4->sensor == VAR_1) {




  __u8 VAR_5[] = {0xa0, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x10};
  switch (VAR_4->plfreq->val) {
  default:


   VAR_5[3] = 0;
   break;
  case 1:
   VAR_5[3] = (VAR_4->sensor == VAR_0)
     ? 0x4f : 0x8a;
   break;
  }
  VAR_5[1] = VAR_2[VAR_4->sensor].sensor_addr;
  FUNC_0(VAR_3, VAR_5);
 }
}

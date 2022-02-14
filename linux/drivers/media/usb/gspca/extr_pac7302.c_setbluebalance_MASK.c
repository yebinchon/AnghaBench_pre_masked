
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {TYPE_1__* blue_balance; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_2__ {int val; } ;


 int FUNC_0 (struct gspca_dev*,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 FUNC_0(VAR_0, 0xff, 0x00);
 FUNC_0(VAR_0, 0x03,
       FUNC_1(VAR_1->blue_balance->val));

 FUNC_0(VAR_0, 0xdc, 0x01);
}

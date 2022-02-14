
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {TYPE_1__* contrast; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_2__ {int val; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 u8 VAR_3;
 u8 VAR_4[6];

 VAR_3 = VAR_2->contrast->val * 37 / (VAR_0 + 1)
    + 37;
 VAR_4[0] = (VAR_3 + 1) / 2;
 VAR_4[1] = 0;
 VAR_4[2] = VAR_3;
 VAR_4[3] = 0;
 VAR_4[4] = VAR_3 / 5;
 VAR_4[5] = 0;
 FUNC_0(VAR_1, 0x84, VAR_4, sizeof VAR_4);
}

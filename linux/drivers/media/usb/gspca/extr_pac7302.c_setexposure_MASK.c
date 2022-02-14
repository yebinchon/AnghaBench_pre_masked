
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct gspca_dev {TYPE_1__* exposure; } ;
struct TYPE_2__ {int val; } ;


 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 u8 VAR_1;
 u16 VAR_2;






 VAR_1 = (90 * VAR_0->exposure->val + 1999) / 2000;







 if (VAR_1 < 6)
  VAR_1 = 6;
 else if (VAR_1 > 63)
  VAR_1 = 63;






 if (VAR_1 < 6 || VAR_1 > 12)
  VAR_1 = ((VAR_1 + 2) / 3) * 3;





 VAR_2 = (VAR_0->exposure->val * 45 * 448) / (1000 * VAR_1);

 VAR_2 = 448 - VAR_2;

 FUNC_0(VAR_0, 0xff, 0x03);
 FUNC_0(VAR_0, 0x02, VAR_1);
 FUNC_0(VAR_0, 0x0e, VAR_2 & 0xff);
 FUNC_0(VAR_0, 0x0f, VAR_2 >> 8);


 FUNC_0(VAR_0, 0x11, 0x01);
}

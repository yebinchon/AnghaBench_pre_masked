
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int * usb_buf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*,scalar_t__,char*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct gspca_dev*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_2)
{
 int VAR_3;
 u8 VAR_4[6];

 if (VAR_1 < VAR_0)
  return;

 for (VAR_3 = 0; VAR_3 < 6; VAR_3++) {
  FUNC_1(VAR_2, 0, VAR_3, 1);
  VAR_4[VAR_3] = VAR_2->usb_buf[0];
 }
 FUNC_0(VAR_2, VAR_0,
    "Read info: %d %d %d %d %d %d. Should be 1,0,2,2,0,0\n",
    VAR_4[0], VAR_4[1], VAR_4[2],
    VAR_4[3], VAR_4[4], VAR_4[5]);
}

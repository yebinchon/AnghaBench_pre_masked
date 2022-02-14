
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ushc_data {int clock_freq; int usb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int,int,int *,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ushc_data*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ushc_data *VAR_3, int VAR_4, bool VAR_5)
{
 int VAR_6;


 if (VAR_4 == 0)
  VAR_4 = 400000;

 VAR_6 = FUNC_2(VAR_3, VAR_2,
        VAR_5 ? VAR_2 : 0);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_3->usb_dev, FUNC_1(VAR_3->usb_dev, 0),
         VAR_0, VAR_1,
         VAR_4 & 0xffff, (VAR_4 >> 16) & 0xffff, ((void*)0), 0, 100);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_3->clock_freq = VAR_4;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtl2832_platform_data {int (* pid_filter ) (int ,int,int ,int) ;} ;
struct rtl2830_platform_data {int (* pid_filter ) (int ,int,int ,int) ;} ;
struct rtl28xxu_dev {scalar_t__ chip_id; struct rtl2832_platform_data rtl2832_platform_data; struct rtl2830_platform_data rtl2830_platform_data; } ;
struct dvb_usb_adapter {int * fe; } ;


 scalar_t__ VAR_0 ;
 struct rtl28xxu_dev* FUNC_0 (struct dvb_usb_adapter*) ;
 int FUNC_1 (int ,int,int ,int) ;
 int FUNC_2 (int ,int,int ,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_1, int VAR_2,
          u16 VAR_3, int VAR_4)
{
 struct rtl28xxu_dev *VAR_5 = FUNC_0(VAR_1);

 if (VAR_5->chip_id == VAR_0) {
  struct rtl2830_platform_data *VAR_6 = &VAR_5->rtl2830_platform_data;

  return VAR_6->pid_filter(VAR_1->fe[0], VAR_2, VAR_3, VAR_4);
 } else {
  struct rtl2832_platform_data *VAR_7 = &VAR_5->rtl2832_platform_data;

  return VAR_7->pid_filter(VAR_1->fe[0], VAR_2, VAR_3, VAR_4);
 }
}

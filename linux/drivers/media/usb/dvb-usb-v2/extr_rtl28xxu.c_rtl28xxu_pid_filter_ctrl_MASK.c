
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl2832_platform_data {int (* pid_filter_ctrl ) (int ,int) ;} ;
struct rtl2830_platform_data {int (* pid_filter_ctrl ) (int ,int) ;} ;
struct rtl28xxu_dev {scalar_t__ chip_id; struct rtl2832_platform_data rtl2832_platform_data; struct rtl2830_platform_data rtl2830_platform_data; } ;
struct dvb_usb_adapter {int * fe; } ;


 scalar_t__ VAR_0 ;
 struct rtl28xxu_dev* FUNC_0 (struct dvb_usb_adapter*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_adapter *VAR_1, int VAR_2)
{
 struct rtl28xxu_dev *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->chip_id == VAR_0) {
  struct rtl2830_platform_data *VAR_4 = &VAR_3->rtl2830_platform_data;

  return VAR_4->pid_filter_ctrl(VAR_1->fe[0], VAR_2);
 } else {
  struct rtl2832_platform_data *VAR_5 = &VAR_3->rtl2832_platform_data;

  return VAR_5->pid_filter_ctrl(VAR_1->fe[0], VAR_2);
 }
}

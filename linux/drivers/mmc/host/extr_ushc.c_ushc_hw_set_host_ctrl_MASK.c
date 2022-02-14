
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ushc_data {int host_ctrl; int usb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int,int ,int *,int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ushc_data *VAR_2, u16 VAR_3, u16 VAR_4)
{
 u16 VAR_5;
 int VAR_6;

 VAR_5 = (VAR_2->host_ctrl & ~VAR_3) | VAR_4;
 VAR_6 = FUNC_0(VAR_2->usb_dev, FUNC_1(VAR_2->usb_dev, 0),
         VAR_0, VAR_1,
         VAR_5, 0, ((void*)0), 0, 100);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_2->host_ctrl = VAR_5;
 return 0;
}

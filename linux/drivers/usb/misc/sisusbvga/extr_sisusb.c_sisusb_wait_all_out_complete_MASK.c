
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sisusb_usb_data {int wait_q; } ;


 int VAR_0 ;
 int FUNC_0 (struct sisusb_usb_data*) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct sisusb_usb_data *VAR_1)
{
 int VAR_2 = 5 * VAR_0, VAR_3 = 1;

 FUNC_1(VAR_1->wait_q, (VAR_3 = FUNC_0(VAR_1)),
   VAR_2);

 return VAR_3;
}

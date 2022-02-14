
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
 int VAR_2, VAR_3 = 5 * VAR_0;

 FUNC_1(VAR_1->wait_q,
   ((VAR_2 = FUNC_0(VAR_1)) >= 0), VAR_3);

 return VAR_2;
}

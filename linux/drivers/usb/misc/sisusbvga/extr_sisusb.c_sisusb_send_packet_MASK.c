
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sisusb_usb_data {int dummy; } ;
struct sisusb_packet {scalar_t__ data; } ;
typedef int ssize_t ;
typedef int __le32 ;


 int FUNC_0 (struct sisusb_packet*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sisusb_usb_data*,int ,int,char*,int *,int *,int ) ;
 int FUNC_3 (struct sisusb_usb_data*,int ,int,char*,int *,int ,int *,int ,int ) ;
 int FUNC_4 (struct sisusb_usb_data*) ;

__attribute__((used)) static int FUNC_5(struct sisusb_usb_data *VAR_2, int VAR_3,
  struct sisusb_packet *VAR_4)
{
 int VAR_5;
 ssize_t VAR_6 = 0;
 __le32 VAR_7;

 if (VAR_3 == 6)
  VAR_4->data = 0;







 FUNC_0(VAR_4);


 VAR_5 = FUNC_3(VAR_2, VAR_1, VAR_3,
   (char *)VAR_4, ((void*)0), 0, &VAR_6, 0, 0);

 if ((VAR_5 == 0) && (VAR_3 == 6)) {




  VAR_5 = FUNC_2(VAR_2, VAR_0, 4,
    (char *)&VAR_7, ((void*)0), &VAR_6, 0);

  VAR_4->data = FUNC_1(VAR_7);
 }

 return VAR_5;
}

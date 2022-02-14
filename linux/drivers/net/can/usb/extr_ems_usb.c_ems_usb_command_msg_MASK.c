
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ems_usb {int * tx_msg_buffer; int udev; } ;
struct ems_cpc_msg {scalar_t__ length; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct ems_cpc_msg*,scalar_t__) ;
 int FUNC_1 (int *,int ,size_t) ;
 int FUNC_2 (int ,int ,int *,scalar_t__,int*,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct ems_usb *VAR_2, struct ems_cpc_msg *VAR_3)
{
 int VAR_4;


 FUNC_0(&VAR_2->tx_msg_buffer[VAR_0], VAR_3,
        VAR_3->length + VAR_1);


 FUNC_1(&VAR_2->tx_msg_buffer[0], 0, VAR_0);

 return FUNC_2(VAR_2->udev, FUNC_3(VAR_2->udev, 2),
       &VAR_2->tx_msg_buffer[0],
       VAR_3->length + VAR_1 + VAR_0,
       &VAR_4, 1000);
}

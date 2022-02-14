
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial_port {int lock; int write_fifo; } ;
struct f81534_port_private {int phy_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int*,int ,int *) ;
 struct f81534_port_private* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_2(struct usb_serial_port *VAR_4, u8 *VAR_5)
{
 struct f81534_port_private *VAR_6 = FUNC_1(VAR_4);
 int VAR_7 = VAR_6->phy_num;
 u8 VAR_8;
 int VAR_9;
 for (VAR_9 = 0; VAR_9 < VAR_1; ++VAR_9) {
  VAR_5[VAR_9 * VAR_2] = VAR_9;
  VAR_5[VAR_9 * VAR_2 + 1] = VAR_3;
  VAR_5[VAR_9 * VAR_2 + 2] = 0;
  VAR_5[VAR_9 * VAR_2 + 3] = 0;
 }

 VAR_8 = FUNC_0(&VAR_4->write_fifo,
    &VAR_5[VAR_7 * VAR_2 + 4],
    VAR_0, &VAR_4->lock);

 VAR_5[VAR_7 * VAR_2 + 2] = VAR_8;
}

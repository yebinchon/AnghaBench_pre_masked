
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lego_usb_tower {scalar_t__ read_packet_length; int interrupt_out_busy; int write_wait; int read_wait; scalar_t__ disconnected; } ;
struct file {struct lego_usb_tower* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct file*,int *,int *) ;
 int FUNC_1 (struct lego_usb_tower*) ;

__attribute__((used)) static __poll_t FUNC_2 (struct file *VAR_6, poll_table *VAR_7)
{
 struct lego_usb_tower *VAR_8;
 __poll_t VAR_9 = 0;

 VAR_8 = VAR_6->private_data;

 if (VAR_8->disconnected)
  return VAR_0 | VAR_1;

 FUNC_0(VAR_6, &VAR_8->read_wait, VAR_7);
 FUNC_0(VAR_6, &VAR_8->write_wait, VAR_7);

 FUNC_1(VAR_8);
 if (VAR_8->read_packet_length > 0) {
  VAR_9 |= VAR_2 | VAR_4;
 }
 if (!VAR_8->interrupt_out_busy) {
  VAR_9 |= VAR_3 | VAR_5;
 }

 return VAR_9;
}

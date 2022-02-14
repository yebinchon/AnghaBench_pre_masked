
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int lock; int write_fifo; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (int *,unsigned char*,size_t,int *) ;

__attribute__((used)) static int FUNC_1(struct usb_serial_port *VAR_2,
      void *VAR_3, size_t VAR_4)
{
 unsigned char *VAR_5 = VAR_3;
 int VAR_6;
 *VAR_5 = VAR_1 | VAR_0;

 VAR_6 = FUNC_0(&VAR_2->write_fifo, VAR_5 + 1, VAR_4 - 1,
        &VAR_2->lock);
 return VAR_6 + 1;
}

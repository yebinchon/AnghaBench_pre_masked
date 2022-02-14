
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int lock; int write_fifo; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned char*,size_t,int *) ;
 int FUNC_1 (int,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct usb_serial_port *VAR_1,
      void *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4 = VAR_2;
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_1->write_fifo, VAR_4 + VAR_0, VAR_3,
        &VAR_1->lock);
 FUNC_1(VAR_5, VAR_4);

 return VAR_5 + VAR_0;
}

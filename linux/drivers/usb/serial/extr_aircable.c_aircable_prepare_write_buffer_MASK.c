
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int lock; int write_fifo; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (int *,unsigned char*,int,int *) ;
 int FUNC_1 (int,unsigned char*) ;

__attribute__((used)) static int FUNC_2(struct usb_serial_port *VAR_3,
      void *VAR_4, size_t VAR_5)
{
 int VAR_6;
 unsigned char *VAR_7 = VAR_4;

 VAR_6 = FUNC_0(&VAR_3->write_fifo, VAR_7 + VAR_0,
     VAR_5 - VAR_0, &VAR_3->lock);
 VAR_7[0] = VAR_1;
 VAR_7[1] = VAR_2;
 FUNC_1(VAR_6, &VAR_7[2]);

 return VAR_6 + VAR_0;
}

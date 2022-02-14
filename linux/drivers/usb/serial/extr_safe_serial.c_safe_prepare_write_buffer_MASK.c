
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int lock; int write_fifo; } ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int,int ) ;
 int FUNC_1 (int *,unsigned char*,size_t,int *) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_3(struct usb_serial_port *VAR_3,
      void *VAR_4, size_t VAR_5)
{
 unsigned char *VAR_6 = VAR_4;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 __u16 VAR_10;

 VAR_8 = VAR_2 ? 2 : 0;

 VAR_7 = FUNC_1(&VAR_3->write_fifo, VAR_6, VAR_5 - VAR_8,
        &VAR_3->lock);
 if (!VAR_2)
  return VAR_7;


 if (VAR_1) {
  VAR_9 = VAR_5;
  FUNC_2(VAR_6 + VAR_7, '0', VAR_9 - VAR_7 - VAR_8);
 } else {
  VAR_9 = VAR_7 + VAR_8;
 }


 VAR_6[VAR_9 - 2] = VAR_7 << 2;
 VAR_6[VAR_9 - 1] = 0;


 VAR_10 = FUNC_0(VAR_6, VAR_9, VAR_0);
 VAR_6[VAR_9 - 2] |= VAR_10 >> 8;
 VAR_6[VAR_9 - 1] |= VAR_10 & 0xff;

 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tty_struct {struct mxser_port* driver_data; } ;
struct mxser_port {long max_baud; int baud_base; int timeout; unsigned char MCR; scalar_t__ ioaddr; scalar_t__ xmit_fifo_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned char VAR_7 ;
 int FUNC_1 (int,unsigned int) ;
 unsigned char FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,unsigned int) ;
 int FUNC_4 (unsigned char,scalar_t__) ;
 int FUNC_5 (struct tty_struct*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct tty_struct *VAR_8, long VAR_9)
{
 struct mxser_port *VAR_10 = VAR_8->driver_data;
 unsigned int VAR_11 = 0, VAR_12;
 unsigned char VAR_13;
 u64 VAR_14;

 if (!VAR_10->ioaddr)
  return -1;

 if (VAR_9 > VAR_10->max_baud)
  return -1;

 if (VAR_9 == 134) {
  VAR_11 = 2 * VAR_10->baud_base / 269;
  FUNC_5(VAR_8, 134, 134);
 } else if (VAR_9) {
  VAR_11 = VAR_10->baud_base / VAR_9;
  if (VAR_11 == 0)
   VAR_11 = 1;
  VAR_12 = VAR_10->baud_base/VAR_11;
  FUNC_5(VAR_8, VAR_12, VAR_12);
 } else {
  VAR_11 = 0;
 }





 VAR_14 = (u64)VAR_10->xmit_fifo_size * VAR_1 * 10 * VAR_11;
 FUNC_1(VAR_14, VAR_10->baud_base);
 VAR_10->timeout = VAR_14 + VAR_1 / 50;

 if (VAR_11) {
  VAR_10->MCR |= VAR_7;
  FUNC_4(VAR_10->MCR, VAR_10->ioaddr + VAR_6);
 } else {
  VAR_10->MCR &= ~VAR_7;
  FUNC_4(VAR_10->MCR, VAR_10->ioaddr + VAR_6);
  return 0;
 }

 VAR_13 = FUNC_2(VAR_10->ioaddr + VAR_4);

 FUNC_4(VAR_13 | VAR_5, VAR_10->ioaddr + VAR_4);

 FUNC_4(VAR_11 & 0xff, VAR_10->ioaddr + VAR_2);
 FUNC_4(VAR_11 >> 8, VAR_10->ioaddr + VAR_3);
 FUNC_4(VAR_13, VAR_10->ioaddr + VAR_4);
  FUNC_3(VAR_10->ioaddr, 0);

 return 0;
}

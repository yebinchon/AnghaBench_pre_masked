
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ index; struct mxser_port* driver_data; } ;
struct mxser_port {unsigned char MCR; int slock; scalar_t__ ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct tty_struct*,struct mxser_port*,unsigned char) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_17)
{
 struct mxser_port *VAR_18 = VAR_17->driver_data;
 unsigned char VAR_19, VAR_20;
 unsigned long VAR_21;


 if (VAR_17->index == VAR_2)
  return -VAR_1;
 if (FUNC_4(VAR_17))
  return -VAR_0;

 VAR_19 = VAR_18->MCR;

 FUNC_2(&VAR_18->slock, VAR_21);
 VAR_20 = FUNC_0(VAR_18->ioaddr + VAR_11);
 if (VAR_20 & VAR_12)
  FUNC_1(VAR_17, VAR_18, VAR_20);
 FUNC_3(&VAR_18->slock, VAR_21);
 return ((VAR_19 & VAR_10) ? VAR_8 : 0) |
      ((VAR_19 & VAR_9) ? VAR_6 : 0) |
      ((VAR_20 & VAR_14) ? VAR_3 : 0) |
      ((VAR_20 & VAR_16) ? VAR_7 : 0) |
      ((VAR_20 & VAR_15) ? VAR_5 : 0) |
      ((VAR_20 & VAR_13) ? VAR_4 : 0);
}

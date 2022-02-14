
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct slgt_info* driver_data; } ;
struct slgt_info {int signals; int device_name; int lock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_1 (struct slgt_info*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_12)
{
 struct slgt_info *VAR_13 = VAR_12->driver_data;
 unsigned int VAR_14;
  unsigned long VAR_15;

 FUNC_2(&VAR_13->lock,VAR_15);
  FUNC_1(VAR_13);
 FUNC_3(&VAR_13->lock,VAR_15);

 VAR_14 = ((VAR_13->signals & VAR_5) ? VAR_11:0) +
  ((VAR_13->signals & VAR_3) ? VAR_9:0) +
  ((VAR_13->signals & VAR_1) ? VAR_6:0) +
  ((VAR_13->signals & VAR_4) ? VAR_10:0) +
  ((VAR_13->signals & VAR_2) ? VAR_8:0) +
  ((VAR_13->signals & VAR_0) ? VAR_7:0);

 FUNC_0(("%s tiocmget value=%08X\n", VAR_13->device_name, VAR_14));
 return VAR_14;
}

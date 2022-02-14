
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct slgt_info* driver_data; } ;
struct slgt_info {int lock; int signals; int device_name; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct slgt_info*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_4,
      unsigned int VAR_5, unsigned int VAR_6)
{
 struct slgt_info *VAR_7 = VAR_4->driver_data;
  unsigned long VAR_8;

 FUNC_0(("%s tiocmset(%x,%x)\n", VAR_7->device_name, VAR_5, VAR_6));

 if (VAR_5 & VAR_3)
  VAR_7->signals |= VAR_1;
 if (VAR_5 & VAR_2)
  VAR_7->signals |= VAR_0;
 if (VAR_6 & VAR_3)
  VAR_7->signals &= ~VAR_1;
 if (VAR_6 & VAR_2)
  VAR_7->signals &= ~VAR_0;

 FUNC_2(&VAR_7->lock,VAR_8);
  FUNC_1(VAR_7);
 FUNC_3(&VAR_7->lock,VAR_8);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int name; struct slgt_info* driver_data; } ;
struct slgt_info {int lock; int device_name; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_1 (struct slgt_info*,int ) ;
 scalar_t__ FUNC_2 (struct slgt_info*,int ,char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct slgt_info*,int ,unsigned short) ;

__attribute__((used)) static int FUNC_6(struct tty_struct *VAR_3, int VAR_4)
{
 struct slgt_info *VAR_5 = VAR_3->driver_data;
 unsigned short VAR_6;
 unsigned long VAR_7;

 if (FUNC_2(VAR_5, VAR_3->name, "set_break"))
  return -VAR_1;
 FUNC_0(("%s set_break(%d)\n", VAR_5->device_name, VAR_4));

 FUNC_3(&VAR_5->lock,VAR_7);
 VAR_6 = FUNC_1(VAR_5, VAR_2);
  if (VAR_4 == -1)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;
 FUNC_5(VAR_5, VAR_2, VAR_6);
 FUNC_4(&VAR_5->lock,VAR_7);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct acm* driver_data; } ;
struct acm {int control; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct acm*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_2,
     unsigned int VAR_3, unsigned long VAR_4)
{
 struct acm *VAR_5 = VAR_2->driver_data;
 int VAR_6 = -VAR_1;

 switch (VAR_3) {
 case 128:
  VAR_6 = FUNC_0(VAR_5->control);
  if (VAR_6 < 0) {
   VAR_6 = -VAR_0;
   break;
  }
  VAR_6 = FUNC_2(VAR_5, VAR_4);
  FUNC_1(VAR_5->control);
  break;
 }

 return VAR_6;
}

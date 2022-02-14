
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ driver_data; } ;
struct raw3215_info {int flags; int cdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct raw3215_info*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct tty_struct * VAR_1)
{
 struct raw3215_info *VAR_2;
 unsigned long VAR_3;

 VAR_2 = (struct raw3215_info *) VAR_1->driver_data;
 if (VAR_2->flags & VAR_0) {
  FUNC_2(FUNC_0(VAR_2->cdev), VAR_3);
  VAR_2->flags &= ~VAR_0;
  FUNC_1(VAR_2);
  FUNC_3(FUNC_0(VAR_2->cdev), VAR_3);
 }
}

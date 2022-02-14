
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ driver_data; } ;
struct raw3215_info {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct tty_struct *VAR_1)
{
 struct raw3215_info *VAR_2;

 VAR_2 = (struct raw3215_info *) VAR_1->driver_data;
 VAR_2->flags |= VAR_0;
}

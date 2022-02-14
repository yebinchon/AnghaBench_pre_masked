
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct gb_tty* driver_data; } ;
struct gb_tty {int ctrlout; int ctrlin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_11)
{
 struct gb_tty *VAR_12 = VAR_11->driver_data;

 return (VAR_12->ctrlout & VAR_2 ? VAR_8 : 0) |
        (VAR_12->ctrlout & VAR_4 ? VAR_10 : 0) |
        (VAR_12->ctrlin & VAR_1 ? VAR_7 : 0) |
        (VAR_12->ctrlin & VAR_3 ? VAR_9 : 0) |
        (VAR_12->ctrlin & VAR_0 ? VAR_5 : 0) |
        VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int * driver_data; } ;
struct file {int dummy; } ;
struct TYPE_3__ {scalar_t__ low_latency; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct tty_struct*) ;

__attribute__((used)) static int
FUNC_1(struct tty_struct *VAR_1, struct file *VAR_2)
{
 FUNC_0(&VAR_0, VAR_1);
 VAR_1->driver_data = ((void*)0);
 VAR_0.low_latency = 0;
 return 0;
}

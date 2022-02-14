
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; TYPE_1__* grab_buffer; int grab_fbuffer; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(int *VAR_7)
{
 if (!VAR_6.grab_fbuffer)
  return -VAR_1;

 if (VAR_6.grab_buffer[0].state != VAR_3)
  return -VAR_0;

 FUNC_2(&VAR_6.lock);
 VAR_6.grab_buffer[0].state = VAR_4;
 *VAR_7 = -1;

 while (*VAR_7 == -1) {
  FUNC_1();
  *VAR_7 = FUNC_0(VAR_6.grab_fbuffer, VAR_5);
 }

 VAR_6.grab_buffer[0].state = VAR_2;
 FUNC_3(&VAR_6.lock);
 return 0;
}

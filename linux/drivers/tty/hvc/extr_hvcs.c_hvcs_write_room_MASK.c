
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct hvcs_struct* driver_data; } ;
struct TYPE_2__ {scalar_t__ count; } ;
struct hvcs_struct {int chars_in_buffer; TYPE_1__ port; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_1)
{
 struct hvcs_struct *VAR_2 = VAR_1->driver_data;

 if (!VAR_2 || VAR_2->port.count <= 0)
  return 0;

 return VAR_0 - VAR_2->chars_in_buffer;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int ssize_t ;
struct TYPE_2__ {int base; int mode; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int*) ;

__attribute__((used)) static ssize_t FUNC_1(u8 VAR_3)
{
 int VAR_4;

 if (VAR_3 > 2)
  return -VAR_0;

 if (FUNC_0(VAR_2->handle,
    (VAR_3 << 0x10) | (VAR_2->base), &VAR_4))
  return -VAR_1;


 if (VAR_3 != 1)
  FUNC_0(VAR_2->handle,
    (VAR_3 << 0x0f) | (VAR_2->base + 0x100),
    &VAR_4);

 VAR_2->mode = VAR_3;

 return 0;
}

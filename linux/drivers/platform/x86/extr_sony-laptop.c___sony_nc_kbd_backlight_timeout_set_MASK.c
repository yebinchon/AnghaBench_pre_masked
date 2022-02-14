
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int base; int timeout; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (int ,int,int*) ;

__attribute__((used)) static int FUNC_1(u8 VAR_3)
{
 int VAR_4;

 if (VAR_3 > 3)
  return -VAR_0;

 if (FUNC_0(VAR_2->handle, (VAR_3 << 0x10) |
    (VAR_2->base + 0x200), &VAR_4))
  return -VAR_1;

 VAR_2->timeout = VAR_3;

 return 0;
}

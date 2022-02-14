
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned short profiles; unsigned short mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 scalar_t__ FUNC_0 (int,unsigned short,unsigned int*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_1(unsigned short VAR_4)
{
 unsigned int VAR_5;







 if ((VAR_4 && !(VAR_3->profiles & VAR_4)) || VAR_4 >= VAR_2)
  return -VAR_0;

 if (FUNC_0(0x0122, VAR_4 << 0x10 | 0x0200, &VAR_5))
  return -VAR_1;

 VAR_3->mode = VAR_4;

 return 0;
}

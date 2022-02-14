
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43_wldev {TYPE_1__* dfsentry; } ;
struct TYPE_2__ {unsigned int mmio32read_next; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct b43_wldev *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_4, "0x%X", &VAR_6);
 if (VAR_7 != 1)
  return -VAR_2;
 if (VAR_6 > VAR_0)
  return -VAR_1;
 if ((VAR_6 % 4) != 0)
  return -VAR_2;

 VAR_3->dfsentry->mmio32read_next = VAR_6;

 return 0;
}

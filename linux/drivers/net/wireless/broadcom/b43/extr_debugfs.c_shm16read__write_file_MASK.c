
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct b43_wldev {TYPE_1__* dfsentry; } ;
struct TYPE_2__ {unsigned int shm16read_routing_next; unsigned int shm16read_addr_next; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,char*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_1(struct b43_wldev *VAR_5,
     const char *VAR_6, size_t VAR_7)
{
 unsigned int VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_6, "0x%X 0x%X", &VAR_8, &VAR_9);
 if (VAR_10 != 2)
  return -VAR_4;
 if (VAR_8 > VAR_1)
  return -VAR_3;
 if (VAR_9 > VAR_0)
  return -VAR_3;
 if (VAR_8 == VAR_2) {
  if ((VAR_9 % 2) != 0)
   return -VAR_3;
 }

 VAR_5->dfsentry->shm16read_routing_next = VAR_8;
 VAR_5->dfsentry->shm16read_addr_next = VAR_9;

 return 0;
}

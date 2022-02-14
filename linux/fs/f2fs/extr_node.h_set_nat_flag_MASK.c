
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char flag; } ;
struct nat_entry {TYPE_1__ ni; } ;



__attribute__((used)) static inline void FUNC_0(struct nat_entry *VAR_0,
    unsigned int VAR_1, bool VAR_2)
{
 unsigned char VAR_3 = 0x01 << VAR_1;
 if (VAR_2)
  VAR_0->ni.flag |= VAR_3;
 else
  VAR_0->ni.flag &= ~VAR_3;
}

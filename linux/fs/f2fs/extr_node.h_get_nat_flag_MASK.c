
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char flag; } ;
struct nat_entry {TYPE_1__ ni; } ;



__attribute__((used)) static inline bool FUNC_0(struct nat_entry *VAR_0, unsigned int VAR_1)
{
 unsigned char VAR_2 = 0x01 << VAR_1;
 return VAR_0->ni.flag & VAR_2;
}

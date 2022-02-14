
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u16 ;
struct ks8995_switch {TYPE_1__* chip; } ;
typedef int __be16 ;
struct TYPE_2__ {unsigned int addr_width; unsigned int addr_shift; } ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static inline __be16 FUNC_1(struct ks8995_switch *VAR_0, int VAR_1,
        unsigned VAR_2)
{
 u16 VAR_3 = VAR_1;


 VAR_3 <<= VAR_0->chip->addr_width + VAR_0->chip->addr_shift;

 VAR_3 |= VAR_2 << VAR_0->chip->addr_shift;

 return FUNC_0(VAR_3);
}

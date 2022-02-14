
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int cclk; } ;
struct csio_hw {TYPE_1__ vpd; } ;



__attribute__((used)) static inline uint32_t
FUNC_0(struct csio_hw *VAR_0, uint32_t VAR_1)
{
 return (VAR_1 * VAR_0->vpd.cclk) / 1000;
}

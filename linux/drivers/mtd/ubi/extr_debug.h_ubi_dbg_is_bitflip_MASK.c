
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ emulate_bitflips; } ;
struct ubi_device {TYPE_1__ dbg; } ;


 int FUNC_0 () ;

__attribute__((used)) static inline int FUNC_1(const struct ubi_device *VAR_0)
{
 if (VAR_0->dbg.emulate_bitflips)
  return !(FUNC_0() % 200);
 return 0;
}

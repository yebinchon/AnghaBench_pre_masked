
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct adapter *VAR_0)
{
 return FUNC_1(VAR_0->params.chip) |
  (FUNC_0(VAR_0->params.chip) << 10) | (1 << 16);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int dack_re; } ;
struct TYPE_4__ {TYPE_1__ tp; } ;
struct adapter {TYPE_2__ params; } ;


 unsigned int FUNC_0 (struct adapter const*) ;

__attribute__((used)) static inline unsigned int FUNC_1(const struct adapter *VAR_0,
           unsigned int VAR_1)
{
 return (VAR_1 << VAR_0->params.tp.dack_re) / FUNC_0(VAR_0);
}

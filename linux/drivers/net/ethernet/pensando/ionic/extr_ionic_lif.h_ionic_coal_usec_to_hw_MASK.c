
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int intr_coal_div; int intr_coal_mult; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct ionic {TYPE_2__ ident; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct ionic *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_0->ident.dev.intr_coal_mult);
 u32 VAR_3 = FUNC_0(VAR_0->ident.dev.intr_coal_div);


 if (!VAR_3 || !VAR_2)
  return 0;


 VAR_1 += (VAR_3 / VAR_2) >> 1;


 return (VAR_1 * VAR_2) / VAR_3;
}

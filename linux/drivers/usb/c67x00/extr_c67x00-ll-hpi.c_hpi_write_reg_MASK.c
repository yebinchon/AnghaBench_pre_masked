
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int regstep; scalar_t__ base; } ;
struct c67x00_device {TYPE_1__ hpi; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct c67x00_device *VAR_1, int VAR_2, u16 VAR_3)
{
 FUNC_1(VAR_0);
 FUNC_0(VAR_3, VAR_1->hpi.base + VAR_2 * VAR_1->hpi.regstep);
}

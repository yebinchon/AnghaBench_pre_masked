
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct adapter*,scalar_t__) ;

unsigned int FUNC_4(struct adapter *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_3(VAR_3, VAR_2 + VAR_1);
 return (FUNC_0(VAR_3->params.chip) <= VAR_0 ?
   FUNC_1(VAR_4) : FUNC_2(VAR_4));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct cudbg_meminfo {TYPE_1__* avail; } ;
struct adapter {int dummy; } ;
struct TYPE_2__ {scalar_t__ base; scalar_t__ limit; } ;


 int FUNC_0 (struct adapter*,struct cudbg_meminfo*,size_t,size_t*) ;

__attribute__((used)) static int FUNC_1(struct adapter *VAR_0,
      struct cudbg_meminfo *VAR_1,
      u8 VAR_2, u32 *VAR_3, u32 *VAR_4)
{
 u8 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (*VAR_3 < VAR_1->avail[VAR_5].base)
  *VAR_3 = 0;
 else
  *VAR_3 -= VAR_1->avail[VAR_5].base;

 if (*VAR_4 > VAR_1->avail[VAR_5].limit)
  *VAR_4 = VAR_1->avail[VAR_5].limit;
 else
  *VAR_4 -= VAR_1->avail[VAR_5].base;

 return 0;
}

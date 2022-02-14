
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct cudbg_meminfo {TYPE_1__* avail; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct adapter {int dummy; } ;
struct TYPE_2__ {unsigned long limit; unsigned long base; } ;


 int FUNC_0 (struct adapter*,struct cudbg_meminfo*) ;
 int FUNC_1 (struct adapter*,struct cudbg_meminfo*,size_t,size_t*) ;
 int FUNC_2 (struct cudbg_init*,struct cudbg_error*) ;
 int FUNC_3 (struct cudbg_meminfo*,int ,int) ;

__attribute__((used)) static unsigned long FUNC_4(struct cudbg_init *VAR_0,
        struct cudbg_error *VAR_1,
        u8 VAR_2)
{
 struct adapter *VAR_3 = VAR_0->adap;
 struct cudbg_meminfo VAR_4;
 u8 VAR_5;
 int VAR_6;

 FUNC_3(&VAR_4, 0, sizeof(struct cudbg_meminfo));
 VAR_6 = FUNC_0(VAR_3, &VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_2(VAR_0, VAR_1);
 VAR_6 = FUNC_1(VAR_3, &VAR_4, VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;

 return VAR_4.avail[VAR_5].limit - VAR_4.avail[VAR_5].base;
}

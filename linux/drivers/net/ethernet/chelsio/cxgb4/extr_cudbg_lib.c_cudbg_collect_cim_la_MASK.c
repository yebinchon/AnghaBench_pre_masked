
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int sys_err; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct TYPE_2__ {int cim_la_size; int chip; } ;
struct adapter {TYPE_1__ params; } ;
typedef int cfg ;


 int VAR_0 ;
 int FUNC_0 (struct cudbg_init*,struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int *,int) ;
 int FUNC_5 (struct adapter*,int ,int,int *) ;
 int FUNC_6 (struct adapter*,int *,int *) ;

int FUNC_7(struct cudbg_init *VAR_1,
    struct cudbg_buffer *VAR_2,
    struct cudbg_error *VAR_3)
{
 struct adapter *VAR_4 = VAR_1->adap;
 struct cudbg_buffer VAR_5 = { 0 };
 int VAR_6, VAR_7;
 u32 VAR_8 = 0;

 if (FUNC_3(VAR_4->params.chip)) {
  VAR_6 = VAR_4->params.cim_la_size / 10 + 1;
  VAR_6 *= 10 * sizeof(u32);
 } else {
  VAR_6 = VAR_4->params.cim_la_size / 8;
  VAR_6 *= 8 * sizeof(u32);
 }

 VAR_6 += sizeof(VAR_8);
 VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_6, &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_5(VAR_4, VAR_0, 1, &VAR_8);
 if (VAR_7) {
  VAR_3->sys_err = VAR_7;
  FUNC_1(VAR_1, &VAR_5);
  return VAR_7;
 }

 FUNC_4((char *)VAR_5.data, &VAR_8, sizeof(VAR_8));
 VAR_7 = FUNC_6(VAR_4,
       (u32 *)((char *)VAR_5.data + sizeof(VAR_8)),
       ((void*)0));
 if (VAR_7 < 0) {
  VAR_3->sys_err = VAR_7;
  FUNC_1(VAR_1, &VAR_5);
  return VAR_7;
 }
 return FUNC_2(VAR_1, &VAR_5, VAR_2);
}

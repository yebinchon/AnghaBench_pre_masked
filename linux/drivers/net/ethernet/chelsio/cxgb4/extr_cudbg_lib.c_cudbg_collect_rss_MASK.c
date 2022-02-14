
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int sys_err; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct cudbg_init*,struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*,int *) ;

int FUNC_5(struct cudbg_init *VAR_0,
        struct cudbg_buffer *VAR_1,
        struct cudbg_error *VAR_2)
{
 struct adapter *VAR_3 = VAR_0->adap;
 struct cudbg_buffer VAR_4 = { 0 };
 int VAR_5, VAR_6;

 VAR_6 = FUNC_3(VAR_3);
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_6 * sizeof(u16),
       &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_3, (u16 *)VAR_4.data);
 if (VAR_5) {
  VAR_2->sys_err = VAR_5;
  FUNC_1(VAR_0, &VAR_4);
  return VAR_5;
 }
 return FUNC_2(VAR_0, &VAR_4, VAR_1);
}

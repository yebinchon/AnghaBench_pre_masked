
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cudbg_ulprx_la {int size; scalar_t__ data; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cudbg_init*,struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_2 (struct adapter*,int *) ;

int FUNC_3(struct cudbg_init *VAR_1,
      struct cudbg_buffer *VAR_2,
      struct cudbg_error *VAR_3)
{
 struct adapter *VAR_4 = VAR_1->adap;
 struct cudbg_buffer VAR_5 = { 0 };
 struct cudbg_ulprx_la *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_1, VAR_2, sizeof(struct cudbg_ulprx_la),
       &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_6 = (struct cudbg_ulprx_la *)VAR_5.data;
 FUNC_2(VAR_4, (u32 *)VAR_6->data);
 VAR_6->size = VAR_0;
 return FUNC_1(VAR_1, &VAR_5, VAR_2);
}

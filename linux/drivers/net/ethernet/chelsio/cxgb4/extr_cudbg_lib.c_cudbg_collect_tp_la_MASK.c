
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cudbg_tp_la {scalar_t__ data; int mode; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,int *,int *) ;

int FUNC_5(struct cudbg_init *VAR_2,
   struct cudbg_buffer *VAR_3,
   struct cudbg_error *VAR_4)
{
 struct adapter *VAR_5 = VAR_2->adap;
 struct cudbg_buffer VAR_6 = { 0 };
 struct cudbg_tp_la *VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = sizeof(struct cudbg_tp_la) + VAR_0 * sizeof(u64);
 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_8, &VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_7 = (struct cudbg_tp_la *)VAR_6.data;
 VAR_7->mode = FUNC_0(FUNC_3(VAR_5, VAR_1));
 FUNC_4(VAR_5, (u64 *)VAR_7->data, ((void*)0));
 return FUNC_2(VAR_2, &VAR_6, VAR_3);
}

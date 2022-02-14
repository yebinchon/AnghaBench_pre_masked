
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_cim_pif_la {int size; scalar_t__ data; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cudbg_init*,struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_2 (struct adapter*,int *,int *,int *,int *) ;

int FUNC_3(struct cudbg_init *VAR_1,
        struct cudbg_buffer *VAR_2,
        struct cudbg_error *VAR_3)
{
 struct cudbg_cim_pif_la *VAR_4;
 struct adapter *VAR_5 = VAR_1->adap;
 struct cudbg_buffer VAR_6 = { 0 };
 int VAR_7, VAR_8;

 VAR_7 = sizeof(struct cudbg_cim_pif_la) +
        2 * VAR_0 * 6 * sizeof(u32);
 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_7, &VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_4 = (struct cudbg_cim_pif_la *)VAR_6.data;
 VAR_4->size = VAR_0;
 FUNC_2(VAR_5, (u32 *)VAR_4->data,
      (u32 *)VAR_4->data + 6 * VAR_0,
      ((void*)0), ((void*)0));
 return FUNC_1(VAR_1, &VAR_6, VAR_2);
}

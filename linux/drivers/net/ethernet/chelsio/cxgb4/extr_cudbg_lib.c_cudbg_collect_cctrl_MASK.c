
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cudbg_init*,struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_2 (struct adapter*,void*) ;

int FUNC_3(struct cudbg_init *VAR_2,
   struct cudbg_buffer *VAR_3,
   struct cudbg_error *VAR_4)
{
 struct adapter *VAR_5 = VAR_2->adap;
 struct cudbg_buffer VAR_6 = { 0 };
 u32 VAR_7;
 int VAR_8;

 VAR_7 = sizeof(u16) * VAR_1 * VAR_0;
 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_7, &VAR_6);
 if (VAR_8)
  return VAR_8;

 FUNC_2(VAR_5, (void *)VAR_6.data);
 return FUNC_1(VAR_2, &VAR_6, VAR_3);
}

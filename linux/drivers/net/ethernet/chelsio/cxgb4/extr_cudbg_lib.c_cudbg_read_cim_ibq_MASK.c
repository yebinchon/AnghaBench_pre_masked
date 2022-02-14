
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int sys_err; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cudbg_init*,struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_3 (struct adapter*,int,int*,int) ;

__attribute__((used)) static int FUNC_4(struct cudbg_init *VAR_2,
         struct cudbg_buffer *VAR_3,
         struct cudbg_error *VAR_4, int VAR_5)
{
 struct adapter *VAR_6 = VAR_2->adap;
 struct cudbg_buffer VAR_7 = { 0 };
 int VAR_8, VAR_9 = 0;
 u32 VAR_10;


 VAR_10 = VAR_0 * 4 * sizeof(u32);
 VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_10, &VAR_7);
 if (VAR_9)
  return VAR_9;


 VAR_8 = FUNC_3(VAR_6, VAR_5,
        (u32 *)VAR_7.data, VAR_10);

 if (VAR_8 <= 0) {
  if (!VAR_8)
   VAR_9 = VAR_1;
  else
   VAR_9 = VAR_8;
  VAR_4->sys_err = VAR_9;
  FUNC_1(VAR_2, &VAR_7);
  return VAR_9;
 }
 return FUNC_2(VAR_2, &VAR_7, VAR_3);
}

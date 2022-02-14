
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
 int FUNC_0 (struct adapter*,int) ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*,int ,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_init*,struct cudbg_buffer*) ;
 int FUNC_3 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_4 (struct adapter*,int,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct cudbg_init *VAR_1,
         struct cudbg_buffer *VAR_2,
         struct cudbg_error *VAR_3, int VAR_4)
{
 struct adapter *VAR_5 = VAR_1->adap;
 struct cudbg_buffer VAR_6 = { 0 };
 int VAR_7, VAR_8 = 0;
 u32 VAR_9;


 VAR_9 = FUNC_0(VAR_5, VAR_4);
 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_9, &VAR_6);
 if (VAR_8)
  return VAR_8;


 VAR_7 = FUNC_4(VAR_5, VAR_4,
        (u32 *)VAR_6.data, VAR_9);

 if (VAR_7 <= 0) {
  if (!VAR_7)
   VAR_8 = VAR_0;
  else
   VAR_8 = VAR_7;
  VAR_3->sys_err = VAR_8;
  FUNC_2(VAR_1, &VAR_6);
  return VAR_8;
 }
 return FUNC_3(VAR_1, &VAR_6, VAR_2);
}

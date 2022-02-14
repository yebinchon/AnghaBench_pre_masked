
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int dummy; } ;
struct cudbg_buffer {int size; scalar_t__ data; int member_0; } ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cudbg_init*,struct cudbg_buffer*,int ,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct adapter*,void*,int ) ;

int FUNC_6(struct cudbg_init *VAR_2,
      struct cudbg_buffer *VAR_3,
      struct cudbg_error *VAR_4)
{
 struct adapter *VAR_5 = VAR_2->adap;
 struct cudbg_buffer VAR_6 = { 0 };
 u32 VAR_7 = 0;
 int VAR_8 = 0;

 if (FUNC_2(VAR_5->params.chip))
  VAR_7 = VAR_0;
 else if (FUNC_3(VAR_5->params.chip) || FUNC_4(VAR_5->params.chip))
  VAR_7 = VAR_1;

 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_7, &VAR_6);
 if (VAR_8)
  return VAR_8;
 FUNC_5(VAR_5, (void *)VAR_6.data, VAR_6.size);
 return FUNC_1(VAR_2, &VAR_6, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct cudbg_mps_tcam {int dummy; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int sys_err; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct TYPE_3__ {int mps_tcam_size; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;
struct adapter {TYPE_2__ params; } ;


 int VAR_0 ;
 int FUNC_0 (struct cudbg_init*,struct cudbg_mps_tcam*,int) ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_init*,struct cudbg_buffer*) ;
 int FUNC_3 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;

int FUNC_4(struct cudbg_init *VAR_1,
      struct cudbg_buffer *VAR_2,
      struct cudbg_error *VAR_3)
{
 struct adapter *VAR_4 = VAR_1->adap;
 struct cudbg_buffer VAR_5 = { 0 };
 u32 VAR_6 = 0, VAR_7, VAR_8, VAR_9 = 0;
 struct cudbg_mps_tcam *VAR_10;
 int VAR_11;

 VAR_8 = VAR_4->params.arch.mps_tcam_size;
 VAR_6 = sizeof(struct cudbg_mps_tcam) * VAR_8;
 VAR_11 = FUNC_1(VAR_1, VAR_2, VAR_6, &VAR_5);
 if (VAR_11)
  return VAR_11;

 VAR_10 = (struct cudbg_mps_tcam *)VAR_5.data;
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_11 = FUNC_0(VAR_1, VAR_10, VAR_7);
  if (VAR_11) {
   VAR_3->sys_err = VAR_11;
   FUNC_2(VAR_1, &VAR_5);
   return VAR_11;
  }
  VAR_9 += sizeof(struct cudbg_mps_tcam);
  VAR_10++;
 }

 if (!VAR_9) {
  VAR_11 = VAR_0;
  VAR_3->sys_err = VAR_11;
  FUNC_2(VAR_1, &VAR_5);
  return VAR_11;
 }
 return FUNC_3(VAR_1, &VAR_5, VAR_2);
}

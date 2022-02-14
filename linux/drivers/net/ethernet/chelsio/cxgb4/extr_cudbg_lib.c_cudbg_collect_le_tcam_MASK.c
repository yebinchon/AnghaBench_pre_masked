
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cudbg_tid_data {int dummy; } ;
struct cudbg_tcam {int max_tid; int clip_start; int member_0; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int sys_warn; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,struct cudbg_tcam*) ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 scalar_t__ FUNC_2 (struct cudbg_tid_data*,struct cudbg_tcam) ;
 int FUNC_3 (struct cudbg_init*,int,struct cudbg_tid_data*) ;
 int FUNC_4 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,struct cudbg_tcam*,int) ;

int FUNC_7(struct cudbg_init *VAR_2,
     struct cudbg_buffer *VAR_3,
     struct cudbg_error *VAR_4)
{
 struct adapter *VAR_5 = VAR_2->adap;
 struct cudbg_buffer VAR_6 = { 0 };
 struct cudbg_tcam VAR_7 = { 0 };
 struct cudbg_tid_data *VAR_8;
 u32 VAR_9 = 0;
 int VAR_10, VAR_11;
 u32 VAR_12;

 FUNC_0(VAR_5, &VAR_7);

 VAR_11 = sizeof(struct cudbg_tid_data) * VAR_7.max_tid;
 VAR_11 += sizeof(struct cudbg_tcam);
 VAR_10 = FUNC_1(VAR_2, VAR_3, VAR_11, &VAR_6);
 if (VAR_10)
  return VAR_10;

 FUNC_6(VAR_6.data, &VAR_7, sizeof(struct cudbg_tcam));
 VAR_9 = sizeof(struct cudbg_tcam);
 VAR_8 = (struct cudbg_tid_data *)(VAR_6.data + VAR_9);

 for (VAR_12 = 0; VAR_12 < VAR_7.max_tid; ) {
  VAR_10 = FUNC_3(VAR_2, VAR_12, VAR_8);
  if (VAR_10) {
   VAR_4->sys_warn = VAR_0;

   VAR_7.max_tid = VAR_12;
   FUNC_6(VAR_6.data, &VAR_7,
          sizeof(struct cudbg_tcam));
   goto out;
  }

  if (FUNC_2(VAR_8, VAR_7)) {

   if (FUNC_5(VAR_5->params.chip) &&
       VAR_12 >= VAR_7.clip_start &&
       VAR_12 < VAR_7.clip_start + VAR_1)
    VAR_12 += 4;
   else
    VAR_12 += 2;
  } else {
   VAR_12++;
  }

  VAR_8++;
  VAR_9 += sizeof(struct cudbg_tid_data);
 }

out:
 return FUNC_4(VAR_2, &VAR_6, VAR_3);
}

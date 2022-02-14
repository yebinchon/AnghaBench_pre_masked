
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devlog_params {scalar_t__ start; int size; int memtype; } ;
struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int sys_err; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct TYPE_2__ {int drv_memwin; struct devlog_params devlog; } ;
struct adapter {int win0_lock; TYPE_1__ params; } ;
typedef int __be32 ;


 int FUNC_0 (struct cudbg_init*,struct cudbg_buffer*,int ,struct cudbg_buffer*) ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*,int ,int ,scalar_t__,int ,int *,int) ;

int FUNC_7(struct cudbg_init *VAR_0,
       struct cudbg_buffer *VAR_1,
       struct cudbg_error *VAR_2)
{
 struct adapter *VAR_3 = VAR_0->adap;
 struct cudbg_buffer VAR_4 = { 0 };
 struct devlog_params *VAR_5;
 int VAR_6 = 0;

 VAR_6 = FUNC_5(VAR_3);
 if (VAR_6 < 0) {
  VAR_2->sys_err = VAR_6;
  return VAR_6;
 }

 VAR_5 = &VAR_3->params.devlog;
 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_5->size, &VAR_4);
 if (VAR_6)
  return VAR_6;


 if (VAR_5->start != 0) {
  FUNC_3(&VAR_3->win0_lock);
  VAR_6 = FUNC_6(VAR_3, VAR_3->params.drv_memwin,
      VAR_5->memtype, VAR_5->start,
      VAR_5->size,
      (__be32 *)(char *)VAR_4.data,
      1);
  FUNC_4(&VAR_3->win0_lock);
  if (VAR_6) {
   VAR_2->sys_err = VAR_6;
   FUNC_1(VAR_0, &VAR_4);
   return VAR_6;
  }
 }
 return FUNC_2(VAR_0, &VAR_4, VAR_1);
}

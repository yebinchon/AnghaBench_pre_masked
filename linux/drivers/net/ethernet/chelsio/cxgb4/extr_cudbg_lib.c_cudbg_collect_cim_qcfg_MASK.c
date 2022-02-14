
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cudbg_init {struct adapter* adap; } ;
struct cudbg_error {int sys_err; } ;
struct cudbg_cim_qcfg {int thres; int size; int base; int obq_wr; int stat; int chip; } ;
struct cudbg_buffer {scalar_t__ data; int member_0; } ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cudbg_init*,struct cudbg_buffer*,int,struct cudbg_buffer*) ;
 int FUNC_2 (struct cudbg_init*,struct cudbg_buffer*) ;
 int FUNC_3 (struct cudbg_init*,struct cudbg_buffer*,struct cudbg_buffer*) ;
 int FUNC_4 (struct adapter*,int ,int ,int ) ;
 int FUNC_5 (struct adapter*,int ,int ,int ) ;

int FUNC_6(struct cudbg_init *VAR_2,
      struct cudbg_buffer *VAR_3,
      struct cudbg_error *VAR_4)
{
 struct adapter *VAR_5 = VAR_2->adap;
 struct cudbg_buffer VAR_6 = { 0 };
 struct cudbg_cim_qcfg *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_2, VAR_3, sizeof(struct cudbg_cim_qcfg),
       &VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_7 = (struct cudbg_cim_qcfg *)VAR_6.data;
 VAR_7->chip = VAR_5->params.chip;
 VAR_8 = FUNC_4(VAR_5, VAR_0,
    FUNC_0(VAR_7->stat), VAR_7->stat);
 if (VAR_8) {
  VAR_4->sys_err = VAR_8;
  FUNC_2(VAR_2, &VAR_6);
  return VAR_8;
 }

 VAR_8 = FUNC_4(VAR_5, VAR_1,
    FUNC_0(VAR_7->obq_wr),
    VAR_7->obq_wr);
 if (VAR_8) {
  VAR_4->sys_err = VAR_8;
  FUNC_2(VAR_2, &VAR_6);
  return VAR_8;
 }

 FUNC_5(VAR_5, VAR_7->base, VAR_7->size,
    VAR_7->thres);
 return FUNC_3(VAR_2, &VAR_6, VAR_3);
}

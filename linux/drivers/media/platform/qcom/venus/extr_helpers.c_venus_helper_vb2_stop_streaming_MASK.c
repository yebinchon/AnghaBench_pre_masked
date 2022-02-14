
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int streamon_out; int streamon_cap; int lock; int registeredbufs; scalar_t__ session_error; struct venus_core* core; } ;
struct venus_core {scalar_t__ sys_error; } ;
struct vb2_queue {scalar_t__ type; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct venus_inst*) ;
 int FUNC_2 (struct venus_inst*) ;
 int FUNC_3 (struct venus_inst*) ;
 int FUNC_4 (struct venus_inst*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct venus_inst* FUNC_7 (struct vb2_queue*) ;
 int FUNC_8 (struct venus_inst*,int ) ;
 int FUNC_9 (struct venus_inst*) ;
 int FUNC_10 (struct venus_inst*) ;
 int FUNC_11 (struct venus_core*) ;
 int FUNC_12 (struct venus_inst*) ;

void FUNC_13(struct vb2_queue *VAR_3)
{
 struct venus_inst *VAR_4 = FUNC_7(VAR_3);
 struct venus_core *VAR_5 = VAR_4->core;
 int VAR_6;

 FUNC_5(&VAR_4->lock);

 if (VAR_4->streamon_out & VAR_4->streamon_cap) {
  VAR_6 = FUNC_3(VAR_4);
  VAR_6 |= FUNC_4(VAR_4);
  VAR_6 |= FUNC_12(VAR_4);
  VAR_6 |= FUNC_10(VAR_4);
  VAR_6 |= FUNC_2(VAR_4);

  if (VAR_4->session_error || VAR_5->sys_error)
   VAR_6 = -VAR_0;

  if (VAR_6)
   FUNC_1(VAR_4);

  FUNC_9(VAR_4);

  FUNC_11(VAR_5);
  FUNC_0(&VAR_4->registeredbufs);
 }

 FUNC_8(VAR_4, VAR_2);

 if (VAR_3->type == VAR_1)
  VAR_4->streamon_out = 0;
 else
  VAR_4->streamon_cap = 0;

 FUNC_6(&VAR_4->lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int lock; int registeredbufs; scalar_t__ session_error; int codec_state; struct venus_core* core; } ;
struct venus_core {scalar_t__ sys_error; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct venus_inst*) ;
 int FUNC_2 (struct venus_inst*) ;
 int FUNC_3 (struct venus_inst*) ;
 int FUNC_4 (struct venus_inst*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct venus_inst*) ;
 int FUNC_8 (struct venus_inst*) ;
 int FUNC_9 (struct venus_core*) ;
 int FUNC_10 (struct venus_inst*) ;

__attribute__((used)) static void FUNC_11(struct venus_inst *VAR_2)
{
 struct venus_core *VAR_3 = VAR_2->core;
 int VAR_4, VAR_5 = 0;

 FUNC_5(&VAR_2->lock);

 VAR_2->codec_state = VAR_1;

 VAR_4 = FUNC_3(VAR_2);
 VAR_5 = (VAR_4 && VAR_4 != -VAR_0) ? 1 : 0;
 VAR_4 = FUNC_4(VAR_2);
 VAR_5 = (VAR_4 && VAR_4 != -VAR_0) ? 1 : 0;
 VAR_4 = FUNC_10(VAR_2);
 VAR_5 = (VAR_4 && VAR_4 != -VAR_0) ? 1 : 0;
 VAR_4 = FUNC_8(VAR_2);
 VAR_5 = (VAR_4 && VAR_4 != -VAR_0) ? 1 : 0;
 VAR_4 = FUNC_2(VAR_2);
 VAR_5 = (VAR_4 && VAR_4 != -VAR_0) ? 1 : 0;

 if (VAR_2->session_error || VAR_3->sys_error)
  VAR_5 = 1;

 if (VAR_5)
  FUNC_1(VAR_2);

 FUNC_7(VAR_2);
 FUNC_9(VAR_3);
 FUNC_0(&VAR_2->registeredbufs);

 FUNC_6(&VAR_2->lock);
}

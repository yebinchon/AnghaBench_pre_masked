
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_session {int sess_cmd_lock; } ;
struct se_cmd {int transport_state; int cmd_kref; int t_state_lock; struct se_session* se_sess; int tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static bool FUNC_7(struct se_cmd *VAR_4,
        struct se_session *VAR_5, int VAR_6)
{
 struct se_session *VAR_7 = VAR_4->se_sess;

 FUNC_1(&VAR_7->sess_cmd_lock);
 FUNC_0(!FUNC_2());
 FUNC_5(&VAR_4->t_state_lock);
 if (VAR_4->transport_state & (VAR_1 | VAR_2)) {
  FUNC_4("Attempted to abort io tag: %llu already complete or"
   " fabric stop, skipping\n", VAR_4->tag);
  FUNC_6(&VAR_4->t_state_lock);
  return 0;
 }
 VAR_4->transport_state |= VAR_0;

 if ((VAR_5 != VAR_4->se_sess) && VAR_6)
  VAR_4->transport_state |= VAR_3;

 FUNC_6(&VAR_4->t_state_lock);

 return FUNC_3(&VAR_4->cmd_kref);
}

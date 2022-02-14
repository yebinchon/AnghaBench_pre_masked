
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla_tgt_sess_work_param {int type; int sess_works_list_entry; int tm_iocb; } ;
struct qla_tgt {int sess_work; int sess_work_lock; int sess_works_list; int vha; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qla_tgt_sess_work_param* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,void const*,unsigned int) ;
 int FUNC_3 (int ,int ,int,char*,int,...) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct qla_tgt *VAR_3, int VAR_4,
 const void *VAR_5, unsigned int VAR_6)
{
 struct qla_tgt_sess_work_param *VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_0(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  FUNC_3(VAR_2, VAR_3->vha, 0xf050,
      "qla_target(%d): Unable to create session "
      "work, command will be refused", 0);
  return -VAR_0;
 }

 FUNC_3(VAR_2, VAR_3->vha, 0xf00e,
     "Scheduling work (type %d, prm %p)"
     " to find session for param %p (size %d, tgt %p)\n",
     VAR_4, VAR_7, VAR_5, VAR_6, VAR_3);

 VAR_7->type = VAR_4;
 FUNC_2(&VAR_7->tm_iocb, VAR_5, VAR_6);

 FUNC_5(&VAR_3->sess_work_lock, VAR_8);
 FUNC_1(&VAR_7->sess_works_list_entry, &VAR_3->sess_works_list);
 FUNC_6(&VAR_3->sess_work_lock, VAR_8);

 FUNC_4(&VAR_3->sess_work);

 return 0;
}

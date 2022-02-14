
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtree_mem_dqinfo {int dummy; } ;
struct kqid {int type; } ;
typedef int qid_t ;


 int VAR_0 ;
 int FUNC_0 (struct qtree_mem_dqinfo*,int *,int ,int ) ;
 int FUNC_1 (int *,struct kqid) ;
 int VAR_1 ;
 struct kqid FUNC_2 (int *,int ,int ) ;

int FUNC_3(struct qtree_mem_dqinfo *VAR_2, struct kqid *VAR_3)
{
 qid_t VAR_4 = FUNC_1(&VAR_1, *VAR_3);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, &VAR_4, VAR_0, 0);
 if (VAR_5 < 0)
  return VAR_5;
 *VAR_3 = FUNC_2(&VAR_1, VAR_3->type, VAR_4);
 return 0;
}

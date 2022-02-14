
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int * quota_rec; int slot_num; int journal; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int *,int *,int ) ;

void FUNC_1(struct ocfs2_super *VAR_1)
{
 if (VAR_1->quota_rec) {
  FUNC_0(VAR_1->journal,
      VAR_1->slot_num,
      ((void*)0),
      ((void*)0),
      VAR_1->quota_rec,
      VAR_0);
  VAR_1->quota_rec = ((void*)0);
 }
}

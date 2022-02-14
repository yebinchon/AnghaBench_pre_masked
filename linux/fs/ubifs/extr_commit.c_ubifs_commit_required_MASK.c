
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int cmt_state; int cs_lock; } ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ubifs_info *VAR_0)
{
 FUNC_2(&VAR_0->cs_lock);
 switch (VAR_0->cmt_state) {
 case 130:
 case 133:
  FUNC_0("old: %s, new: %s", FUNC_1(VAR_0->cmt_state),
   FUNC_1(131));
  VAR_0->cmt_state = 131;
  break;
 case 129:
  FUNC_0("old: %s, new: %s", FUNC_1(VAR_0->cmt_state),
   FUNC_1(128));
  VAR_0->cmt_state = 128;
  break;
 case 131:
 case 128:
 case 132:
  break;
 }
 FUNC_3(&VAR_0->cs_lock);
}

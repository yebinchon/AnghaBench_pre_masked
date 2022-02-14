
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct ubifs_znode {size_t iip; TYPE_2__* parent; scalar_t__ time; scalar_t__ cnext; } ;
struct TYPE_6__ {int * znode; } ;
struct ubifs_info {TYPE_3__ zroot; int clean_zn_cnt; int tnc_mutex; int umount_mutex; } ;
struct TYPE_5__ {TYPE_1__* zbranch; } ;
struct TYPE_4__ {int * znode; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ubifs_info*,int ) ;
 int VAR_0 ;
 int FUNC_7 (struct ubifs_info*,struct ubifs_znode*) ;
 struct ubifs_znode* FUNC_8 (struct ubifs_info*,int *,struct ubifs_znode*) ;
 int FUNC_9 (struct ubifs_znode*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct ubifs_info *VAR_1, int VAR_2, int VAR_3, int *VAR_4)
{
 int VAR_5 = 0;
 struct ubifs_znode *VAR_6, *VAR_7;
 time64_t VAR_8 = FUNC_4();

 FUNC_6(VAR_1, FUNC_5(&VAR_1->umount_mutex));
 FUNC_6(VAR_1, FUNC_5(&VAR_1->tnc_mutex));

 if (!VAR_1->zroot.znode || FUNC_1(&VAR_1->clean_zn_cnt) == 0)
  return 0;
 VAR_7 = ((void*)0);
 VAR_6 = FUNC_8(VAR_1, VAR_1->zroot.znode, ((void*)0));
 while (VAR_6 && VAR_5 < VAR_2 &&
        FUNC_1(&VAR_1->clean_zn_cnt) > 0) {
  int VAR_9;
  if (VAR_6->cnext) {




   *VAR_4 = 1;
  } else if (!FUNC_9(VAR_6) &&
      FUNC_0(VAR_8 - VAR_6->time) >= VAR_3) {
   if (VAR_6->parent)
    VAR_6->parent->zbranch[VAR_6->iip].znode = ((void*)0);
   else
    VAR_1->zroot.znode = ((void*)0);

   VAR_9 = FUNC_7(VAR_1, VAR_6);
   FUNC_2(VAR_9, &VAR_0);
   FUNC_2(VAR_9, &VAR_1->clean_zn_cnt);
   VAR_5 += VAR_9;
   VAR_6 = VAR_7;
  }

  if (FUNC_10(!VAR_1->zroot.znode))
   break;

  VAR_7 = VAR_6;
  VAR_6 = FUNC_8(VAR_1, VAR_1->zroot.znode, VAR_6);
  FUNC_3();
 }

 return VAR_5;
}

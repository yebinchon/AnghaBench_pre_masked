
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_5__ {int * prev; } ;
struct TYPE_4__ {int mount_pending; TYPE_2__ list; int no_list; int devname; int fs_id; int id; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct super_block *VAR_3)
{
 int VAR_4;
 FUNC_2(VAR_0, "orangefs_kill_sb: called\n");


 FUNC_4(VAR_3);

 if (!FUNC_0(VAR_3)) {
  FUNC_5(&VAR_1);
  FUNC_6(&VAR_1);
  return;
 }




 VAR_4 = FUNC_7(FUNC_0(VAR_3)->id, FUNC_0(VAR_3)->fs_id,
     FUNC_0(VAR_3)->devname);
 if (!VAR_4)
  FUNC_0(VAR_3)->mount_pending = 1;

 if (!FUNC_0(VAR_3)->no_list) {

  FUNC_8(&VAR_2);

  FUNC_1(&FUNC_0(VAR_3)->list);
  FUNC_0(VAR_3)->list.prev = ((void*)0);
  FUNC_9(&VAR_2);
 }





 FUNC_5(&VAR_1);
 FUNC_6(&VAR_1);


 FUNC_3(FUNC_0(VAR_3));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int s_id; int s_flags; } ;
struct TYPE_4__ {int j_flags; } ;
typedef TYPE_1__ journal_t ;
struct TYPE_5__ {TYPE_1__* s_journal; int s_mount_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_0 (struct super_block*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct super_block*,int ,char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ FUNC_5 (struct super_block*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (struct super_block*,int ) ;

__attribute__((used)) static void FUNC_9(struct super_block *VAR_9)
{
 if (FUNC_8(VAR_9, VAR_8))
  FUNC_1(1);

 if (FUNC_5(VAR_9))
  return;

 if (!FUNC_8(VAR_9, VAR_1)) {
  journal_t *VAR_10 = FUNC_0(VAR_9)->s_journal;

  FUNC_0(VAR_9)->s_mount_flags |= VAR_4;
  if (VAR_10)
   FUNC_3(VAR_10, -VAR_0);
 }





 if (FUNC_8(VAR_9, VAR_3) || FUNC_7()) {
  FUNC_2(VAR_9, VAR_6, "Remounting filesystem read-only");




  FUNC_6();
  VAR_9->s_flags |= VAR_7;
 } else if (FUNC_8(VAR_9, VAR_2)) {
  if (FUNC_0(VAR_9)->s_journal &&
    !(FUNC_0(VAR_9)->s_journal->j_flags & VAR_5))
   return;
  FUNC_4("EXT4-fs (device %s): panic forced after error\n",
   VAR_9->s_id);
 }
}

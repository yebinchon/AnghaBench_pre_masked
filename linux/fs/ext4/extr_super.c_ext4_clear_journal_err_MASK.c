
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ext4_super_block {int s_state; } ;
typedef int journal_t ;
struct TYPE_2__ {int s_mount_state; int * s_journal; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct super_block*,int) ;
 char* FUNC_4 (struct super_block*,int,char*) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct super_block*,char*,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct super_block *VAR_1,
       struct ext4_super_block *VAR_2)
{
 journal_t *VAR_3;
 int VAR_4;
 const char *VAR_5;

 FUNC_0(!FUNC_5(VAR_1));

 VAR_3 = FUNC_1(VAR_1)->s_journal;






 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4) {
  char VAR_6[16];

  VAR_5 = FUNC_4(VAR_1, VAR_4, VAR_6);
  FUNC_6(VAR_1, "Filesystem error recorded "
        "from previous mount: %s", VAR_5);
  FUNC_6(VAR_1, "Marking fs in need of filesystem check.");

  FUNC_1(VAR_1)->s_mount_state |= VAR_0;
  VAR_2->s_state |= FUNC_2(VAR_0);
  FUNC_3(VAR_1, 1);

  FUNC_7(VAR_3);
  FUNC_9(VAR_3);
 }
}

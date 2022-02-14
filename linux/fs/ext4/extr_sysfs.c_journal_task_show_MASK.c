
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ext4_sb_info {TYPE_1__* s_journal; } ;
typedef int ssize_t ;
struct TYPE_2__ {int j_task; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct ext4_sb_info *VAR_1, char *VAR_2)
{
 if (!VAR_1->s_journal)
  return FUNC_0(VAR_2, VAR_0, "<none>\n");
 return FUNC_0(VAR_2, VAR_0, "%d\n",
   FUNC_1(VAR_1->s_journal->j_task));
}

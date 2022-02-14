
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int j_errno; int j_sb_buffer; TYPE_2__* j_superblock; } ;
typedef TYPE_1__ journal_t ;
struct TYPE_6__ {int s_errno; } ;
typedef TYPE_2__ journal_superblock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(journal_t *VAR_3)
{
 journal_superblock_t *VAR_4 = VAR_3->j_superblock;
 int VAR_5;

 FUNC_3(VAR_3->j_sb_buffer);
 VAR_5 = VAR_3->j_errno;
 if (VAR_5 == -VAR_0)
  VAR_5 = 0;
 FUNC_2(1, "JBD2: updating superblock error (errno %d)\n", VAR_5);
 VAR_4->s_errno = FUNC_0(VAR_5);

 FUNC_1(VAR_3, VAR_2 | VAR_1);
}

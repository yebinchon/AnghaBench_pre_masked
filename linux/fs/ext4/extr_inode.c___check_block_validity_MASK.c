
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {scalar_t__ i_ino; int i_sb; } ;
struct ext4_map_blocks {int m_len; int m_pblk; scalar_t__ m_lblk; } ;
struct TYPE_5__ {TYPE_1__* s_es; } ;
struct TYPE_4__ {int s_journal_inum; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (struct inode*,char const*,unsigned int,int ,char*,unsigned long,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, const char *VAR_2,
    unsigned int VAR_3,
    struct ext4_map_blocks *VAR_4)
{
 if (FUNC_3(VAR_1->i_sb) &&
     (VAR_1->i_ino ==
      FUNC_4(FUNC_0(VAR_1->i_sb)->s_es->s_journal_inum)))
  return 0;
 if (!FUNC_1(FUNC_0(VAR_1->i_sb), VAR_4->m_pblk,
       VAR_4->m_len)) {
  FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4->m_pblk,
     "lblock %lu mapped to illegal pblock %llu "
     "(length %d)", (unsigned long) VAR_4->m_lblk,
     VAR_4->m_pblk, VAR_4->m_len);
  return -VAR_0;
 }
 return 0;
}

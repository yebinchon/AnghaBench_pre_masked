
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct jbd2_journal_block_tail {int dummy; } ;
struct buffer_head {char* b_data; } ;
struct TYPE_6__ {int j_blocksize; } ;
typedef TYPE_1__ journal_t ;
typedef int journal_header_t ;
struct TYPE_7__ {int t_flags; } ;
typedef TYPE_2__ journal_block_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(journal_t *VAR_2, struct buffer_head *VAR_3)
{
 char * VAR_4;
 journal_block_tag_t * VAR_5;
 int VAR_6 = 0, VAR_7 = VAR_2->j_blocksize;
 int VAR_8 = FUNC_2(VAR_2);

 if (FUNC_1(VAR_2))
  VAR_7 -= sizeof(struct jbd2_journal_block_tail);

 VAR_4 = &VAR_3->b_data[sizeof(journal_header_t)];

 while ((VAR_4 - VAR_3->b_data + VAR_8) <= VAR_7) {
  VAR_5 = (journal_block_tag_t *) VAR_4;

  VAR_6++;
  VAR_4 += VAR_8;
  if (!(VAR_5->t_flags & FUNC_0(VAR_1)))
   VAR_4 += 16;

  if (VAR_5->t_flags & FUNC_0(VAR_0))
   break;
 }

 return VAR_6;
}

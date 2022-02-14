
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int tid_t ;
struct recovery_info {int nr_revokes; } ;
struct jbd2_journal_block_tail {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_9__ {int j_blocksize; } ;
typedef TYPE_1__ journal_t ;
struct TYPE_10__ {int r_count; } ;
typedef TYPE_2__ jbd2_journal_revoke_header_t ;
typedef int __u32 ;
typedef int __be64 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 unsigned long long FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,unsigned long long,int ) ;

__attribute__((used)) static int FUNC_6(journal_t *VAR_2, struct buffer_head *VAR_3,
          tid_t VAR_4, struct recovery_info *VAR_5)
{
 jbd2_journal_revoke_header_t *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9 = 0;
 __u32 VAR_10;
 int VAR_11 = 4;

 VAR_6 = (jbd2_journal_revoke_header_t *) VAR_3->b_data;
 VAR_7 = sizeof(jbd2_journal_revoke_header_t);
 VAR_10 = FUNC_0(VAR_6->r_count);

 if (!FUNC_2(VAR_2, VAR_6))
  return -VAR_0;

 if (FUNC_4(VAR_2))
  VAR_9 = sizeof(struct jbd2_journal_block_tail);
 if (VAR_10 > VAR_2->j_blocksize - VAR_9)
  return -VAR_1;
 VAR_8 = VAR_10;

 if (FUNC_3(VAR_2))
  VAR_11 = 8;

 while (VAR_7 + VAR_11 <= VAR_8) {
  unsigned long long VAR_12;
  int VAR_13;

  if (VAR_11 == 4)
   VAR_12 = FUNC_0(* ((__be32 *) (VAR_3->b_data+VAR_7)));
  else
   VAR_12 = FUNC_1(* ((__be64 *) (VAR_3->b_data+VAR_7)));
  VAR_7 += VAR_11;
  VAR_13 = FUNC_5(VAR_2, VAR_12, VAR_4);
  if (VAR_13)
   return VAR_13;
  ++VAR_5->nr_revokes;
 }
 return 0;
}

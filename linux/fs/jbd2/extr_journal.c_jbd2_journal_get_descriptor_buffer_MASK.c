
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int t_tid; TYPE_2__* t_journal; } ;
typedef TYPE_1__ transaction_t ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_7__ {int j_blocksize; int j_dev; } ;
typedef TYPE_2__ journal_t ;
struct TYPE_8__ {void* h_sequence; void* h_blocktype; void* h_magic; } ;
typedef TYPE_3__ journal_header_t ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int VAR_0 ;
 struct buffer_head* FUNC_1 (int ,unsigned long long,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,unsigned long long*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;

struct buffer_head *
FUNC_8(transaction_t *VAR_1, int VAR_2)
{
 journal_t *VAR_3 = VAR_1->t_journal;
 struct buffer_head *VAR_4;
 unsigned long long VAR_5;
 journal_header_t *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3, &VAR_5);

 if (VAR_7)
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_3->j_dev, VAR_5, VAR_3->j_blocksize);
 if (!VAR_4)
  return ((void*)0);
 FUNC_4(VAR_4);
 FUNC_5(VAR_4->b_data, 0, VAR_3->j_blocksize);
 VAR_6 = (journal_header_t *)VAR_4->b_data;
 VAR_6->h_magic = FUNC_2(VAR_0);
 VAR_6->h_blocktype = FUNC_2(VAR_2);
 VAR_6->h_sequence = FUNC_2(VAR_1->t_tid);
 FUNC_6(VAR_4);
 FUNC_7(VAR_4);
 FUNC_0(VAR_4, "return this buffer");
 return VAR_4;
}

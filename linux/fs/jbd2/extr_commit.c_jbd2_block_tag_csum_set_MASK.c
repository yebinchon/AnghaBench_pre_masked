
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct page {int dummy; } ;
struct buffer_head {int b_size; int b_data; struct page* b_page; } ;
typedef int seq ;
struct TYPE_9__ {int j_csum_seed; } ;
typedef TYPE_1__ journal_t ;
struct TYPE_10__ {int t_checksum; } ;
typedef TYPE_2__ journal_block_tag_t ;
struct TYPE_11__ {void* t_checksum; } ;
typedef TYPE_3__ journal_block_tag3_t ;
typedef int __u8 ;
typedef int __u32 ;
typedef void* __be32 ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int *,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(journal_t *VAR_0, journal_block_tag_t *VAR_1,
        struct buffer_head *VAR_2, __u32 VAR_3)
{
 journal_block_tag3_t *VAR_4 = (journal_block_tag3_t *)VAR_1;
 struct page *VAR_5 = VAR_2->b_page;
 __u8 *VAR_6;
 __u32 VAR_7;
 __be32 VAR_8;

 if (!FUNC_4(VAR_0))
  return;

 VAR_8 = FUNC_1(VAR_3);
 VAR_6 = FUNC_5(VAR_5);
 VAR_7 = FUNC_2(VAR_0, VAR_0->j_csum_seed, (__u8 *)&VAR_8, sizeof(VAR_8));
 VAR_7 = FUNC_2(VAR_0, VAR_7, VAR_6 + FUNC_7(VAR_2->b_data),
        VAR_2->b_size);
 FUNC_6(VAR_6);

 if (FUNC_3(VAR_0))
  VAR_4->t_checksum = FUNC_1(VAR_7);
 else
  VAR_1->t_checksum = FUNC_0(VAR_7);
}

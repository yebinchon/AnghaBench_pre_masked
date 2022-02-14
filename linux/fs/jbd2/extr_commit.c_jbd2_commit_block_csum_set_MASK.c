
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct commit_header {scalar_t__* h_chksum; scalar_t__ h_chksum_size; scalar_t__ h_chksum_type; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_5__ {int j_blocksize; int j_csum_seed; } ;
typedef TYPE_1__ journal_t ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(journal_t *VAR_0, struct buffer_head *VAR_1)
{
 struct commit_header *VAR_2;
 __u32 VAR_3;

 if (!FUNC_2(VAR_0))
  return;

 VAR_2 = (struct commit_header *)(VAR_1->b_data);
 VAR_2->h_chksum_type = 0;
 VAR_2->h_chksum_size = 0;
 VAR_2->h_chksum[0] = 0;
 VAR_3 = FUNC_1(VAR_0, VAR_0->j_csum_seed, VAR_1->b_data, VAR_0->j_blocksize);
 VAR_2->h_chksum[0] = FUNC_0(VAR_3);
}

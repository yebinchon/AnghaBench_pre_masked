
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_balance {int rbytes; int* insert_size; scalar_t__ pos_in_item; int zeroes_num; struct buffer_head** R; int * CFR; int * rkey; TYPE_1__* tb_sb; int * rnum; int item_pos; int tb_path; } ;
struct item_head {int dummy; } ;
struct buffer_info {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int s_blocksize_bits; } ;


 struct buffer_head* FUNC_0 (int ) ;
 int FUNC_1 (int,char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int,int ,unsigned long) ;
 int FUNC_3 (struct tree_balance*,struct item_head* const,char const* const) ;
 int FUNC_4 (struct tree_balance*,struct buffer_info*) ;
 int FUNC_5 (struct tree_balance*,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int,int ) ;
 int FUNC_12 (struct buffer_head*,int ) ;
 int FUNC_13 (struct buffer_head*,int ) ;
 int FUNC_14 (struct buffer_info*,int ,int,int,char const*,int) ;
 int FUNC_15 (struct tree_balance*,int ,int) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static void FUNC_17(struct tree_balance *VAR_1,
         struct item_head * const VAR_2,
         const char * const VAR_3)
{
 struct buffer_head *VAR_4 = FUNC_0(VAR_1->tb_path);
 int VAR_5, VAR_6, VAR_7, VAR_8;
 unsigned long VAR_9;
 const char *VAR_10;
 struct buffer_info VAR_11;


 if (FUNC_9(FUNC_12(VAR_4, VAR_1->item_pos))) {
  FUNC_3(VAR_1, VAR_2, VAR_3);
  return;
 }







 VAR_5 = VAR_1->rbytes - VAR_1->insert_size[0];
 if (VAR_5 < 0)
  VAR_5 = 0;

 FUNC_1(VAR_1->pos_in_item != FUNC_6(FUNC_12(VAR_4, VAR_1->item_pos)),
        "PAP-12155: invalid position to paste. ih_item_len=%d, "
        "pos_in_item=%d", VAR_1->pos_in_item,
        FUNC_6(FUNC_12(VAR_4, VAR_1->item_pos)));

 FUNC_15(VAR_1, VAR_1->rnum[0], VAR_5);





 VAR_6 = VAR_1->insert_size[0] - VAR_1->rbytes;
 if (VAR_6 < 0)
  VAR_6 = 0;

 VAR_9 = VAR_6;

 VAR_8 = FUNC_7(FUNC_12(VAR_1->R[0], 0));

 if (FUNC_11(VAR_8, FUNC_13(VAR_1->R[0], 0))) {
  int VAR_12 = VAR_1->tb_sb->s_blocksize_bits - VAR_0;
  VAR_9 = VAR_6 << VAR_12;
 }

 FUNC_2(VAR_8, FUNC_13(VAR_1->R[0], 0), VAR_9);
 FUNC_2(VAR_8, FUNC_8(VAR_1->CFR[0], VAR_1->rkey[0]),
       VAR_9);

 FUNC_5(VAR_1, VAR_1->CFR[0], 0);


 FUNC_4(VAR_1, &VAR_11);
 if (VAR_6 > VAR_1->zeroes_num) {
  VAR_7 = 0;
  VAR_10 = VAR_3 + VAR_6 - VAR_1->zeroes_num;
 } else {
  VAR_10 = VAR_3;
  VAR_7 = VAR_1->zeroes_num - VAR_6;
  VAR_1->zeroes_num -= VAR_7;
 }

 FUNC_14(&VAR_11, 0, VAR_5, VAR_1->insert_size[0] - VAR_6,
        VAR_10, VAR_7);

 if (FUNC_10(FUNC_12(VAR_1->R[0], 0)))
  FUNC_16(FUNC_12(VAR_1->R[0], 0), 0);

 VAR_1->insert_size[0] = VAR_6;
 if (!VAR_6)
  VAR_1->pos_in_item++;
}

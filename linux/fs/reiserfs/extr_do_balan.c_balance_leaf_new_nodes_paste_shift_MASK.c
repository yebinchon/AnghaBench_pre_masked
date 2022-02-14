
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_balance {scalar_t__ pos_in_item; int* insert_size; int* sbytes; int zeroes_num; TYPE_1__* tb_sb; struct buffer_head** S_new; int * snum; int item_pos; int tb_path; } ;
struct item_head {int dummy; } ;
struct buffer_info {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int s_blocksize_bits; } ;


 int VAR_0 ;
 struct buffer_head* FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct item_head*,int) ;
 int FUNC_3 (struct tree_balance*,struct item_head* const,char const* const,struct item_head*,struct buffer_head**,int) ;
 int FUNC_4 (struct tree_balance*,struct buffer_info*,struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct item_head*) ;
 scalar_t__ FUNC_6 (struct item_head*) ;
 scalar_t__ FUNC_7 (struct item_head*) ;
 struct item_head* FUNC_8 (struct buffer_head*,int ) ;
 int FUNC_9 (int ,struct tree_balance*,int ,int,struct buffer_head*) ;
 int FUNC_10 (struct buffer_info*,int ,int,int,char const*,int) ;
 int FUNC_11 (struct item_head*,int ) ;

__attribute__((used)) static void FUNC_12(struct tree_balance *VAR_2,
      struct item_head * const VAR_3,
      const char * const VAR_4,
      struct item_head *VAR_5,
      struct buffer_head **VAR_6,
      int VAR_7)
{
 struct buffer_head *VAR_8 = FUNC_0(VAR_2->tb_path);
 struct item_head *VAR_9 = FUNC_8(VAR_8, VAR_2->item_pos);
 int VAR_10, VAR_11, VAR_12, VAR_13;
 const char *VAR_14;
 struct item_head *VAR_15;
 struct buffer_info VAR_16;

 FUNC_1(VAR_3, "PAP-12210: ih must be 0");

 if (FUNC_6(VAR_9)) {
  FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5,
          VAR_6, VAR_7);
  return;
 }




 FUNC_1(VAR_2->pos_in_item != FUNC_5(FUNC_8(VAR_8, VAR_2->item_pos)) ||
        VAR_2->insert_size[0] <= 0,
        "PAP-12225: item too short or insert_size <= 0");




 VAR_10 = VAR_2->sbytes[VAR_7] - VAR_2->insert_size[0];
 if (VAR_10 < 0)
  VAR_10 = 0;
 FUNC_9(VAR_0, VAR_2, VAR_2->snum[VAR_7], VAR_10,
   VAR_2->S_new[VAR_7]);





 VAR_11 = VAR_2->insert_size[0] - VAR_2->sbytes[VAR_7];
 if (VAR_11 < 0)
  VAR_11 = 0;


 FUNC_4(VAR_2, &VAR_16, VAR_2->S_new[VAR_7]);
 if (VAR_11 > VAR_2->zeroes_num) {
  VAR_12 = 0;
  VAR_14 = VAR_4 + VAR_11 - VAR_2->zeroes_num;
 } else {
  VAR_14 = VAR_4;
  VAR_12 = VAR_2->zeroes_num - VAR_11;
  VAR_2->zeroes_num -= VAR_12;
 }

 FUNC_10(&VAR_16, 0, VAR_10, VAR_2->insert_size[0] - VAR_11,
        VAR_14, VAR_12);

 VAR_15 = FUNC_8(VAR_2->S_new[VAR_7], 0);
 VAR_13 = 0;
 if (FUNC_7(VAR_15)) {
  FUNC_11(VAR_15, 0);
  VAR_13 = VAR_2->tb_sb->s_blocksize_bits - VAR_1;
 }
 FUNC_2(VAR_15, VAR_11 << VAR_13);

 VAR_2->insert_size[0] = VAR_11;
 if (!VAR_11)
  VAR_2->pos_in_item++;
}

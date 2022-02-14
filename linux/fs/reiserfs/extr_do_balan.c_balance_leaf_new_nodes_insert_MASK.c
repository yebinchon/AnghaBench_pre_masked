
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_balance {int* snum; int item_pos; int* sbytes; int zeroes_num; int* insert_size; int * S_new; TYPE_1__* tb_sb; int tb_path; } ;
struct item_head {int dummy; } ;
struct buffer_info {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int s_blocksize_bits; } ;


 int FUNC_0 (struct buffer_head*) ;
 int VAR_0 ;
 struct buffer_head* FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct tree_balance*,struct buffer_info*,int ) ;
 int FUNC_3 (struct item_head* const) ;
 scalar_t__ FUNC_4 (struct item_head* const) ;
 int FUNC_5 (struct item_head* const) ;
 int FUNC_6 (struct buffer_info*,int,struct item_head* const,char const* const,int) ;
 int FUNC_7 (int ,struct tree_balance*,int,int,int ) ;
 int FUNC_8 (struct item_head* const,int) ;
 int FUNC_9 (struct item_head* const,int) ;

__attribute__((used)) static void FUNC_10(struct tree_balance *VAR_2,
       struct item_head * const VAR_3,
       const char * const VAR_4,
       struct item_head *VAR_5,
       struct buffer_head **VAR_6,
       int VAR_7)
{
 struct buffer_head *VAR_8 = FUNC_1(VAR_2->tb_path);
 int VAR_9 = FUNC_0(VAR_8);
 struct buffer_info VAR_10;
 int VAR_11;


 if (VAR_9 - VAR_2->snum[VAR_7] >= VAR_2->item_pos) {
  FUNC_7(VAR_0, VAR_2,
    VAR_2->snum[VAR_7], VAR_2->sbytes[VAR_7], VAR_2->S_new[VAR_7]);
  return;
 }




 if (VAR_2->item_pos == VAR_9 - VAR_2->snum[VAR_7] + 1 && VAR_2->sbytes[VAR_7] != -1) {
  int VAR_12, VAR_13, VAR_14;
  const char *VAR_15;


  FUNC_7(VAR_0, VAR_2, VAR_2->snum[VAR_7] - 1, -1,
    VAR_2->S_new[VAR_7]);


  VAR_12 = FUNC_5(VAR_3);
  VAR_13 = FUNC_3(VAR_3);





  VAR_11 = 0;
  if (FUNC_4(VAR_3))
   VAR_11 = VAR_2->tb_sb->s_blocksize_bits - VAR_1;
  FUNC_9(VAR_3,
       FUNC_5(VAR_3) +
       ((VAR_13 - VAR_2->sbytes[VAR_7]) << VAR_11));

  FUNC_8(VAR_3, VAR_2->sbytes[VAR_7]);


  FUNC_2(VAR_2, &VAR_10, VAR_2->S_new[VAR_7]);

  if ((VAR_13 - VAR_2->sbytes[VAR_7]) > VAR_2->zeroes_num) {
   VAR_14 = 0;
   VAR_15 = VAR_4 + (VAR_13 - VAR_2->sbytes[VAR_7]) -
      VAR_2->zeroes_num;
  } else {
   VAR_15 = VAR_4;
   VAR_14 = VAR_2->zeroes_num - (VAR_13 -
       VAR_2->sbytes[VAR_7]);
   VAR_2->zeroes_num -= VAR_14;
  }

  FUNC_6(&VAR_10, 0, VAR_3, VAR_15, VAR_14);





  FUNC_9(VAR_3, VAR_12);
  FUNC_8(VAR_3, VAR_13 - VAR_2->sbytes[VAR_7]);
  VAR_2->insert_size[0] -= VAR_2->sbytes[VAR_7];
 } else {






  FUNC_7(VAR_0, VAR_2,
    VAR_2->snum[VAR_7] - 1, VAR_2->sbytes[VAR_7], VAR_2->S_new[VAR_7]);


  FUNC_2(VAR_2, &VAR_10, VAR_2->S_new[VAR_7]);
  FUNC_6(&VAR_10, VAR_2->item_pos - VAR_9 + VAR_2->snum[VAR_7] - 1,
         VAR_3, VAR_4, VAR_2->zeroes_num);

  VAR_2->zeroes_num = VAR_2->insert_size[0] = 0;
 }
}

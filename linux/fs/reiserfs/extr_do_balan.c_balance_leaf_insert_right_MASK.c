
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_balance {int* rnum; int item_pos; int rbytes; int zeroes_num; int* insert_size; int * R; int * rkey; int * CFR; TYPE_1__* tb_sb; int tb_path; } ;
struct item_head {int dummy; } ;
struct buffer_info {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int s_blocksize_bits; } ;


 int FUNC_0 (struct buffer_head*) ;
 struct buffer_head* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct tree_balance*,struct buffer_info*) ;
 int FUNC_3 (struct item_head* const) ;
 scalar_t__ FUNC_4 (struct item_head* const) ;
 int FUNC_5 (struct item_head* const) ;
 int FUNC_6 (struct buffer_info*,int,struct item_head* const,char const* const,int) ;
 int FUNC_7 (struct tree_balance*,int,int) ;
 int FUNC_8 (struct item_head* const,int) ;
 int FUNC_9 (struct tree_balance*,int ,int ,int ,int ) ;
 int FUNC_10 (struct item_head* const,int) ;

__attribute__((used)) static void FUNC_11(struct tree_balance *VAR_1,
          struct item_head * const VAR_2,
          const char * const VAR_3)
{

 struct buffer_head *VAR_4 = FUNC_1(VAR_1->tb_path);
 int VAR_5 = FUNC_0(VAR_4);
 struct buffer_info VAR_6;


 if (VAR_5 - VAR_1->rnum[0] >= VAR_1->item_pos) {
  FUNC_7(VAR_1, VAR_1->rnum[0], VAR_1->rbytes);
  return;
 }




 if (VAR_1->item_pos == VAR_5 - VAR_1->rnum[0] + 1 && VAR_1->rbytes != -1) {
  loff_t VAR_7, VAR_8, VAR_9;
  const char *VAR_10;
  int VAR_11;
  loff_t VAR_12;

  FUNC_7(VAR_1, VAR_1->rnum[0] - 1, -1);


  VAR_7 = FUNC_5(VAR_2);
  VAR_8 = FUNC_3(VAR_2);





  VAR_11 = 0;
  if (FUNC_4(VAR_2))
   VAR_11 = VAR_1->tb_sb->s_blocksize_bits - VAR_0;
  VAR_12 = FUNC_5(VAR_2) + ((VAR_8 - VAR_1->rbytes) << VAR_11);
  FUNC_10(VAR_2, VAR_12);
  FUNC_8(VAR_2, VAR_1->rbytes);


  FUNC_2(VAR_1, &VAR_6);
  if ((VAR_8 - VAR_1->rbytes) > VAR_1->zeroes_num) {
   VAR_9 = 0;
   VAR_10 = VAR_3 + (VAR_8 - VAR_1->rbytes) - VAR_1->zeroes_num;
  } else {
   VAR_10 = VAR_3;
   VAR_9 = VAR_1->zeroes_num -
       (VAR_8 - VAR_1->rbytes);
   VAR_1->zeroes_num -= VAR_9;
  }

  FUNC_6(&VAR_6, 0, VAR_2, VAR_10, VAR_9);


  FUNC_9(VAR_1, VAR_1->CFR[0], VAR_1->rkey[0], VAR_1->R[0], 0);





  FUNC_10(VAR_2, VAR_7);
  FUNC_8(VAR_2, VAR_8 - VAR_1->rbytes);

  VAR_1->insert_size[0] -= VAR_1->rbytes;

 } else {



  FUNC_7(VAR_1, VAR_1->rnum[0] - 1, VAR_1->rbytes);


  FUNC_2(VAR_1, &VAR_6);
  FUNC_6(&VAR_6, VAR_1->item_pos - VAR_5 + VAR_1->rnum[0] - 1,
         VAR_2, VAR_3, VAR_1->zeroes_num);

  if (VAR_1->item_pos - VAR_5 + VAR_1->rnum[0] - 1 == 0)
   FUNC_9(VAR_1, VAR_1->CFR[0], VAR_1->rkey[0], VAR_1->R[0], 0);

  VAR_1->zeroes_num = VAR_1->insert_size[0] = 0;
 }
}

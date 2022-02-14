
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tree_balance {scalar_t__* insert_size; int* lnum; int lbytes; int* blknum; int tb_sb; scalar_t__* CFL; int * rkey; scalar_t__* CFR; int * lkey; int * rnum; int item_pos; int pos_in_item; scalar_t__ zeroes_num; TYPE_1__* tb_path; } ;
struct item_head {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_3__ {int pos_in_item; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 struct buffer_head* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,char*,...) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_4 (struct tree_balance*,struct item_head*,char const*,int) ;
 int FUNC_5 (struct tree_balance*,struct item_head*,char const*,int) ;
 int FUNC_6 (struct tree_balance*,struct item_head*,char const*,struct item_head*,struct buffer_head**,int) ;
 int FUNC_7 (struct tree_balance*,struct item_head*,char const*,int) ;
 int FUNC_8 (struct tree_balance*,int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct tree_balance*,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (struct item_head*) ;
 int FUNC_12 (scalar_t__,int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct buffer_head*,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (struct tree_balance*,struct buffer_head*) ;
 int FUNC_17 (int ,char*,char*,...) ;

__attribute__((used)) static int FUNC_18(struct tree_balance *VAR_4, struct item_head *VAR_5,
   const char *VAR_6, int VAR_7,
   struct item_head *VAR_8,
   struct buffer_head **VAR_9)
{
 struct buffer_head *VAR_10 = FUNC_1(VAR_4->tb_path);

 FUNC_2(VAR_4->tb_sb, VAR_3[0]);


 if (VAR_4->insert_size[0] < 0)
  return FUNC_8(VAR_4, VAR_7);

 VAR_4->item_pos = FUNC_0(VAR_4->tb_path),
 VAR_4->pos_in_item = VAR_4->tb_path->pos_in_item,
 VAR_4->zeroes_num = 0;
 if (VAR_7 == VAR_0 && !VAR_6)
  VAR_4->zeroes_num = FUNC_11(VAR_5);





 if (VAR_7 != VAR_0
     && FUNC_13(FUNC_14(VAR_10, VAR_4->item_pos)))
  VAR_4->pos_in_item *= VAR_2;

 VAR_6 += FUNC_5(VAR_4, VAR_5, VAR_6, VAR_7);



 VAR_4->item_pos -= (VAR_4->lnum[0] - ((VAR_4->lbytes != -1) ? 1 : 0));

 FUNC_7(VAR_4, VAR_5, VAR_6, VAR_7);


 FUNC_3(VAR_4->blknum[0] > 3,
        "PAP-12180: blknum can not be %d. It must be <= 3", VAR_4->blknum[0]);
 FUNC_3(VAR_4->blknum[0] < 0,
        "PAP-12185: blknum can not be %d. It must be >= 0", VAR_4->blknum[0]);






 if (VAR_4->blknum[0] == 0) {

  FUNC_3(!VAR_4->lnum[0] || !VAR_4->rnum[0],
         "PAP-12190: lnum and rnum must not be zero");





  if (VAR_4->CFL[0]) {
   if (!VAR_4->CFR[0])
    FUNC_17(VAR_4->tb_sb, "vs-12195",
            "CFR not initialized");
   FUNC_9(FUNC_12(VAR_4->CFL[0], VAR_4->lkey[0]),
     FUNC_12(VAR_4->CFR[0], VAR_4->rkey[0]));
   FUNC_10(VAR_4, VAR_4->CFL[0], 0);
  }

  FUNC_16(VAR_4, VAR_10);
  return 0;
 }

 FUNC_6(VAR_4, VAR_5, VAR_6, VAR_8, VAR_9, VAR_7);

 FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);
 return 0;
}

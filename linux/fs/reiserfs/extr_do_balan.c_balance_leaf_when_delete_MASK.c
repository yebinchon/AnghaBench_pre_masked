
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int* FR; int* blknum; int* rnum; scalar_t__* lnum; int tb_path; } ;
struct buffer_info {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;
 struct buffer_head* FUNC_4 (int ) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (struct tree_balance*) ;
 int FUNC_7 (struct tree_balance*) ;
 int FUNC_8 (struct tree_balance*) ;
 int FUNC_9 (struct tree_balance*,struct buffer_info*) ;
 int FUNC_10 (struct tree_balance*,int,int) ;
 int FUNC_11 (struct tree_balance*,struct buffer_head*) ;

__attribute__((used)) static int FUNC_12(struct tree_balance *VAR_3, int VAR_4)
{
 struct buffer_head *VAR_5 = FUNC_4(VAR_3->tb_path);
 struct buffer_info VAR_6;
 int VAR_7;

 FUNC_5(VAR_3->FR[0] && FUNC_1(VAR_3->FR[0]) != VAR_0 + 1,
        "vs- 12000: level: wrong FR %z", VAR_3->FR[0]);
 FUNC_5(VAR_3->blknum[0] > 1,
        "PAP-12005: tb->blknum == %d, can not be > 1", VAR_3->blknum[0]);
 FUNC_5(!VAR_3->blknum[0] && !FUNC_3(VAR_3->tb_path, 0),
        "PAP-12010: tree can not be empty");

 FUNC_9(VAR_3, &VAR_6);



 FUNC_0(VAR_4 != VAR_2 && VAR_4 != VAR_1);
 if (VAR_4 == VAR_2)
  FUNC_7(VAR_3);
 else
  FUNC_6(VAR_3);






 VAR_7 = FUNC_2(VAR_5);



 if (VAR_3->lnum[0])
  return FUNC_8(VAR_3);

 if (VAR_3->rnum[0] == -1) {

  FUNC_10(VAR_3, VAR_7, -1);
  FUNC_11(VAR_3, VAR_5);
  return 0;
 }

 FUNC_5(VAR_3->rnum[0],
        "PAP-12065: bad rnum parameter must be 0 (%d)", VAR_3->rnum[0]);
 return 0;
}

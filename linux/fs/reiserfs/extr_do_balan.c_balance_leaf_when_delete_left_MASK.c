
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int* lnum; int* rnum; int lbytes; int rbytes; struct buffer_head** L; struct buffer_head** R; int * rkey; int * CFR; struct buffer_head** FR; int * lkey; int * CFL; int tb_path; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int) ;
 struct buffer_head* FUNC_2 (int ,int ) ;
 struct buffer_head* FUNC_3 (int ) ;
 int FUNC_4 (int,char*,int,...) ;
 int FUNC_5 (int ,struct tree_balance*,int,int,int *) ;
 int FUNC_6 (struct tree_balance*,int,int) ;
 int FUNC_7 (struct tree_balance*,int,int) ;
 int FUNC_8 (struct tree_balance*,struct buffer_head*) ;
 int FUNC_9 (struct tree_balance*,int ,int ,struct buffer_head*,int) ;

__attribute__((used)) static int FUNC_10(struct tree_balance *VAR_4)
{
 struct buffer_head *VAR_5 = FUNC_3(VAR_4->tb_path);
 int VAR_6 = FUNC_0(VAR_5);


 if (VAR_4->lnum[0] == -1) {

  if (VAR_4->rnum[0] == -1) {
   if (VAR_4->FR[0] == FUNC_2(VAR_4->tb_path, 0)) {




    if (FUNC_1(VAR_4->tb_path, 1) == 0 &&
        1 < FUNC_0(VAR_4->FR[0]))
     FUNC_9(VAR_4, VAR_4->CFL[0],
          VAR_4->lkey[0], VAR_4->FR[0], 1);

    FUNC_5(VAR_2, VAR_4, VAR_6, -1,
      ((void*)0));
    FUNC_5(VAR_1, VAR_4,
      FUNC_0(VAR_4->R[0]), -1,
      ((void*)0));

    FUNC_8(VAR_4, VAR_5);
    FUNC_8(VAR_4, VAR_4->R[0]);

    return 0;
   }


   FUNC_5(VAR_3, VAR_4, VAR_6, -1, ((void*)0));
   FUNC_5(VAR_0, VAR_4,
     FUNC_0(VAR_4->L[0]), -1, ((void*)0));


   FUNC_9(VAR_4, VAR_4->CFR[0], VAR_4->rkey[0], VAR_4->R[0], 0);

   FUNC_8(VAR_4, VAR_5);
   FUNC_8(VAR_4, VAR_4->L[0]);

   return -1;
  }

  FUNC_4(VAR_4->rnum[0] != 0,
         "PAP-12045: rnum must be 0 (%d)", VAR_4->rnum[0]);

  FUNC_6(VAR_4, VAR_6, -1);

  FUNC_8(VAR_4, VAR_5);

  return 0;
 }






 FUNC_4((VAR_4->lnum[0] + VAR_4->rnum[0] < VAR_6) ||
        (VAR_4->lnum[0] + VAR_4->rnum[0] > VAR_6 + 1),
        "PAP-12050: rnum(%d) and lnum(%d) and item "
        "number(%d) in S[0] are not consistent",
        VAR_4->rnum[0], VAR_4->lnum[0], VAR_6);
 FUNC_4((VAR_4->lnum[0] + VAR_4->rnum[0] == VAR_6) &&
        (VAR_4->lbytes != -1 || VAR_4->rbytes != -1),
        "PAP-12055: bad rbytes (%d)/lbytes (%d) "
        "parameters when items are not split",
        VAR_4->rbytes, VAR_4->lbytes);
 FUNC_4((VAR_4->lnum[0] + VAR_4->rnum[0] == VAR_6 + 1) &&
        (VAR_4->lbytes < 1 || VAR_4->rbytes != -1),
        "PAP-12060: bad rbytes (%d)/lbytes (%d) "
        "parameters when items are split",
        VAR_4->rbytes, VAR_4->lbytes);

 FUNC_6(VAR_4, VAR_4->lnum[0], VAR_4->lbytes);
 FUNC_7(VAR_4, VAR_4->rnum[0], VAR_4->rbytes);

 FUNC_8(VAR_4, VAR_5);

 return 0;
}

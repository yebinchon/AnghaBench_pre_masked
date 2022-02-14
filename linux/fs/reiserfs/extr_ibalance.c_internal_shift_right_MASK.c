
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {scalar_t__* R; scalar_t__* CFL; int* lkey; int tb_path; } ;
struct buffer_info {scalar_t__ bi_bh; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int,struct tree_balance*,int,struct buffer_info*,struct buffer_info*,int*,struct buffer_head**) ;
 int FUNC_4 (struct buffer_info*,int ,struct buffer_head*,int) ;
 int FUNC_5 (struct buffer_info*,struct buffer_info*,int ,int,int ) ;
 int FUNC_6 (struct tree_balance*,struct buffer_head*,int,scalar_t__,int) ;

__attribute__((used)) static void FUNC_7(



     int VAR_1,
     struct tree_balance *VAR_2,
     int VAR_3, int VAR_4)
{
 struct buffer_info VAR_5, VAR_6;
 struct buffer_head *VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_3(VAR_1, VAR_2, VAR_3, &VAR_5, &VAR_6,
           &VAR_8, &VAR_7);

 VAR_9 = FUNC_0(VAR_6.bi_bh);

 if (VAR_4 > 0) {




  FUNC_4(&VAR_5, 0, VAR_7, VAR_8);
  if (VAR_9 == VAR_4 - 1) {
   FUNC_2(VAR_6.bi_bh != FUNC_1(VAR_2->tb_path, VAR_3) ||
          VAR_5.bi_bh != VAR_2->R[VAR_3],
          "src (%p) must be == tb->S[h](%p) when it disappears",
          VAR_6.bi_bh, FUNC_1(VAR_2->tb_path, VAR_3));

   if (VAR_2->CFL[VAR_3])
    FUNC_6(VAR_2, VAR_7, VAR_8, VAR_2->CFL[VAR_3],
         VAR_2->lkey[VAR_3]);
  } else
   FUNC_6(VAR_2, VAR_7, VAR_8, VAR_6.bi_bh,
        VAR_9 - VAR_4);
 }


 FUNC_5(&VAR_5, &VAR_6, VAR_0,
         VAR_4, 0);
}

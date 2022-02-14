
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_node {int vn_nr_item; } ;
struct tree_balance {int* lnum; int* rnum; struct buffer_head** FR; struct buffer_head** FL; int tb_path; struct virtual_node* tb_vn; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int VAR_3 ;
 int FUNC_4 (int ,int) ;
 struct buffer_head* FUNC_5 (int ,int) ;
 struct buffer_head* FUNC_6 (int ,int) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (struct tree_balance*,int,int) ;
 int FUNC_9 (struct tree_balance*,int,int) ;
 int FUNC_10 (struct tree_balance*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct tree_balance*,int) ;
 int FUNC_13 (struct tree_balance*,int) ;
 int FUNC_14 (struct tree_balance*,int) ;
 scalar_t__ FUNC_15 (struct tree_balance*,int) ;
 int FUNC_16 (struct tree_balance*,int,int,int,int,int *,int,int) ;

__attribute__((used)) static int FUNC_17(struct tree_balance *VAR_4, int VAR_5)
{
 struct virtual_node *VAR_6 = VAR_4->tb_vn;





 struct buffer_head *VAR_7, *VAR_8;
 int VAR_9;
 int VAR_10, VAR_11 ;

 VAR_7 = FUNC_5(VAR_4->tb_path, VAR_5);
 VAR_8 = FUNC_6(VAR_4->tb_path, VAR_5);







 FUNC_10(VAR_4, VAR_5);

 if (!VAR_8) {

  if (VAR_6->vn_nr_item > 0) {
   FUNC_16(VAR_4, VAR_5, 0, 0, 1, ((void*)0), -1, -1);
   return VAR_3;
  }





  FUNC_16(VAR_4, VAR_5, 0, 0, 0, ((void*)0), -1, -1);
  return VAR_0;
 }

 if ((VAR_9 = FUNC_13(VAR_4, VAR_5)) != VAR_0)
  return VAR_9;


 VAR_11 = FUNC_14(VAR_4, VAR_5);
 VAR_10 = FUNC_12(VAR_4, VAR_5);


 FUNC_8(VAR_4, VAR_5, VAR_10);
 FUNC_9(VAR_4, VAR_5, VAR_11);





 if (VAR_6->vn_nr_item >= FUNC_3(VAR_7)) {




  if (VAR_6->vn_nr_item == FUNC_3(VAR_7)) {

   if (VAR_4->lnum[VAR_5] >= VAR_6->vn_nr_item + 1) {
    int VAR_12;
    int VAR_13;

    VAR_13 =
        ((VAR_12 =
          FUNC_4(VAR_4->tb_path,
         VAR_5)) ==
         0) ? FUNC_0(VAR_4->FL[VAR_5]) : VAR_12 - 1;
    VAR_12 = FUNC_11(FUNC_1(VAR_4->FL[VAR_5], VAR_13)) /
        (VAR_1 + VAR_2);
    FUNC_16(VAR_4, VAR_5, -VAR_12 - 1, 0, 0, ((void*)0), -1,
            -1);
    return VAR_0;
   }


   if (VAR_4->rnum[VAR_5] >= VAR_6->vn_nr_item + 1) {
    int VAR_14;
    int VAR_15;

    VAR_15 =
        ((VAR_14 =
          FUNC_4(VAR_4->tb_path,
         VAR_5)) ==
         FUNC_0(VAR_8)) ? 0 : VAR_14 + 1;
    VAR_14 = FUNC_11(FUNC_1(VAR_4->FR[VAR_5], VAR_15)) /
        (VAR_1 + VAR_2);
    FUNC_16(VAR_4, VAR_5, 0, -VAR_14 - 1, 0, ((void*)0), -1,
            -1);
    return VAR_0;
   }
  }





  if (VAR_4->rnum[VAR_5] + VAR_4->lnum[VAR_5] >= VAR_6->vn_nr_item + 1) {
   int VAR_16;

   VAR_16 =
       ((FUNC_2(VAR_7) << 1) + 2 - VAR_4->lnum[VAR_5] -
        VAR_4->rnum[VAR_5] + VAR_6->vn_nr_item + 1) / 2 -
       (FUNC_2(VAR_7) + 1 - VAR_4->rnum[VAR_5]);
   FUNC_16(VAR_4, VAR_5, VAR_6->vn_nr_item + 1 - VAR_16, VAR_16,
           0, ((void*)0), -1, -1);
   return VAR_0;
  }


  FUNC_16(VAR_4, VAR_5, 0, 0, 1, ((void*)0), -1, -1);
  return VAR_3;
 }






 if (VAR_4->lnum[VAR_5] >= VAR_6->vn_nr_item + 1)
  if (FUNC_15(VAR_4, VAR_5)
      || VAR_4->rnum[VAR_5] < VAR_6->vn_nr_item + 1 || !VAR_4->FR[VAR_5]) {
   int VAR_17;
   int VAR_18;

   VAR_18 =
       ((VAR_17 =
         FUNC_4(VAR_4->tb_path,
        VAR_5)) ==
        0) ? FUNC_0(VAR_4->FL[VAR_5]) : VAR_17 - 1;
   VAR_17 = FUNC_11(FUNC_1(VAR_4->FL[VAR_5], VAR_18)) / (VAR_1 +
              VAR_2);
   FUNC_16(VAR_4, VAR_5, -VAR_17 - 1, 0, 0, ((void*)0), -1, -1);
   return VAR_0;
  }


 if (VAR_4->rnum[VAR_5] >= VAR_6->vn_nr_item + 1) {
  int VAR_19;
  int VAR_20;

  VAR_20 =
      ((VAR_19 =
        FUNC_4(VAR_4->tb_path,
       VAR_5)) == FUNC_0(VAR_8)) ? 0 : (VAR_19 + 1);
  VAR_19 = FUNC_11(FUNC_1(VAR_4->FR[VAR_5], VAR_20)) / (VAR_1 +
             VAR_2);
  FUNC_16(VAR_4, VAR_5, 0, -VAR_19 - 1, 0, ((void*)0), -1, -1);
  return VAR_0;
 }


 if (VAR_4->rnum[VAR_5] + VAR_4->lnum[VAR_5] >= VAR_6->vn_nr_item + 1) {
  int VAR_21;

  VAR_21 =
      ((FUNC_2(VAR_7) << 1) + 2 - VAR_4->lnum[VAR_5] - VAR_4->rnum[VAR_5] +
       VAR_6->vn_nr_item + 1) / 2 - (FUNC_2(VAR_7) + 1 -
      VAR_4->rnum[VAR_5]);
  FUNC_16(VAR_4, VAR_5, VAR_6->vn_nr_item + 1 - VAR_21, VAR_21, 0, ((void*)0),
          -1, -1);
  return VAR_0;
 }


 FUNC_7(!VAR_4->FL[VAR_5] && !VAR_4->FR[VAR_5], "vs-8235: trying to borrow for root");


 if (FUNC_15(VAR_4, VAR_5) || !VAR_4->FR[VAR_5]) {
  int VAR_22;

  VAR_22 =
      (FUNC_2(VAR_7) + 1 - VAR_4->lnum[VAR_5] + VAR_6->vn_nr_item +
       1) / 2 - (VAR_6->vn_nr_item + 1);
  FUNC_16(VAR_4, VAR_5, -VAR_22, 0, 1, ((void*)0), -1, -1);
  return VAR_0;
 }

 FUNC_16(VAR_4, VAR_5, 0,
         -((FUNC_2(VAR_7) + 1 - VAR_4->rnum[VAR_5] + VAR_6->vn_nr_item +
     1) / 2 - (VAR_6->vn_nr_item + 1)), 1, ((void*)0), -1, -1);
 return VAR_0;
}

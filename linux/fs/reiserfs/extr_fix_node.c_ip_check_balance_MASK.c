
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_node {int vn_nr_item; int vn_mode; } ;
struct tree_balance {int* insert_size; int* rnum; int* lnum; int lbytes; int rbytes; int s0num; int tb_sb; int tb_path; struct virtual_node* tb_vn; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct buffer_head*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;
 struct buffer_head* FUNC_2 (int ,int) ;

 int FUNC_3 (int,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ,int,int,int,struct tree_balance*,int) ;
 int FUNC_5 (struct tree_balance*,int,int) ;
 int FUNC_6 (struct tree_balance*,int,int) ;
 int FUNC_7 (struct tree_balance*,int) ;
 int FUNC_8 (struct tree_balance*,int) ;
 int FUNC_9 (struct tree_balance*,int) ;
 int FUNC_10 (int ,struct tree_balance*,int,int,int,int,int,short*,int ) ;
 int FUNC_11 (struct tree_balance*,int) ;
 int FUNC_12 (struct tree_balance*,int) ;
 scalar_t__ FUNC_13 (struct tree_balance*) ;
 scalar_t__ FUNC_14 (struct tree_balance*,int) ;
 int FUNC_15 (int ,char*,char*) ;
 int FUNC_16 (struct tree_balance*,int,int,int,int,short*,int,int) ;

__attribute__((used)) static int FUNC_17(struct tree_balance *VAR_13, int VAR_14)
{
 struct virtual_node *VAR_15 = VAR_13->tb_vn;






 int VAR_16;
 int VAR_17;

 int VAR_18, VAR_19, VAR_20 ;
 int VAR_21, VAR_22, VAR_23, VAR_24;
 short VAR_25[40] = { 0, };


 struct buffer_head *VAR_26;

 VAR_26 = FUNC_2(VAR_13->tb_path, VAR_14);
 VAR_16 = VAR_13->insert_size[VAR_14];


 if (!VAR_26) {
  if (!VAR_14)
   FUNC_15(VAR_13->tb_sb, "vs-8210",
           "S[0] can not be 0");
  switch (VAR_17 = FUNC_8(VAR_13, VAR_14)) {

  case 130:
   FUNC_16(VAR_13, VAR_14, 0, 0, 1, ((void*)0), -1, -1);
   return VAR_7;

  case 129:
  case 128:
   return VAR_17;
  default:
   FUNC_15(VAR_13->tb_sb, "vs-8215", "incorrect "
           "return value of get_empty_nodes");
  }
 }


 VAR_17 = FUNC_11(VAR_13, VAR_14);
 if (VAR_17 != 130)
  return VAR_17;

 VAR_19 = FUNC_0(VAR_26);


 VAR_20 = FUNC_12(VAR_13, VAR_14);
 VAR_18 = FUNC_9(VAR_13, VAR_14);


 if (FUNC_4(VAR_15->vn_mode, VAR_18, VAR_19, VAR_20, VAR_13, VAR_14) ==
     VAR_7)
  return VAR_7;

 FUNC_7(VAR_13, VAR_14);







 FUNC_5(VAR_13, VAR_14, VAR_18);







 FUNC_6(VAR_13, VAR_14, VAR_20);





 if (VAR_14 && (VAR_13->rnum[VAR_14] + VAR_13->lnum[VAR_14] >= VAR_15->vn_nr_item + 1)) {
  int VAR_27;
  VAR_27 =
      ((FUNC_1(VAR_26) << 1) + 2 - VAR_13->lnum[VAR_14] - VAR_13->rnum[VAR_14] +
       VAR_15->vn_nr_item + 1) / 2 - (FUNC_1(VAR_26) + 1 -
      VAR_13->rnum[VAR_14]);
  FUNC_16(VAR_13, VAR_14, VAR_15->vn_nr_item + 1 - VAR_27, VAR_27, 0, ((void*)0),
          -1, -1);
  return 130;
 }





 FUNC_3(VAR_14 &&
        (VAR_13->lnum[VAR_14] >= VAR_15->vn_nr_item + 1 ||
  VAR_13->rnum[VAR_14] >= VAR_15->vn_nr_item + 1),
        "vs-8220: tree is not balanced on internal level");
 FUNC_3(!VAR_14 && ((VAR_13->lnum[VAR_14] >= VAR_15->vn_nr_item && (VAR_13->lbytes == -1)) ||
        (VAR_13->rnum[VAR_14] >= VAR_15->vn_nr_item && (VAR_13->rbytes == -1))),
        "vs-8225: tree is not balanced on leaf level");





 if (!VAR_14 && FUNC_13(VAR_13))
  return 130;
 if (VAR_19 >= VAR_16) {
  if (!VAR_14)
   VAR_13->s0num = VAR_15->vn_nr_item;
  FUNC_16(VAR_13, VAR_14, 0, 0, 1, ((void*)0), -1, -1);
  return VAR_7;
 }

 {
  int VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
  VAR_28 = VAR_13->lnum[VAR_14];
  VAR_29 = VAR_13->rnum[VAR_14];
  VAR_30 = 0;
  VAR_21 = FUNC_10(VAR_15->vn_mode, VAR_13, VAR_14,
       0, -1, VAR_14 ? VAR_15->vn_nr_item : 0, -1,
       VAR_25, 0);

  if (!VAR_14) {
   int VAR_34;





   VAR_34 = FUNC_10(VAR_15->vn_mode, VAR_13, VAR_14,
         0, -1, 0, -1,
         VAR_25 + 5, 1);
   if (VAR_21 > VAR_34)
    VAR_30 = 5, VAR_21 = VAR_34;
  }
  VAR_31 = 10;
  VAR_22 = FUNC_10(VAR_15->vn_mode, VAR_13, VAR_14,
        VAR_28 - ((VAR_14 || VAR_13->lbytes == -1) ? 0 : 1),
        -1, VAR_14 ? VAR_15->vn_nr_item : 0, -1,
        VAR_25 + 10, 0);
  if (!VAR_14) {
   int VAR_35;

   VAR_35 = FUNC_10(VAR_15->vn_mode, VAR_13, VAR_14,
          VAR_28 -
          ((VAR_13->lbytes != -1) ? 1 : 0),
          VAR_13->lbytes, 0, -1,
          VAR_25 + 15, 1);
   if (VAR_22 > VAR_35)
    VAR_31 = 15, VAR_22 = VAR_35;
  }
  VAR_32 = 20;
  VAR_23 = FUNC_10(VAR_15->vn_mode, VAR_13, VAR_14,
        0, -1,
        VAR_14 ? (VAR_15->vn_nr_item - VAR_29) : (VAR_29 -
           ((VAR_13->
             rbytes !=
             -1) ? 1 :
            0)), -1,
        VAR_25 + 20, 0);
  if (!VAR_14) {
   int VAR_36;

   VAR_36 = FUNC_10(VAR_15->vn_mode, VAR_13, VAR_14,
          0, -1,
          (VAR_29 -
           ((VAR_13->rbytes != -1) ? 1 : 0)),
          VAR_13->rbytes,
          VAR_25 + 25, 1);

   if (VAR_23 > VAR_36)
    VAR_32 = 25, VAR_23 = VAR_36;
  }
  VAR_33 = 30;
  VAR_24 = FUNC_10(VAR_15->vn_mode, VAR_13, VAR_14,
         VAR_28 - ((VAR_14 || VAR_13->lbytes == -1) ? 0 : 1),
         -1,
         VAR_14 ? (VAR_15->vn_nr_item - VAR_29) : (VAR_29 -
            ((VAR_13->
              rbytes !=
              -1) ? 1 :
             0)), -1,
         VAR_25 + 30, 0);
  if (!VAR_14) {
   int VAR_37;

   VAR_37 = FUNC_10(VAR_15->vn_mode, VAR_13, VAR_14,
           VAR_28 -
           ((VAR_13->lbytes != -1) ? 1 : 0),
           VAR_13->lbytes,
           (VAR_29 -
            ((VAR_13->rbytes != -1) ? 1 : 0)),
           VAR_13->rbytes,
           VAR_25 + 35, 1);
   if (VAR_24 > VAR_37)
    VAR_33 = 35, VAR_24 = VAR_37;
  }
  if (VAR_24 < VAR_22 && VAR_24 < VAR_23) {
   FUNC_3(VAR_14 &&
          (VAR_13->lnum[VAR_14] != 1 ||
    VAR_13->rnum[VAR_14] != 1 ||
    VAR_24 != 1 || VAR_23 != 2 || VAR_22 != 2
    || VAR_14 != 1), "vs-8230: bad h");
   if (VAR_33 == 35)
    FUNC_16(VAR_13, VAR_14, VAR_13->lnum[VAR_14], VAR_13->rnum[VAR_14],
            VAR_24, VAR_25 + VAR_33,
            VAR_13->lbytes, VAR_13->rbytes);
   else
    FUNC_16(VAR_13, VAR_14,
            VAR_13->lnum[VAR_14] -
            ((VAR_13->lbytes == -1) ? 0 : 1),
            VAR_13->rnum[VAR_14] -
            ((VAR_13->rbytes == -1) ? 0 : 1),
            VAR_24, VAR_25 + VAR_33, -1, -1);

   return 130;
  }





  if (VAR_21 == VAR_24) {
   FUNC_16(VAR_13, VAR_14, 0, 0, VAR_21, VAR_25 + VAR_30, -1,
           -1);
   return 130;
  }
  if (VAR_22 < VAR_23) {
   VAR_11;
   return 130;
  }





  if (VAR_22 > VAR_23) {
   VAR_12;
   return 130;
  }





  if (FUNC_14(VAR_13, VAR_14)) {
   VAR_11;
   return 130;
  }





  VAR_12;
  return 130;
 }
}

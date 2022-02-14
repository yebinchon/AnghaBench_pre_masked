
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtual_node {int vn_nr_item; struct virtual_item* vn_vi; } ;
struct virtual_item {int vi_item_len; scalar_t__ vi_index; int vi_ih; } ;
struct tree_balance {scalar_t__* insert_size; int tb_sb; int tb_path; struct virtual_node* tb_vn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct virtual_item*,int,int,int) ;
 scalar_t__ FUNC_5 (struct virtual_item*,int,int) ;
 short FUNC_6 (struct virtual_item*) ;
 int FUNC_7 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_8(int VAR_7, struct tree_balance *VAR_8, int VAR_9,
         int VAR_10, int VAR_11,
         int VAR_12, int VAR_13, short *VAR_14, int VAR_15)
{
 int VAR_16;
 int VAR_17;
 struct virtual_node *VAR_18 = VAR_8->tb_vn;
 int VAR_19, VAR_20, VAR_21;
 int VAR_22;


 int VAR_23;


 int VAR_24;





 int VAR_25;





 int VAR_26;





 int VAR_27[2];

 VAR_27[0] = -1;
 VAR_27[1] = -1;







 FUNC_2(VAR_8->insert_size[VAR_9] < 0 || (VAR_7 != VAR_3 && VAR_7 != VAR_4),
        "vs-8100: insert_size < 0 in overflow");

 VAR_20 = FUNC_0(FUNC_1(VAR_8->tb_path, VAR_9));





 VAR_14[3] = -1;
 VAR_14[4] = -1;


 if (VAR_9 > 0) {
  VAR_16 = ((VAR_12 - VAR_10) * (VAR_2 + VAR_0) + VAR_0);
  if (VAR_16 == VAR_20)
   return 1;
  return (VAR_16 / VAR_20 + 1);
 }


 VAR_22 = 1;
 VAR_19 = 0;


 VAR_23 = VAR_10;

 VAR_25 = ((VAR_11 != -1) ? VAR_11 : 0);


 VAR_24 = VAR_18->vn_nr_item - VAR_12 - 1;

 VAR_26 = (VAR_13 != -1) ? VAR_13 : 0;







 for (VAR_16 = VAR_23; VAR_16 <= VAR_24; VAR_16++) {
  struct virtual_item *VAR_28 = VAR_18->vn_vi + VAR_16;
  int VAR_29 = ((VAR_16 == VAR_24) ? VAR_26 : 0);

  FUNC_2(VAR_22 > 3, "vs-8105: too many nodes are needed");


  VAR_21 = VAR_28->vi_item_len;





  VAR_21 -=
      FUNC_5(VAR_28, 0 , VAR_25);


  VAR_21 -=
      FUNC_5(VAR_28, 1 , VAR_29);


  if (VAR_19 + VAR_21 <= VAR_20) {
   VAR_14[VAR_22 - 1]++;
   VAR_19 += VAR_21;
   VAR_25 = 0;
   continue;
  }





  if (VAR_21 > VAR_20) {
   FUNC_2(FUNC_3(VAR_28->vi_ih),
          "vs-8110: "
          "direct item length is %d. It can not be longer than %d",
          VAR_21, VAR_20);

   VAR_15 = 1;
  }


  if (!VAR_15) {
   VAR_22++;
   VAR_16--;
   VAR_19 = 0;
   continue;
  }





  {
   int VAR_30;

   VAR_30 = VAR_20 - VAR_19 - VAR_1;
   VAR_17 =
       FUNC_4(VAR_28, VAR_30, VAR_25,
       VAR_29);




   if (VAR_17 == -1) {
    VAR_22++, VAR_16--, VAR_19 = 0;
    continue;
   }
  }


  VAR_25 += VAR_17;
  VAR_14[VAR_22 - 1 + 3] = VAR_17;

  if (VAR_22 > 2)
   FUNC_7(VAR_8->tb_sb, "vs-8111",
      "split_item_position is out of range");
  VAR_14[VAR_22 - 1]++;
  VAR_27[VAR_22 - 1] = VAR_16;
  VAR_22++;

  VAR_23 = VAR_16;
  VAR_16--;
  VAR_19 = 0;
 }






 if (VAR_14[4] > 0) {
  int VAR_31;
  int VAR_32, VAR_33;
  int VAR_34;

  VAR_31 = VAR_27[1];
  VAR_33 =
      ((VAR_10 == VAR_31
        && VAR_11 != -1) ? VAR_11 : 0);
  VAR_32 =
      ((VAR_24 == VAR_31
        && VAR_26 != -1) ? VAR_26 : 0);
  VAR_34 =
      ((VAR_27[0] ==
        VAR_27[1]) ? VAR_14[3] : 0);


  VAR_14[4] =
      FUNC_6(&VAR_18->vn_vi[VAR_31]) - VAR_14[4] -
      VAR_32 - VAR_33 - VAR_34;

  if (VAR_18->vn_vi[VAR_31].vi_index != VAR_5 &&
      VAR_18->vn_vi[VAR_31].vi_index != VAR_6)
   FUNC_7(VAR_8->tb_sb, "vs-8115",
      "not directory or indirect item");
 }


 if (VAR_14[3] > 0) {
  int VAR_35;
  int VAR_36, VAR_37;
  int VAR_38;

  VAR_35 = VAR_27[0];
  VAR_37 =
      ((VAR_10 == VAR_35
        && VAR_11 != -1) ? VAR_11 : 0);
  VAR_36 =
      ((VAR_24 == VAR_35
        && VAR_26 != -1) ? VAR_26 : 0);
  VAR_38 =
      ((VAR_27[0] == VAR_27[1]
        && VAR_14[4] != -1) ? VAR_14[4] : 0);


  VAR_14[3] =
      FUNC_6(&VAR_18->vn_vi[VAR_35]) - VAR_14[3] -
      VAR_36 - VAR_37 - VAR_38;
 }

 return VAR_22;
}

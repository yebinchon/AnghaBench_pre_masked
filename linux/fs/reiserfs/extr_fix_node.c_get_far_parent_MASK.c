
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct treepath {int dummy; } ;
struct tree_balance {int* lkey; int* rkey; int tb_sb; struct treepath* tb_path; } ;
struct cpu_key {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; } ;
struct TYPE_6__ {int path_length; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct tree_balance*) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_1__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char VAR_5 ;
 int FUNC_6 (struct treepath*,int) ;
 struct buffer_head* FUNC_7 (struct treepath*,int) ;
 int FUNC_8 (struct treepath*,int) ;
 struct buffer_head* FUNC_9 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_10 (int,char*,...) ;
 char VAR_7 ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (struct buffer_head*) ;
 scalar_t__ FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct cpu_key*) ;
 int FUNC_16 (struct buffer_head*) ;
 int FUNC_17 (struct buffer_head*,int) ;
 int FUNC_18 (struct cpu_key*,int ) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (int ,int) ;
 int FUNC_21 (int ) ;
 TYPE_1__ VAR_8 ;
 scalar_t__ FUNC_22 (int ,struct cpu_key*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_23(struct tree_balance *VAR_9,
     int VAR_10,
     struct buffer_head **VAR_11,
     struct buffer_head **VAR_12, char VAR_13)
{
 struct buffer_head *VAR_14;
 FUNC_5(VAR_8);
 struct treepath *VAR_15 = VAR_9->tb_path;
 struct cpu_key VAR_16;
 int VAR_17,
     VAR_18 = VAR_3,
     VAR_19 = 0,
     VAR_20 = FUNC_6(VAR_15, VAR_10);






 VAR_17 = VAR_20;

 FUNC_10(VAR_17 < VAR_2,
        "PAP-8180: invalid path length");

 for (; VAR_17 > VAR_2; VAR_17--) {




  if (!FUNC_0
      (VAR_14 = FUNC_7(VAR_15, VAR_17 - 1)))
   return VAR_6;


  if ((VAR_18 =
       FUNC_8(VAR_15,
       VAR_17 - 1)) >
      FUNC_2(VAR_14))
   return VAR_6;





  if (FUNC_3(VAR_14, VAR_18) !=
      FUNC_7(VAR_15, VAR_17)->b_blocknr)
   return VAR_6;





  if (VAR_13 == VAR_7)
   VAR_19 = FUNC_2(VAR_14);
  if (VAR_18 != VAR_19) {
   *VAR_12 = VAR_14;
   FUNC_16(*VAR_12);

   break;
  }
 }


 if (VAR_17 == VAR_2) {




  if (FUNC_7
      (VAR_9->tb_path,
       VAR_2)->b_blocknr ==
      FUNC_11(VAR_9->tb_sb)) {
   *VAR_11 = *VAR_12 = ((void*)0);
   return VAR_0;
  }
  return VAR_6;
 }

 FUNC_10(FUNC_1(*VAR_12) <= VAR_1,
        "PAP-8185: (%b %z) level too small",
        *VAR_12, *VAR_12);



 if (FUNC_14(*VAR_12)) {


  int VAR_21 = FUNC_21(VAR_9->tb_sb);
  FUNC_12(*VAR_12);
  FUNC_20(VAR_9->tb_sb, VAR_21);
  if (FUNC_4(VAR_9)) {
   FUNC_13(*VAR_12);
   return VAR_6;
  }
 }
 FUNC_18(&VAR_16,
         FUNC_17(*VAR_12,
          (VAR_13 ==
           VAR_5) ? (VAR_9->lkey[VAR_10 - 1] =
       VAR_18 -
       1) : (VAR_9->rkey[VAR_10 -
            1] =
             VAR_18)));

 if (VAR_13 == VAR_5)
  FUNC_15(&VAR_16);

 if (FUNC_22
     (VAR_9->tb_sb, &VAR_16, &VAR_8,
      VAR_10 + 1) == VAR_4)

  return VAR_4;

 if (FUNC_4(VAR_9)) {
  FUNC_19(&VAR_8);
  FUNC_13(*VAR_12);
  return VAR_6;
 }

 *VAR_11 = FUNC_9(&VAR_8);

 FUNC_10(FUNC_1(*VAR_11) != VAR_10 + 1,
        "PAP-8190: (%b %z) level too small", *VAR_11, *VAR_11);
 FUNC_10(VAR_8.path_length <
        VAR_2, "PAP-8192: path length is too small");

 VAR_8.path_length--;
 FUNC_19(&VAR_8);
 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct treepath {int dummy; } ;
struct tree_balance {int* lkey; int* rkey; struct buffer_head** CFR; struct buffer_head** FR; struct buffer_head** CFL; struct buffer_head** FL; struct treepath* tb_path; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct treepath*,int) ;
 int FUNC_3 (struct treepath*,int) ;
 struct buffer_head* FUNC_4 (struct treepath*,int) ;
 int FUNC_5 (struct treepath*,int) ;
 int FUNC_6 (int,char*,struct buffer_head*,struct buffer_head*) ;
 int VAR_3 ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct tree_balance*,int,struct buffer_head**,struct buffer_head**,int ) ;

__attribute__((used)) static int FUNC_10(struct tree_balance *VAR_4, int VAR_5)
{
 struct treepath *VAR_6 = VAR_4->tb_path;
 int VAR_7,
     VAR_8,
     VAR_9 = FUNC_2(VAR_4->tb_path, VAR_5);
 struct buffer_head *VAR_10, *VAR_11;


 if (VAR_9 <= VAR_1) {





  FUNC_7(VAR_4->FL[VAR_5]);
  FUNC_7(VAR_4->CFL[VAR_5]);
  FUNC_7(VAR_4->FR[VAR_5]);
  FUNC_7(VAR_4->CFR[VAR_5]);
  VAR_4->FL[VAR_5] = ((void*)0);
  VAR_4->CFL[VAR_5] = ((void*)0);
  VAR_4->FR[VAR_5] = ((void*)0);
  VAR_4->CFR[VAR_5] = ((void*)0);
  return VAR_0;
 }


 VAR_7 = FUNC_5(VAR_6, VAR_9 - 1);
 if (VAR_7) {

  VAR_10 = FUNC_4(VAR_6, VAR_9 - 1);
  VAR_11 = FUNC_4(VAR_6, VAR_9 - 1);
  FUNC_8(VAR_10);
  FUNC_8(VAR_10);
  VAR_4->lkey[VAR_5] = VAR_7 - 1;
 } else {
  if ((VAR_8 = FUNC_9(VAR_4, VAR_5 + 1, &VAR_10,
        &VAR_11,
        VAR_2)) != VAR_0)
   return VAR_8;
 }

 FUNC_7(VAR_4->FL[VAR_5]);
 VAR_4->FL[VAR_5] = VAR_10;
 FUNC_7(VAR_4->CFL[VAR_5]);
 VAR_4->CFL[VAR_5] = VAR_11;

 FUNC_6((VAR_10 && !FUNC_0(VAR_10)) ||
        (VAR_11 && !FUNC_0(VAR_11)),
        "PAP-8195: FL (%b) or CFL (%b) is invalid", VAR_10, VAR_11);




 if (VAR_7 == FUNC_1(FUNC_3(VAR_6, VAR_5 + 1))) {






  if ((VAR_8 =
       FUNC_9(VAR_4, VAR_5 + 1, &VAR_10, &VAR_11,
        VAR_3)) != VAR_0)
   return VAR_8;
 } else {

  VAR_10 = FUNC_4(VAR_6, VAR_9 - 1);
  VAR_11 = FUNC_4(VAR_6, VAR_9 - 1);
  FUNC_8(VAR_10);
  FUNC_8(VAR_10);
  VAR_4->rkey[VAR_5] = VAR_7;
 }

 FUNC_7(VAR_4->FR[VAR_5]);

 VAR_4->FR[VAR_5] = VAR_10;

 FUNC_7(VAR_4->CFR[VAR_5]);

 VAR_4->CFR[VAR_5] = VAR_11;

 FUNC_6((VAR_10 && !FUNC_0(VAR_10)) ||
        (VAR_11 && !FUNC_0(VAR_11)),
        "PAP-8205: FR (%b) or CFR (%b) is invalid", VAR_10, VAR_11);

 return VAR_0;
}

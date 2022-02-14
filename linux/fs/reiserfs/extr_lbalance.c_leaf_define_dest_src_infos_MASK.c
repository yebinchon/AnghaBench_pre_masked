
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int tb_path; int ** FR; struct buffer_head** R; int ** FL; struct buffer_head** L; } ;
struct buffer_info {struct buffer_head* bi_bh; void* bi_position; int * bi_parent; struct tree_balance* tb; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;





 void* FUNC_0 (int ,int ) ;
 void* FUNC_1 (int ,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int,struct buffer_head*,struct buffer_head*) ;
 void* FUNC_4 (struct tree_balance*,int ) ;
 void* FUNC_5 (struct tree_balance*,int ) ;
 int FUNC_6 (struct buffer_info*,int ,int) ;
 int FUNC_7 (int ,char*,char*,int) ;
 int FUNC_8 (struct buffer_info*) ;

__attribute__((used)) static void FUNC_9(int VAR_2, struct tree_balance *VAR_3,
           struct buffer_info *VAR_4,
           struct buffer_info *VAR_5,
           int *VAR_6,
           struct buffer_head *VAR_7)
{
 FUNC_6(VAR_4, 0, sizeof(struct buffer_info));
 FUNC_6(VAR_5, 0, sizeof(struct buffer_info));


 switch (VAR_2) {
 case 130:
  VAR_5->tb = VAR_3;
  VAR_5->bi_bh = FUNC_2(VAR_3->tb_path);
  VAR_5->bi_parent = FUNC_1(VAR_3->tb_path, 0);


  VAR_5->bi_position = FUNC_0(VAR_3->tb_path, 0);
  VAR_4->tb = VAR_3;
  VAR_4->bi_bh = VAR_3->L[0];
  VAR_4->bi_parent = VAR_3->FL[0];
  VAR_4->bi_position = FUNC_4(VAR_3, 0);
  *VAR_6 = VAR_0;
  break;

 case 129:
  VAR_5->tb = VAR_3;
  VAR_5->bi_bh = FUNC_2(VAR_3->tb_path);
  VAR_5->bi_parent = FUNC_1(VAR_3->tb_path, 0);
  VAR_5->bi_position = FUNC_0(VAR_3->tb_path, 0);
  VAR_4->tb = VAR_3;
  VAR_4->bi_bh = VAR_3->R[0];
  VAR_4->bi_parent = VAR_3->FR[0];
  VAR_4->bi_position = FUNC_5(VAR_3, 0);
  *VAR_6 = VAR_1;
  break;

 case 131:
  VAR_5->tb = VAR_3;
  VAR_5->bi_bh = VAR_3->R[0];
  VAR_5->bi_parent = VAR_3->FR[0];
  VAR_5->bi_position = FUNC_5(VAR_3, 0);
  VAR_4->tb = VAR_3;
  VAR_4->bi_bh = VAR_3->L[0];
  VAR_4->bi_parent = VAR_3->FL[0];
  VAR_4->bi_position = FUNC_4(VAR_3, 0);
  *VAR_6 = VAR_0;
  break;

 case 132:
  VAR_5->tb = VAR_3;
  VAR_5->bi_bh = VAR_3->L[0];
  VAR_5->bi_parent = VAR_3->FL[0];
  VAR_5->bi_position = FUNC_4(VAR_3, 0);
  VAR_4->tb = VAR_3;
  VAR_4->bi_bh = VAR_3->R[0];
  VAR_4->bi_parent = VAR_3->FR[0];
  VAR_4->bi_position = FUNC_5(VAR_3, 0);
  *VAR_6 = VAR_1;
  break;

 case 128:
  VAR_5->tb = VAR_3;
  VAR_5->bi_bh = FUNC_2(VAR_3->tb_path);
  VAR_5->bi_parent = FUNC_1(VAR_3->tb_path, 0);
  VAR_5->bi_position = FUNC_0(VAR_3->tb_path, 0);
  VAR_4->tb = VAR_3;
  VAR_4->bi_bh = VAR_7;
  VAR_4->bi_parent = ((void*)0);
  VAR_4->bi_position = 0;
  *VAR_6 = VAR_1;
  break;

 default:
  FUNC_7(FUNC_8(VAR_5), "vs-10250",
          "shift type is unknown (%d)", VAR_2);
 }
 FUNC_3(!VAR_5->bi_bh || !VAR_4->bi_bh,
        "vs-10260: mode==%d, source (%p) or dest (%p) buffer is initialized incorrectly",
        VAR_2, VAR_5->bi_bh, VAR_4->bi_bh);
}

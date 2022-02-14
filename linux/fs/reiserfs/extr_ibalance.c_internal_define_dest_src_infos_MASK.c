
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_balance {int* lkey; int* rkey; int tb_sb; void** FR; void** R; int tb_path; void** FL; void** L; struct buffer_head** CFR; struct buffer_head** CFL; } ;
struct buffer_info {void* bi_position; void* bi_parent; void* bi_bh; struct tree_balance* tb; } ;
struct buffer_head {int dummy; } ;
 void* FUNC_0 (int ,int) ;
 void* FUNC_1 (int ,int) ;
 void* FUNC_2 (int ,int) ;
 void* FUNC_3 (struct tree_balance*,int) ;
 void* FUNC_4 (struct tree_balance*,int) ;
 int FUNC_5 (struct buffer_info*,int ,int) ;
 int FUNC_6 (int ,char*,char*,int) ;

__attribute__((used)) static void FUNC_7(int VAR_0,
        struct tree_balance *VAR_1,
        int VAR_2,
        struct buffer_info *VAR_3,
        struct buffer_info *VAR_4,
        int *VAR_5, struct buffer_head **VAR_6)
{
 FUNC_5(VAR_3, 0, sizeof(struct buffer_info));
 FUNC_5(VAR_4, 0, sizeof(struct buffer_info));

 switch (VAR_0) {


 case 129:
  VAR_4->tb = VAR_1;
  VAR_4->bi_bh = FUNC_0(VAR_1->tb_path, VAR_2);
  VAR_4->bi_parent = FUNC_2(VAR_1->tb_path, VAR_2);
  VAR_4->bi_position = FUNC_1(VAR_1->tb_path, VAR_2 + 1);
  VAR_3->tb = VAR_1;
  VAR_3->bi_bh = VAR_1->L[VAR_2];
  VAR_3->bi_parent = VAR_1->FL[VAR_2];
  VAR_3->bi_position = FUNC_3(VAR_1, VAR_2);
  *VAR_5 = VAR_1->lkey[VAR_2];
  *VAR_6 = VAR_1->CFL[VAR_2];
  break;
 case 131:
  VAR_4->tb = VAR_1;
  VAR_4->bi_bh = VAR_1->L[VAR_2];
  VAR_4->bi_parent = VAR_1->FL[VAR_2];
  VAR_4->bi_position = FUNC_3(VAR_1, VAR_2);
  VAR_3->tb = VAR_1;
  VAR_3->bi_bh = FUNC_0(VAR_1->tb_path, VAR_2);
  VAR_3->bi_parent = FUNC_2(VAR_1->tb_path, VAR_2);

  VAR_3->bi_position = FUNC_1(VAR_1->tb_path, VAR_2 + 1);
  *VAR_5 = VAR_1->lkey[VAR_2];
  *VAR_6 = VAR_1->CFL[VAR_2];
  break;


 case 130:
  VAR_4->tb = VAR_1;
  VAR_4->bi_bh = VAR_1->R[VAR_2];
  VAR_4->bi_parent = VAR_1->FR[VAR_2];
  VAR_4->bi_position = FUNC_4(VAR_1, VAR_2);
  VAR_3->tb = VAR_1;
  VAR_3->bi_bh = FUNC_0(VAR_1->tb_path, VAR_2);
  VAR_3->bi_parent = FUNC_2(VAR_1->tb_path, VAR_2);
  VAR_3->bi_position = FUNC_1(VAR_1->tb_path, VAR_2 + 1);
  *VAR_5 = VAR_1->rkey[VAR_2];
  *VAR_6 = VAR_1->CFR[VAR_2];
  break;

 case 128:
  VAR_4->tb = VAR_1;
  VAR_4->bi_bh = FUNC_0(VAR_1->tb_path, VAR_2);
  VAR_4->bi_parent = FUNC_2(VAR_1->tb_path, VAR_2);
  VAR_4->bi_position = FUNC_1(VAR_1->tb_path, VAR_2 + 1);
  VAR_3->tb = VAR_1;
  VAR_3->bi_bh = VAR_1->R[VAR_2];
  VAR_3->bi_parent = VAR_1->FR[VAR_2];
  VAR_3->bi_position = FUNC_4(VAR_1, VAR_2);
  *VAR_5 = VAR_1->rkey[VAR_2];
  *VAR_6 = VAR_1->CFR[VAR_2];
  break;

 case 134:
  VAR_3->tb = VAR_1;
  VAR_3->bi_bh = VAR_1->L[VAR_2];
  VAR_3->bi_parent = VAR_1->FL[VAR_2];
  VAR_3->bi_position = FUNC_3(VAR_1, VAR_2);
  break;

 case 132:
  VAR_3->tb = VAR_1;
  VAR_3->bi_bh = FUNC_0(VAR_1->tb_path, VAR_2);
  VAR_3->bi_parent = FUNC_2(VAR_1->tb_path, VAR_2);
  VAR_3->bi_position = FUNC_1(VAR_1->tb_path, VAR_2 + 1);
  break;

 case 133:
  VAR_3->tb = VAR_1;
  VAR_3->bi_bh = VAR_1->R[VAR_2];
  VAR_3->bi_parent = VAR_1->FR[VAR_2];
  VAR_3->bi_position = FUNC_4(VAR_1, VAR_2);
  break;

 default:
  FUNC_6(VAR_1->tb_sb, "ibalance-1",
          "shift type is unknown (%d)",
          VAR_0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tree_balance {int* insert_size; int * lkey; scalar_t__* CFL; TYPE_1__* tb_path; } ;
struct item_head {int dummy; } ;
struct buffer_info {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_3__ {int pos_in_item; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct buffer_head* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (struct tree_balance*,struct buffer_info*) ;
 int FUNC_4 (struct item_head*) ;
 scalar_t__ FUNC_5 (struct item_head*) ;
 struct item_head* FUNC_6 (struct buffer_head*,int) ;
 int FUNC_7 (struct buffer_info*,int,int,int) ;
 int FUNC_8 (struct tree_balance*,scalar_t__,int ,struct buffer_head*,int ) ;

__attribute__((used)) static void FUNC_9(struct tree_balance *VAR_0)
{
 struct buffer_head *VAR_1 = FUNC_1(VAR_0->tb_path);
 int VAR_2 = FUNC_0(VAR_0->tb_path);
 struct item_head *VAR_3 = FUNC_6(VAR_1, VAR_2);
 int VAR_4 = VAR_0->tb_path->pos_in_item;
 struct buffer_info VAR_5;
 FUNC_3(VAR_0, &VAR_5);

 if (FUNC_5(VAR_3)) {







  VAR_0->insert_size[0] = -1;
  FUNC_7(&VAR_5, VAR_2, VAR_4,
         -VAR_0->insert_size[0]);

  FUNC_2(!VAR_2 && !VAR_4 && !VAR_0->CFL[0],
         "PAP-12030: can not change delimiting key. CFL[0]=%p",
         VAR_0->CFL[0]);

  if (!VAR_2 && !VAR_4 && VAR_0->CFL[0])
   FUNC_8(VAR_0, VAR_0->CFL[0], VAR_0->lkey[0], VAR_1, 0);
 } else {
  FUNC_7(&VAR_5, VAR_2, VAR_4,
         -VAR_0->insert_size[0]);

  FUNC_2(!FUNC_4(VAR_3),
         "PAP-12035: cut must leave non-zero dynamic "
         "length of item");
 }
}

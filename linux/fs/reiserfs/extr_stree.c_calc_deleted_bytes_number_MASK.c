
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree_balance {int* insert_size; int tb_path; } ;
struct item_head {int dummy; } ;
struct TYPE_2__ {int b_size; } ;


 char VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct item_head*) ;
 scalar_t__ FUNC_2 (struct item_head*) ;
 scalar_t__ FUNC_3 (struct item_head*) ;
 scalar_t__ FUNC_4 (struct item_head*) ;
 struct item_head* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct tree_balance *VAR_2, char VAR_3)
{
 int VAR_4;
 struct item_head *VAR_5 = FUNC_5(VAR_2->tb_path);

 if (FUNC_4(VAR_5))
  return 0;

 VAR_4 =
     (VAR_3 ==
      VAR_0) ? FUNC_1(VAR_5) : -VAR_2->insert_size[0];
 if (FUNC_2(VAR_5)) {





  return VAR_4;
 }

 if (FUNC_3(VAR_5))
  VAR_4 = (VAR_4 / VAR_1) *
    (FUNC_0(VAR_2->tb_path)->b_size);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_dev {int dummy; } ;
struct qede_arfs_fltr_node {int fw_rc; scalar_t__ used; } ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct qede_dev*,struct qede_arfs_fltr_node*) ;

__attribute__((used)) static int
FUNC_3(struct qede_dev *VAR_2,
        struct qede_arfs_fltr_node *VAR_3)
{
 int VAR_4 = VAR_1;

 while (VAR_3->used && VAR_4) {
  FUNC_1(20);
  VAR_4--;
 }

 if (VAR_4 == 0 || VAR_3->fw_rc) {
  FUNC_0(VAR_2, "Timeout in polling filter config\n");
  FUNC_2(VAR_2, VAR_3);
  return -VAR_0;
 }

 return VAR_3->fw_rc;
}

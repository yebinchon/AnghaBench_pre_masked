
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_dev {int ndev; int flags; } ;
struct qed_link_output {scalar_t__ link_up; } ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int FUNC_1 (struct qede_dev*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct qede_dev*) ;
 int FUNC_8 (struct qede_dev*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(void *VAR_2, struct qed_link_output *VAR_3)
{
 struct qede_dev *VAR_4 = VAR_2;

 if (!FUNC_9(VAR_1, &VAR_4->flags)) {
  FUNC_1(VAR_4, VAR_0, "Interface is not ready\n");
  return;
 }

 if (VAR_3->link_up) {
  if (!FUNC_3(VAR_4->ndev)) {
   FUNC_0(VAR_4, "Link is up\n");
   FUNC_6(VAR_4->ndev);
   FUNC_4(VAR_4->ndev);
   FUNC_8(VAR_4);
  }
 } else {
  if (FUNC_3(VAR_4->ndev)) {
   FUNC_0(VAR_4, "Link is down\n");
   FUNC_5(VAR_4->ndev);
   FUNC_2(VAR_4->ndev);
   FUNC_7(VAR_4);
  }
 }
}

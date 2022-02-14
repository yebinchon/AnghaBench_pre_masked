
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_dev {int dl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct qed_dev *VAR_1)
{
 if (!VAR_1->dl)
  return;

 FUNC_2(VAR_1->dl, VAR_0,
      FUNC_0(VAR_0));

 FUNC_3(VAR_1->dl);
 FUNC_1(VAR_1->dl);
}

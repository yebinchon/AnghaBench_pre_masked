
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_dev {int num_hwfns; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct qed_dev*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct qed_dev *VAR_1)
{
 int VAR_2;

 if (VAR_1->num_hwfns > 1)
  VAR_2 = FUNC_0(FUNC_1(VAR_1), VAR_0);
 else
  VAR_2 = FUNC_0(FUNC_1(VAR_1), VAR_0) *
      VAR_1->num_hwfns;

 return VAR_2;
}

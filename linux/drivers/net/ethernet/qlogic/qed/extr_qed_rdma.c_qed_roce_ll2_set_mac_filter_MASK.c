
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_dev {int dummy; } ;


 int FUNC_0 (struct qed_dev*,char*) ;
 int FUNC_1 (struct qed_dev*,int ,int *) ;
 int FUNC_2 (struct qed_dev*,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct qed_dev *VAR_0,
           u8 *VAR_1,
           u8 *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1)
  FUNC_2(VAR_0, 0, VAR_1);
 if (VAR_2)
  VAR_3 = FUNC_1(VAR_0, 0, VAR_2);

 if (VAR_3)
  FUNC_0(VAR_0,
         "qed roce ll2 mac filter set: failed to add MAC filter\n");

 return VAR_3;
}

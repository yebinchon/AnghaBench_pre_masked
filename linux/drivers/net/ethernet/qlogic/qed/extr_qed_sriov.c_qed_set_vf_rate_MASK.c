
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qed_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_dev*,int,scalar_t__) ;
 int FUNC_1 (struct qed_dev*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct qed_dev *VAR_1,
      int VAR_2, u32 VAR_3, u32 VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0;

 if (VAR_4)
  VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_4);

 if (VAR_3)
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);

 if (VAR_6 | VAR_5)
  return -VAR_0;

 return 0;
}

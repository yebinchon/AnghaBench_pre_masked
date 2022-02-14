
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_cec_dev {int dev; } ;
struct cec_adapter {int dummy; } ;


 struct s5p_cec_dev* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct s5p_cec_dev*) ;
 int FUNC_4 (struct s5p_cec_dev*) ;
 int FUNC_5 (struct s5p_cec_dev*) ;
 int FUNC_6 (struct s5p_cec_dev*) ;
 int FUNC_7 (struct s5p_cec_dev*) ;
 int FUNC_8 (struct s5p_cec_dev*) ;
 int FUNC_9 (struct s5p_cec_dev*) ;
 int FUNC_10 (struct s5p_cec_dev*) ;

__attribute__((used)) static int FUNC_11(struct cec_adapter *VAR_0, bool VAR_1)
{
 struct s5p_cec_dev *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1) {
  FUNC_2(VAR_2->dev);

  FUNC_6(VAR_2);

  FUNC_7(VAR_2);
  FUNC_8(VAR_2);

  FUNC_10(VAR_2);
  FUNC_9(VAR_2);
  FUNC_3(VAR_2);
 } else {
  FUNC_5(VAR_2);
  FUNC_4(VAR_2);
  FUNC_1(VAR_2->dev);
 }

 return 0;
}

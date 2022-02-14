
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct s5p_cec_dev {int dummy; } ;
struct cec_msg {int len; int msg; } ;
struct cec_adapter {int dummy; } ;


 struct s5p_cec_dev* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct s5p_cec_dev*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct cec_adapter *VAR_0, u8 VAR_1,
     u32 VAR_2, struct cec_msg *VAR_3)
{
 struct s5p_cec_dev *VAR_4 = FUNC_0(VAR_0);





 FUNC_2(VAR_4, VAR_3->msg, VAR_3->len, FUNC_1(1, VAR_1 - 1));
 return 0;
}

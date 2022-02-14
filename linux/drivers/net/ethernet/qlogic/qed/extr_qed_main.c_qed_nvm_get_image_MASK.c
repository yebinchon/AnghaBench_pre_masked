
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {int dummy; } ;
typedef enum qed_nvm_images { ____Placeholder_qed_nvm_images } qed_nvm_images ;


 struct qed_hwfn* FUNC_0 (struct qed_dev*) ;
 int FUNC_1 (struct qed_hwfn*,int,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct qed_dev *VAR_0, enum qed_nvm_images VAR_1,
        u8 *VAR_2, u16 VAR_3)
{
 struct qed_hwfn *VAR_4 = FUNC_0(VAR_0);

 return FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3);
}

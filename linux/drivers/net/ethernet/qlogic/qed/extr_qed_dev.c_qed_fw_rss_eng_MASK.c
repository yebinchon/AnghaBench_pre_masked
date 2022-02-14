
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct qed_hwfn*,int ) ;
 scalar_t__ FUNC_2 (struct qed_hwfn*,int ) ;

int FUNC_3(struct qed_hwfn *VAR_2, u8 VAR_3, u8 *VAR_4)
{
 if (VAR_3 >= FUNC_1(VAR_2, VAR_1)) {
  u8 VAR_5, VAR_6;

  VAR_5 = (u8)FUNC_2(VAR_2, VAR_1);
  VAR_6 = VAR_5 + FUNC_1(VAR_2, VAR_1);
  FUNC_0(VAR_2,
     "rss_eng id [%d] is not valid, available indices [%d - %d]\n",
     VAR_3, VAR_5, VAR_6);

  return -VAR_0;
 }

 *VAR_4 = FUNC_2(VAR_2, VAR_1) + VAR_3;

 return 0;
}

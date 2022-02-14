
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct qed_hwfn {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct qed_hwfn *VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = FUNC_0(VAR_1, VAR_3);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}

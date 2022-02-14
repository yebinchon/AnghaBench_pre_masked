
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct qed_hwfn*,int ) ;
 scalar_t__ FUNC_1 (struct qed_hwfn*) ;

u16 FUNC_2(struct qed_hwfn *VAR_2, u8 VAR_3)
{
 u16 VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 VAR_5 = (VAR_3 < FUNC_1(VAR_2)) ?
      VAR_3 : VAR_1;

 return VAR_4 + VAR_5;
}

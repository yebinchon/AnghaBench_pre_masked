
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qed_hwfn {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qed_hwfn*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct qed_hwfn*) ;
 int VAR_3 ;

__attribute__((used)) static u16 FUNC_3(struct qed_hwfn *VAR_4)
{
 u16 VAR_5, VAR_6 = FUNC_2(VAR_4);


 VAR_5 = (u16) FUNC_1(VAR_3, FUNC_0(VAR_4, VAR_1),
     FUNC_0(VAR_4, VAR_2));


 if (VAR_5 < VAR_6 + VAR_0)
  return 0;


 VAR_5 -= VAR_6 + VAR_0;

 return VAR_5;
}

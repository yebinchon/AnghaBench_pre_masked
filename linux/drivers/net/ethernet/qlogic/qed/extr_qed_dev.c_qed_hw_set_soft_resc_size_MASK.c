
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int cdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

 int FUNC_0 (int ) ;

 int VAR_5 ;


 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int
FUNC_2(struct qed_hwfn *VAR_8, struct qed_ptt *VAR_9)
{
 bool VAR_10 = FUNC_0(VAR_8->cdev);
 u32 VAR_11, VAR_12;
 u8 VAR_13;
 int VAR_14;

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  switch (VAR_13) {
  case 130:
   VAR_11 = VAR_3;
   break;
  case 129:



   VAR_11 = VAR_4;
   break;
  case 128:
   VAR_11 = VAR_10 ? VAR_7
       : VAR_6;
   break;
  case 131:
   VAR_11 = VAR_0;
   break;
  default:
   continue;
  }

  VAR_14 = FUNC_1(VAR_8, VAR_9, VAR_13,
       VAR_11, &VAR_12);
  if (VAR_14)
   return VAR_14;







  if (VAR_12 == VAR_2)
   return -VAR_1;
 }

 return 0;
}

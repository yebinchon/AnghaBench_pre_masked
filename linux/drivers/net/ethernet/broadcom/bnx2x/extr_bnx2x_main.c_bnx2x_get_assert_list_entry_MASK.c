
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x {int dummy; } ;
typedef enum storms { ____Placeholder_storms } storms ;


 int FUNC_0 (char*) ;

 int FUNC_1 (int) ;
 int VAR_0 ;


 int FUNC_2 (int) ;

 int FUNC_3 (int) ;

 int FUNC_4 (int) ;

__attribute__((used)) static inline int FUNC_5(struct bnx2x *VAR_1,
           enum storms VAR_2,
           int VAR_3)
{
 switch (VAR_2) {
 case 128:
  return FUNC_4(VAR_3);
 case 130:
  return FUNC_2(VAR_3);
 case 132:
  return FUNC_1(VAR_3);
 case 129:
  return FUNC_3(VAR_3);
 case 131:
 default:
  FUNC_0("unknown storm\n");
 }
 return -VAR_0;
}

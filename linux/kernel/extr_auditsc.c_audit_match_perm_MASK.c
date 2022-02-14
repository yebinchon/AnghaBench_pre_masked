
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audit_context {unsigned int major; int * argv; int arch; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct audit_context *VAR_11, int VAR_12)
{
 unsigned VAR_13;
 if (FUNC_3(!VAR_11))
  return 0;
 VAR_13 = VAR_11->major;

 switch (FUNC_1(VAR_11->arch, VAR_13)) {
 case 0:
  if ((VAR_12 & VAR_9) &&
       FUNC_2(VAR_4, VAR_13))
   return 1;
  if ((VAR_12 & VAR_8) &&
       FUNC_2(VAR_2, VAR_13))
   return 1;
  if ((VAR_12 & VAR_6) &&
       FUNC_2(VAR_0, VAR_13))
   return 1;
  return 0;
 case 1:
  if ((VAR_12 & VAR_9) &&
       FUNC_2(VAR_5, VAR_13))
   return 1;
  if ((VAR_12 & VAR_8) &&
       FUNC_2(VAR_3, VAR_13))
   return 1;
  if ((VAR_12 & VAR_6) &&
       FUNC_2(VAR_1, VAR_13))
   return 1;
  return 0;
 case 2:
  return VAR_12 & FUNC_0(VAR_11->argv[1]);
 case 3:
  return VAR_12 & FUNC_0(VAR_11->argv[2]);
 case 4:
  return ((VAR_12 & VAR_9) && VAR_11->argv[0] == VAR_10);
 case 5:
  return VAR_12 & VAR_7;
 default:
  return 0;
 }
}

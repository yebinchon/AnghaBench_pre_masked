
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ql3_adapter {int phyType; } ;


 int VAR_0 ;

 int VAR_1 ;

 int FUNC_0 (struct ql3_adapter*,int,int*) ;

__attribute__((used)) static int FUNC_1(struct ql3_adapter *VAR_2)
{
 u16 VAR_3;

 switch (VAR_2->phyType) {
 case 129: {
  if (FUNC_0(VAR_2, 0x1A, &VAR_3))
   return 0;

  return ((VAR_3 & 0x0080) && (VAR_3 & 0x1000)) != 0;
 }
 case 128:
 default: {
  if (FUNC_0(VAR_2, VAR_0, &VAR_3) < 0)
   return 0;
  return (VAR_3 & VAR_1) != 0;
 }
 }
}

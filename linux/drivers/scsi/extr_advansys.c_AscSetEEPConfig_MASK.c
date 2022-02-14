
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ushort ;
typedef int PortAddr ;
typedef int ASCEEP_CONFIG ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(PortAddr VAR_1, ASCEEP_CONFIG *VAR_2,
      ushort VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_4 = 0;
 while (1) {
  if ((VAR_5 = FUNC_0(VAR_1, VAR_2,
         VAR_3)) == 0) {
   break;
  }
  if (++VAR_4 > VAR_0) {
   break;
  }
 }
 return VAR_5;
}

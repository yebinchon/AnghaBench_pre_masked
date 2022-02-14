
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int*) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(int VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1,
       VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (!(VAR_5 & FUNC_0(VAR_4))) {
  VAR_5 |= FUNC_0(VAR_4);
  VAR_6 = FUNC_2(VAR_0, VAR_2,
         VAR_3, VAR_5);
  if (VAR_6)
   return VAR_6;
 }

 return VAR_6;
}

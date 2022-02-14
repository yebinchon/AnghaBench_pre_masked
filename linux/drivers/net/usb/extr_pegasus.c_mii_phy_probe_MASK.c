
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pegasus_t ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ,int*) ;

__attribute__((used)) static __u8 FUNC_1(pegasus_t *VAR_2)
{
 int VAR_3;
 __u16 VAR_4;

 for (VAR_3 = 0; VAR_3 < 32; VAR_3++) {
  FUNC_0(VAR_2, VAR_3, VAR_1, &VAR_4);
  if (VAR_4 == 0 || VAR_4 == 0xffff || (VAR_4 & VAR_0) == 0)
   continue;
  else
   return VAR_3;
 }

 return 0xff;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int*,int*) ;

__attribute__((used)) static int FUNC_1(void)
{
 u32 VAR_2, VAR_3;
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, &VAR_2, &VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4 = (VAR_2 >> 16) & 0xff;
 if (VAR_4)
  return VAR_4;

 return -VAR_0;
}

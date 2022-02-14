
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int,int,int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ,int*,int) ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(void)
{
 u32 *VAR_6, VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_5, ((void*)0), 0);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7 = VAR_8;

 VAR_6 = FUNC_0(VAR_7, sizeof(u32), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_6);
  return VAR_8;
 }

 FUNC_1(VAR_2);
 VAR_2 = VAR_6;
 VAR_4 = VAR_7;
 VAR_3++;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int*,int*) ;

__attribute__((used)) static int FUNC_1(int VAR_2, u32 *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_1, &VAR_4, &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_6 = (VAR_4 >> 16) & 0xff;
 *VAR_3 = VAR_6 * 1000;

 return VAR_6 ? 0 : -VAR_0;
}

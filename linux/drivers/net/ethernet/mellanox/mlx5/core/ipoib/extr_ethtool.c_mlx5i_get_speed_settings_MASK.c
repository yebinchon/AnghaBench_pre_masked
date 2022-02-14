
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(u16 VAR_1, u16 VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return -VAR_0;
 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 < 0)
  return -VAR_0;

 return VAR_3 * VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,unsigned int*) ;
 int FUNC_1 (int ,unsigned int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_4)
{
 u8 VAR_5 = 0;

 if (FUNC_2(!FUNC_0(VAR_1, &VAR_5)))
  return -VAR_0;

 if (FUNC_2(!FUNC_1(VAR_1,
    (VAR_5 & VAR_2) |
    (VAR_4 & VAR_3))))
  return -VAR_0;

 return 0;
}

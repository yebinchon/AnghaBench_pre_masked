
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_1(u32 *VAR_3, u32 VAR_4)
{
 unsigned long VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_4);
 if (!VAR_5)
  return -VAR_1;

 *VAR_3 = VAR_5 & ~VAR_0;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long*) ;
 int FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, bool VAR_2)
{
 u8 VAR_3;
 u8 VAR_4;
 unsigned long VAR_5 = (unsigned long) VAR_1;

 FUNC_0(VAR_0, &VAR_4);

 if (!VAR_2)
  VAR_3 = (u8) (VAR_4 | VAR_5);
 else
  VAR_3 = (u8) (VAR_4 & ~VAR_5);

 FUNC_1(VAR_0, VAR_3);

 return 0;
}

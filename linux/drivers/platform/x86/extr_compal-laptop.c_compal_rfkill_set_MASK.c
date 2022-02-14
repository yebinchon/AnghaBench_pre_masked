
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, bool VAR_2)
{
 unsigned long VAR_3 = (unsigned long) VAR_1;
 u8 VAR_4 = FUNC_0(VAR_0);
 u8 VAR_5;

 if (!VAR_2)
  VAR_5 = (u8) (VAR_4 | VAR_3);
 else
  VAR_5 = (u8) (VAR_4 & ~VAR_3);
 FUNC_1(VAR_0, VAR_5);

 return 0;
}

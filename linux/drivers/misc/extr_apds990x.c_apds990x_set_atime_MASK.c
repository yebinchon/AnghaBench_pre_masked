
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct apds990x_chip {int atime; int a_max_result; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct apds990x_chip*,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct apds990x_chip *VAR_4, u32 VAR_5)
{
 u8 VAR_6;

 VAR_4->atime = VAR_5;

 VAR_6 = 256 - ((VAR_5 * VAR_3) / VAR_2);

 VAR_4->a_max_result = (u16)(256 - VAR_6) * VAR_1;
 return FUNC_0(VAR_4, VAR_0, VAR_6);
}

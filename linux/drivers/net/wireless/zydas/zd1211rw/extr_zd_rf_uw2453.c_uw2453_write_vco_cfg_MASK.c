
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct zd_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct zd_chip*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct zd_chip *VAR_1, u16 VAR_2)
{


 u32 VAR_3 = 0x40000 | VAR_2;
 return FUNC_1(VAR_1, FUNC_0(3, VAR_3), VAR_0);
}

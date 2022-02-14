
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ov965x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ov965x*,int ,int*) ;
 int FUNC_1 (struct ov965x*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ov965x *VAR_2, int VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_1, &VAR_5);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_5 = VAR_3 ? VAR_5 | VAR_0 : VAR_5 & ~VAR_0;
 return FUNC_1(VAR_2, VAR_1, VAR_5);
}

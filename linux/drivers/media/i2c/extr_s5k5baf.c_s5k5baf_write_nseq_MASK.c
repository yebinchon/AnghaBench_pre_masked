
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct s5k5baf {int dummy; } ;


 int FUNC_0 (struct s5k5baf*,int ,int,int const*) ;

__attribute__((used)) static void FUNC_1(struct s5k5baf *VAR_0, const u16 *VAR_1)
{
 int VAR_2;

 while ((VAR_2 = *VAR_1++)) {
  u16 VAR_3 = *VAR_1++;
  --VAR_2;

  FUNC_0(VAR_0, VAR_3, VAR_2, VAR_1);
  VAR_1 += VAR_2;
 }
}

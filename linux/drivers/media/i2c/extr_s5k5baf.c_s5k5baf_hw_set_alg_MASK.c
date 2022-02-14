
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct s5k5baf {int valid_auto_alg; int auto_alg; scalar_t__ error; } ;


 int VAR_0 ;
 int FUNC_0 (struct s5k5baf*,int ) ;
 int FUNC_1 (struct s5k5baf*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct s5k5baf *VAR_1, u16 VAR_2, bool VAR_3)
{
 u16 VAR_4, VAR_5;

 if (!VAR_1->valid_auto_alg)
  VAR_4 = FUNC_0(VAR_1, VAR_0);
 else
  VAR_4 = VAR_1->auto_alg;

 VAR_5 = VAR_3 ? (VAR_4 | VAR_2) : (VAR_4 & ~VAR_2);

 if (VAR_5 != VAR_4)
  FUNC_1(VAR_1, VAR_0, VAR_5);

 if (VAR_1->error)
  return;

 VAR_1->valid_auto_alg = 1;
 VAR_1->auto_alg = VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct s5k5baf {int error; int sd; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (struct s5k5baf*,int ) ;
 int FUNC_2 (struct s5k5baf*,int ,int) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *,char*,int ) ;

__attribute__((used)) static void FUNC_6(struct s5k5baf *VAR_2, int VAR_3, u16 VAR_4)
{
 unsigned long VAR_5 = VAR_1 + FUNC_0(VAR_3);
 u16 VAR_6;

 FUNC_2(VAR_2, VAR_4, 1);
 do {
  VAR_6 = FUNC_1(VAR_2, VAR_4);
  if (VAR_2->error || !VAR_6)
   return;
  FUNC_4(5000, 10000);
 } while (FUNC_3(VAR_5));

 FUNC_5(&VAR_2->sd, "timeout on register synchronize (%#x)\n", VAR_4);
 VAR_2->error = -VAR_0;
}

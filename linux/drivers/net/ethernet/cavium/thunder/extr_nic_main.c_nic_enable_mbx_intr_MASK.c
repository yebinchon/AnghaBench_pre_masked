
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nicpf {int pdev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct nicpf*,scalar_t__,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct nicpf *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_2->pdev);




 FUNC_1(VAR_2, VAR_1, ((VAR_3 < 64) ? (FUNC_0(VAR_3) - 1) : (~0ull)));


 FUNC_1(VAR_2, VAR_0, ((VAR_3 < 64) ? (FUNC_0(VAR_3) - 1) : (~0ull)));

 if (VAR_3 > 64) {
  FUNC_1(VAR_2, VAR_1 + sizeof(u64),
         ((VAR_3 - 64 < 64) ? (FUNC_0(VAR_3 - 64) - 1) : (~0ull)));
  FUNC_1(VAR_2, VAR_0 + sizeof(u64),
         ((VAR_3 - 64 < 64) ? (FUNC_0(VAR_3 - 64) - 1) : (~0ull)));
 }
}

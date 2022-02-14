
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct rvu {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct rvu*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct rvu *VAR_0, int VAR_1, u64 VAR_2)
{
 int VAR_3;




 for (VAR_3 = 0; VAR_3 < 64; VAR_3++) {
  if (VAR_2 & (1ULL << VAR_3)) {

   FUNC_3(VAR_0, FUNC_2(VAR_1), FUNC_0(VAR_3));

   FUNC_3(VAR_0, FUNC_1(VAR_1), FUNC_0(VAR_3));
  }
 }
}

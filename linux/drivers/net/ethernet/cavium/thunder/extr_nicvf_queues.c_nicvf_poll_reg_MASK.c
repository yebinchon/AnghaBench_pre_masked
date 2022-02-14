
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nicvf {int netdev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct nicvf*,int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct nicvf *VAR_0, int VAR_1,
     u64 VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 u64 VAR_6;
 u64 VAR_7;
 int VAR_8 = 10;

 VAR_6 = (1ULL << VAR_4) - 1;
 VAR_6 = (VAR_6 << VAR_3);

 while (VAR_8) {
  VAR_7 = FUNC_1(VAR_0, VAR_2, VAR_1);
  if (((VAR_7 & VAR_6) >> VAR_3) == VAR_5)
   return 0;
  FUNC_2(1000, 2000);
  VAR_8--;
 }
 FUNC_0(VAR_0->netdev, "Poll on reg 0x%llx failed\n", VAR_2);
 return 1;
}

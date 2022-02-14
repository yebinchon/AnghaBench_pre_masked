
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nicvf {int netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct nicvf*,int ,int ) ;

void FUNC_3(struct nicvf *VAR_1, int VAR_2, int VAR_3)
{
 u64 VAR_4 = FUNC_1(VAR_2, VAR_3);

 if (!VAR_4) {
  FUNC_0(VAR_1->netdev,
      "Failed to disable interrupt: unknown type\n");
  return;
 }

 FUNC_2(VAR_1, VAR_0, VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0)
{
 u32 VAR_1[2], VAR_2[2];
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  VAR_2[VAR_3] = FUNC_2((void *)FUNC_1(VAR_3));
  VAR_1[VAR_3] = FUNC_2((void *)FUNC_0(VAR_3));
 }

 FUNC_4(VAR_0);


 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  FUNC_3(VAR_2[VAR_3], (void *)FUNC_1(VAR_3));
  FUNC_3(VAR_1[VAR_3], (void *)FUNC_0(VAR_3));
 }
}

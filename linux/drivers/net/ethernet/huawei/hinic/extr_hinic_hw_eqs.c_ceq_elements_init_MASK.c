
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hinic_eq {int q_len; } ;


 int * FUNC_0 (struct hinic_eq*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct hinic_eq *VAR_0, u32 VAR_1)
{
 u32 *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->q_len; VAR_3++) {
  VAR_2 = FUNC_0(VAR_0, VAR_3);
  *(VAR_2) = FUNC_1(VAR_1);
 }

 FUNC_2();
}

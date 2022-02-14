
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nic_mbx {int dummy; } nic_mbx ;
typedef int u64 ;
struct nicvf {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nicvf*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct nicvf *VAR_1, union nic_mbx *VAR_2)
{
 u64 *VAR_3 = (u64 *)VAR_2;

 FUNC_0(VAR_1, VAR_0 + 0, VAR_3[0]);
 FUNC_0(VAR_1, VAR_0 + 8, VAR_3[1]);
}

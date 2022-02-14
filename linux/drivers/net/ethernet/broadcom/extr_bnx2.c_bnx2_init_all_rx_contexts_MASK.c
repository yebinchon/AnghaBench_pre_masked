
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnx2 {int num_rx_rings; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bnx2*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct bnx2 *VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 for (VAR_3 = 0, VAR_4 = VAR_0; VAR_3 < VAR_2->num_rx_rings; VAR_3++, VAR_4++) {
  if (VAR_3 == 1)
   VAR_4 = VAR_1;
  FUNC_0(VAR_2, VAR_4);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_params {int port; int bp; } ;
struct bnx2x_phy {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct bnx2x_phy *VAR_2,
     struct link_params *VAR_3)
{

 FUNC_0(VAR_3->bp, VAR_0 + VAR_1,
        (0x1ff << (VAR_3->port*16)));
}

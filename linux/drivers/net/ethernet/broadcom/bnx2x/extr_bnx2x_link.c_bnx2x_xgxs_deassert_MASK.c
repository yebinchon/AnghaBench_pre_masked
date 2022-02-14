
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct link_params {int port; int * phy; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bnx2x*,scalar_t__,int) ;
 int VAR_6 ;
 int FUNC_2 (int *,struct link_params*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct link_params *VAR_7)
{
 struct bnx2x *VAR_8 = VAR_7->bp;
 u8 VAR_9;
 u32 VAR_10;
 FUNC_0(VAR_4, "bnx2x_xgxs_deassert\n");
 VAR_9 = VAR_7->port;

 VAR_10 = VAR_6 << (VAR_9*16);


 FUNC_1(VAR_8, VAR_0 + VAR_2, VAR_10);
 FUNC_3(500);
 FUNC_1(VAR_8, VAR_0 + VAR_3, VAR_10);
 FUNC_2(&VAR_7->phy[VAR_1], VAR_7,
     VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct bnx2x*,scalar_t__,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int,int*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int,int) ;

__attribute__((used)) static void FUNC_4(struct bnx2x_phy *VAR_5,
       struct link_params *VAR_6)
{
 struct bnx2x *VAR_7 = VAR_6->bp;
 u16 VAR_8;
 u32 VAR_9 = VAR_6->port ? VAR_1 : VAR_0;

 FUNC_0(VAR_2, "2PMA/PMD ext_phy_loopback: 54618se\n");



 FUNC_3(VAR_7, VAR_5, 0x09, 3<<11);






 FUNC_2(VAR_7, VAR_5, 0x00, &VAR_8);
 VAR_8 &= ~((1<<6) | (1<<12) | (1<<13));
 VAR_8 |= (1<<6) | (1<<8);
 FUNC_3(VAR_7, VAR_5, 0x00, VAR_8);





 FUNC_3(VAR_7, VAR_5, 0x18, 7);
 FUNC_2(VAR_7, VAR_5, 0x18, &VAR_8);
 FUNC_3(VAR_7, VAR_5, 0x18, VAR_8 | (1<<10) | (1<<15));


 FUNC_1(VAR_7, VAR_3 + VAR_6->port*4, 1);




 FUNC_1(VAR_7, VAR_9 + VAR_4, 0x2710);
}

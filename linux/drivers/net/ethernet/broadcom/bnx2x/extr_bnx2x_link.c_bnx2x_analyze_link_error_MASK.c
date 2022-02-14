
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct link_vars {int phy_flags; int link_up; int link_status; int periodic_flags; } ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;

 int FUNC_1 (struct bnx2x*,scalar_t__,int) ;
 int VAR_7 ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct link_params*,struct link_vars*,int,int ) ;
 int FUNC_4 (struct link_params*,struct link_vars*) ;
 int FUNC_5 (struct link_params*,int) ;

__attribute__((used)) static u8 FUNC_6(struct link_params *VAR_8,
        struct link_vars *VAR_9, u32 VAR_10,
        u32 VAR_11, u32 VAR_12, u8 VAR_13)
{
 struct bnx2x *VAR_14 = VAR_8->bp;

 u8 VAR_15;
 u32 VAR_16 = (VAR_9->phy_flags & VAR_11) ? 1 : 0;

 if ((VAR_10 ^ VAR_16) == 0)
  return 0;


 switch (VAR_11) {
 case 129:
  FUNC_0(VAR_3, "Analyze Remote Fault\n");
  break;
 case 128:
  FUNC_0(VAR_3, "Analyze TX Fault\n");
  break;
 default:
  FUNC_0(VAR_3, "Analyze UNKNOWN\n");
 }
 FUNC_0(VAR_3, "Link changed:[%x %x]->%x\n", VAR_9->link_up,
    VAR_16, VAR_10);


 if ((VAR_9->phy_flags & VAR_6) == 0)
  return 1;




 if (VAR_10) {
  VAR_9->link_status &= ~VAR_2;
  VAR_9->link_status |= VAR_12;
  VAR_9->link_up = 0;
  VAR_9->phy_flags |= VAR_11;


  FUNC_1(VAR_14, VAR_4 + VAR_8->port*4, 1);



  VAR_15 = VAR_0;
 } else {
  VAR_9->link_status |= VAR_2;
  VAR_9->link_status &= ~VAR_12;
  VAR_9->link_up = 1;
  VAR_9->phy_flags &= ~VAR_11;
  VAR_15 = VAR_1;


  FUNC_1(VAR_14, VAR_4 + VAR_8->port*4, 0);
 }
 FUNC_4(VAR_8, VAR_9);

 FUNC_3(VAR_8, VAR_9, VAR_15, VAR_7);


 FUNC_5(VAR_8, VAR_9->link_status);


 VAR_9->periodic_flags |= VAR_5;
 if (VAR_13)
  FUNC_2(VAR_14);

 return 1;
}

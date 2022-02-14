
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct link_vars {scalar_t__ line_speed; int eee_status; int flow_ctrl; int mac_type; } ;
struct link_params {int port; TYPE_1__* phy; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;
struct TYPE_2__ {int flags; int supported; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct bnx2x*,int,int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_2 (struct link_params*,int,int) ;
 int FUNC_3 (struct link_params*,struct link_vars*,int ) ;
 int FUNC_4 (struct link_params*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct link_params *VAR_26,
        struct link_vars *VAR_27, u8 VAR_28)
{
 u32 VAR_29, VAR_30;
 struct bnx2x *VAR_31 = VAR_26->bp;
 FUNC_0(VAR_6, "enabling XMAC\n");

 VAR_30 = (VAR_26->port) ? VAR_3 : VAR_2;

 FUNC_4(VAR_26, VAR_27->line_speed);
 FUNC_1(VAR_31, VAR_7 + VAR_26->port*4, 0);




 if (!(VAR_26->phy[VAR_4].flags & VAR_1)) {
  FUNC_1(VAR_31, VAR_30 + VAR_21,
         (VAR_24 |
   VAR_25));
  FUNC_1(VAR_31, VAR_30 + VAR_17, 0);
  FUNC_1(VAR_31, VAR_30 + VAR_17,
         VAR_11 |
         VAR_12);
 }

 FUNC_1(VAR_31, VAR_30 + VAR_22, 0x2710);


 FUNC_1(VAR_31, VAR_30 + VAR_23, 0xC800);


 FUNC_3(VAR_26, VAR_27, 0);

 if (VAR_27->eee_status & VAR_8) {
  FUNC_0(VAR_6, "Setting XMAC for EEE\n");
  FUNC_1(VAR_31, VAR_30 + VAR_20, 0x1380008);
  FUNC_1(VAR_31, VAR_30 + VAR_19, 0x1);
 } else {
  FUNC_1(VAR_31, VAR_30 + VAR_19, 0x0);
 }


 VAR_29 = VAR_15 | VAR_14;


 if ((VAR_27->line_speed == VAR_9) &&
     (VAR_26->phy[VAR_4].supported &
      VAR_10))
  VAR_29 |= VAR_16;


 if (VAR_28)
  VAR_29 |= VAR_13;
 FUNC_1(VAR_31, VAR_30 + VAR_18, VAR_29);
 FUNC_2(VAR_26,
       ((VAR_27->flow_ctrl & VAR_0) != 0), 1);

 VAR_27->mac_type = VAR_5;

 return 0;
}

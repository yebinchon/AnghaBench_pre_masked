
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int line_speed; scalar_t__ duplex; int rx_mode; int flow_ctrl; scalar_t__ link_up; } ;


 int FUNC_0 (struct bnx2*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct bnx2*,int ) ;
 int FUNC_2 (struct bnx2*,int ,int) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;




 int FUNC_3 (struct bnx2*) ;

__attribute__((used)) static void
FUNC_4(struct bnx2 *VAR_20)
{
 u32 VAR_21;

 FUNC_2(VAR_20, VAR_14, 0x2620);
 if (VAR_20->link_up && (VAR_20->line_speed == 129) &&
  (VAR_20->duplex == VAR_17)) {
  FUNC_2(VAR_20, VAR_14, 0x26ff);
 }


 VAR_21 = FUNC_1(VAR_20, VAR_1);

 VAR_21 &= ~(VAR_6 | VAR_4 |
  VAR_5 | VAR_3 |
  VAR_2);

 if (VAR_20->link_up) {
  switch (VAR_20->line_speed) {
   case 131:
    if (FUNC_0(VAR_20) != VAR_0) {
     VAR_21 |= VAR_9;
     break;
    }

   case 130:
    VAR_21 |= VAR_8;
    break;
   case 128:
    VAR_21 |= VAR_2;

   case 129:
    VAR_21 |= VAR_7;
    break;
  }
 }
 else {
  VAR_21 |= VAR_7;
 }


 if (VAR_20->duplex == VAR_17)
  VAR_21 |= VAR_4;
 FUNC_2(VAR_20, VAR_1, VAR_21);


 VAR_20->rx_mode &= ~VAR_11;

 if (VAR_20->flow_ctrl & VAR_18)
  VAR_20->rx_mode |= VAR_11;
 FUNC_2(VAR_20, VAR_10, VAR_20->rx_mode);


 VAR_21 = FUNC_1(VAR_20, VAR_15);
 VAR_21 &= ~VAR_16;

 if (VAR_20->flow_ctrl & VAR_19)
  VAR_21 |= VAR_16;
 FUNC_2(VAR_20, VAR_15, VAR_21);


 FUNC_2(VAR_20, VAR_12, VAR_13);

 FUNC_3(VAR_20);
}

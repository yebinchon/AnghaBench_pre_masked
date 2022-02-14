
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int mc_filter_type; } ;
struct ixgb_adapter {scalar_t__ rx_buffer_len; TYPE_1__ hw; } ;


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
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_14 ;

__attribute__((used)) static void
FUNC_2(struct ixgb_adapter *VAR_15)
{
 u32 VAR_16;

 VAR_16 = FUNC_0(&VAR_15->hw, VAR_14);

 VAR_16 &= ~(3 << VAR_6);

 VAR_16 |=
  VAR_0 | VAR_7 |
  VAR_8 | VAR_5 |
  (VAR_15->hw.mc_filter_type << VAR_6);

 VAR_16 |= VAR_9;

 if (VAR_15->rx_buffer_len <= VAR_11)
  VAR_16 |= VAR_2;
 else if (VAR_15->rx_buffer_len <= VAR_12)
  VAR_16 |= VAR_3;
 else if (VAR_15->rx_buffer_len <= VAR_13)
  VAR_16 |= VAR_4;
 else if (VAR_15->rx_buffer_len <= VAR_10)
  VAR_16 |= VAR_1;

 FUNC_1(&VAR_15->hw, VAR_14, VAR_16);
}

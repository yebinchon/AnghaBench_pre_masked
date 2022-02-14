
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_hecc_priv {int dummy; } ;
struct can_rx_offload {int dummy; } ;
struct can_frame {int can_id; int can_dlc; scalar_t__ data; } ;
typedef int __be32 ;


 int FUNC_0 (unsigned int) ;
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
 unsigned int VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ti_hecc_priv*,int ) ;
 int FUNC_4 (struct ti_hecc_priv*,unsigned int,int ) ;
 int FUNC_5 (struct ti_hecc_priv*,unsigned int) ;
 int FUNC_6 (struct ti_hecc_priv*,int ,int) ;
 struct ti_hecc_priv* FUNC_7 (struct can_rx_offload*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static unsigned int FUNC_9(struct can_rx_offload *VAR_14,
      struct can_frame *VAR_15,
      u32 *VAR_16, unsigned int VAR_17)
{
 struct ti_hecc_priv *VAR_18 = FUNC_7(VAR_14);
 u32 VAR_19, VAR_20;
 int VAR_21 = 1;

 VAR_20 = FUNC_0(VAR_17);
 VAR_19 = FUNC_4(VAR_18, VAR_17, VAR_9);
 if (VAR_19 & VAR_10)
  VAR_15->can_id = (VAR_19 & VAR_1) | VAR_0;
 else
  VAR_15->can_id = (VAR_19 >> 18) & VAR_3;

 VAR_19 = FUNC_4(VAR_18, VAR_17, VAR_5);
 if (VAR_19 & VAR_6)
  VAR_15->can_id |= VAR_2;
 VAR_15->can_dlc = FUNC_2(VAR_19 & 0xF);

 VAR_19 = FUNC_4(VAR_18, VAR_17, VAR_8);
 *(__be32 *)(VAR_15->data) = FUNC_1(VAR_19);
 if (VAR_15->can_dlc > 4) {
  VAR_19 = FUNC_4(VAR_18, VAR_17, VAR_7);
  *(__be32 *)(VAR_15->data + 4) = FUNC_1(VAR_19);
 }

 *VAR_16 = FUNC_5(VAR_18, VAR_17);
 if (FUNC_8(VAR_17 == VAR_13 &&
       FUNC_3(VAR_18, VAR_11) & VAR_20))
  VAR_21 = -VAR_4;

 FUNC_6(VAR_18, VAR_12, VAR_20);

 return VAR_21;
}

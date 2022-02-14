
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; int dev; } ;
struct cpsw_priv {size_t emac_port; struct cpsw_common* cpsw; } ;
struct TYPE_3__ {scalar_t__ dual_emac; } ;
struct cpsw_common {TYPE_2__* slaves; TYPE_1__ data; } ;
struct TYPE_4__ {int port_vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct sk_buff*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 struct cpsw_priv* FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_14)
{
 struct cpsw_priv *VAR_15 = FUNC_3(VAR_14->dev);
 struct cpsw_common *VAR_16 = VAR_15->cpsw;
 u32 VAR_17 = *((u32 *)VAR_14->data);
 u16 VAR_18, VAR_19, VAR_20, VAR_21;


 FUNC_4(VAR_14, VAR_7);

 VAR_21 = (VAR_17 >>
      VAR_3) &
      VAR_2;

 if (VAR_21 == VAR_1 ||
     VAR_21 == VAR_0)
  return;

 VAR_19 = (VAR_17 >>
        VAR_8) &
        VAR_13;

 if (!VAR_19)
  return;

 if (VAR_16->data.dual_emac &&
     VAR_19 == VAR_16->slaves[VAR_15->emac_port].port_vlan)
  return;

 VAR_20 = (VAR_17 >>
  VAR_6) &
  VAR_5;

 VAR_18 = (VAR_20 << VAR_12) | VAR_19;
 FUNC_0(VAR_14, FUNC_1(VAR_10), VAR_18);


 if (VAR_21 == VAR_4) {
  FUNC_2(VAR_14->data + VAR_11, VAR_14->data, 2 * VAR_9);
  FUNC_4(VAR_14, VAR_11);
 }
}

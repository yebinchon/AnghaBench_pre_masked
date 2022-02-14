
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tlan_priv {int* phy; size_t phy_num; int tlan_tqueue; } ;
struct net_device {int name; scalar_t__ base_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 struct tlan_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,int ,int) ;
 int FUNC_10 (struct net_device*,int,int ,int*) ;
 int FUNC_11 (struct net_device*,int,int ,int) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*,int ) ;

__attribute__((used)) static u32 FUNC_14(struct net_device *VAR_13, u16 VAR_14)
{
 struct tlan_priv *VAR_15 = FUNC_3(VAR_13);
 u32 VAR_16;
 u32 VAR_17;
 u8 VAR_18;
 u32 VAR_19;
 u16 VAR_20;
 u16 VAR_21;

 VAR_16 = 1;
 if (VAR_14 & VAR_3) {
  FUNC_4(VAR_13);
  VAR_17 = FUNC_1(VAR_13->base_addr + VAR_0);
  FUNC_2(VAR_13, "Adaptor Error = 0x%x\n", VAR_17);
  FUNC_13(VAR_13, VAR_7);
  FUNC_6(VAR_2, VAR_13->base_addr + VAR_4);

  FUNC_7(&VAR_15->tlan_tqueue);

  FUNC_5(VAR_13);
  VAR_16 = 0;
 } else {
  FUNC_0(VAR_1, "%s: Status Check\n", VAR_13->name);
  VAR_19 = VAR_15->phy[VAR_15->phy_num];

  VAR_18 = FUNC_8(VAR_13->base_addr, VAR_5);
  if (VAR_18) {
   FUNC_9(VAR_13->base_addr, VAR_5, VAR_18);
   FUNC_0(VAR_1, "%s:    Net_Sts = %x\n",
     VAR_13->name, (unsigned) VAR_18);
  }
  if ((VAR_18 & VAR_6) && (VAR_15->phy_num == 0)) {
   FUNC_10(VAR_13, VAR_19, VAR_10, &VAR_21);
   FUNC_10(VAR_13, VAR_19, VAR_9, &VAR_20);
   if (!(VAR_21 & VAR_11) &&
       !(VAR_20 & VAR_8)) {
    VAR_20 |= VAR_8;
    FUNC_11(VAR_13, VAR_19, VAR_9,
         VAR_20);
   } else if ((VAR_21 & VAR_11) &&
       (VAR_20 & VAR_8)) {
    VAR_20 &= ~VAR_8;
    FUNC_11(VAR_13, VAR_19, VAR_9,
         VAR_20);
   }

   if (VAR_12)
    FUNC_12(VAR_13);
  }
 }

 return VAR_16;

}

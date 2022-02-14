
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wiphy {int flags; } ;
struct net_device {int dummy; } ;
struct mwifiex_private {scalar_t__ bss_type; int adapter; scalar_t__ media_connected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;






 int FUNC_0 (struct mwifiex_private*,int const*) ;
 int FUNC_1 (int ,int ,char*,int const*,...) ;
 struct mwifiex_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct mwifiex_private*,int const*,int,int,int ,int const*,size_t) ;
 int FUNC_4 (struct mwifiex_private*,int const*,int,int,int ,int const*,size_t) ;

__attribute__((used)) static int
FUNC_5(struct wiphy *VAR_6, struct net_device *VAR_7,
      const u8 *VAR_8, u8 VAR_9, u8 VAR_10,
      u16 VAR_11, u32 VAR_12,
      bool VAR_13, const u8 *VAR_14,
      size_t VAR_15)
{
 struct mwifiex_private *VAR_16 = FUNC_2(VAR_7);
 int VAR_17;

 if (!(VAR_6->flags & VAR_5))
  return -VAR_1;


 if (!(VAR_16->bss_type == VAR_4 && VAR_16->media_connected))
  return -VAR_1;

 switch (VAR_9) {
 case 130:
  FUNC_1(VAR_16->adapter, VAR_3,
       "Send TDLS Setup Request to %pM status_code=%d\n",
       VAR_8, VAR_11);
  FUNC_0(VAR_16, VAR_8);
  VAR_17 = FUNC_4(VAR_16, VAR_8, VAR_9,
         VAR_10, VAR_11,
         VAR_14, VAR_15);
  break;
 case 129:
  FUNC_0(VAR_16, VAR_8);
  FUNC_1(VAR_16->adapter, VAR_3,
       "Send TDLS Setup Response to %pM status_code=%d\n",
       VAR_8, VAR_11);
  VAR_17 = FUNC_4(VAR_16, VAR_8, VAR_9,
         VAR_10, VAR_11,
         VAR_14, VAR_15);
  break;
 case 131:
  FUNC_1(VAR_16->adapter, VAR_3,
       "Send TDLS Confirm to %pM status_code=%d\n", VAR_8,
       VAR_11);
  VAR_17 = FUNC_4(VAR_16, VAR_8, VAR_9,
         VAR_10, VAR_11,
         VAR_14, VAR_15);
  break;
 case 128:
  FUNC_1(VAR_16->adapter, VAR_3,
       "Send TDLS Tear down to %pM\n", VAR_8);
  VAR_17 = FUNC_4(VAR_16, VAR_8, VAR_9,
         VAR_10, VAR_11,
         VAR_14, VAR_15);
  break;
 case 132:
  FUNC_1(VAR_16->adapter, VAR_3,
       "Send TDLS Discovery Request to %pM\n", VAR_8);
  VAR_17 = FUNC_4(VAR_16, VAR_8, VAR_9,
         VAR_10, VAR_11,
         VAR_14, VAR_15);
  break;
 case 133:
  FUNC_1(VAR_16->adapter, VAR_3,
       "Send TDLS Discovery Response to %pM\n", VAR_8);
  VAR_17 = FUNC_3(VAR_16, VAR_8, VAR_9,
         VAR_10, VAR_11,
         VAR_14, VAR_15);
  break;
 default:
  FUNC_1(VAR_16->adapter, VAR_2,
       "Unknown TDLS mgmt/action frame %pM\n", VAR_8);
  VAR_17 = -VAR_0;
  break;
 }

 return VAR_17;
}

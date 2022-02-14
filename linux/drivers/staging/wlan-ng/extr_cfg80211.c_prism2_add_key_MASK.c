
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct wlandevice {int dummy; } ;
struct wiphy {int dummy; } ;
struct net_device {struct wlandevice* ml_priv; } ;
struct key_params {scalar_t__ cipher; int key; int key_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct wlandevice*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct wlandevice*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct wiphy *VAR_6, struct net_device *VAR_7,
     u8 VAR_8, bool VAR_9, const u8 *VAR_10,
     struct key_params *VAR_11)
{
 struct wlandevice *VAR_12 = VAR_7->ml_priv;
 u32 VAR_13;

 if (VAR_8 >= VAR_3)
  return -VAR_2;

 if (VAR_11->cipher != VAR_5 &&
     VAR_11->cipher != VAR_4) {
  FUNC_1("Unsupported cipher suite\n");
  return -VAR_1;
 }

 if (FUNC_3(VAR_12,
       VAR_0,
       VAR_8))
  return -VAR_1;


 VAR_13 = FUNC_0(VAR_8 + 1);

 if (FUNC_2(VAR_12, VAR_13, VAR_11->key_len, VAR_11->key))
  return -VAR_1;
 return 0;
}

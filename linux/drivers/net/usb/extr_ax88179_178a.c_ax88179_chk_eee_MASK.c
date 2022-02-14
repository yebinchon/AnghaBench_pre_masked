
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {int mii; scalar_t__ data; } ;
struct ethtool_cmd {int duplex; scalar_t__ speed; int cmd; } ;
struct ax88179_data {int eee_active; } ;


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
 int FUNC_0 (struct usbnet*,int ,int ) ;
 int FUNC_1 (int *,struct ethtool_cmd*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_10)
{
 struct ethtool_cmd VAR_11 = { .cmd = VAR_1 };
 struct ax88179_data *VAR_12 = (struct ax88179_data *)VAR_10->data;

 FUNC_1(&VAR_10->mii, &VAR_11);

 if (VAR_11.duplex & VAR_0) {
  int VAR_13, VAR_14, VAR_15;
  u32 VAR_16, VAR_17, VAR_18, VAR_19 = 0;

  VAR_14 = FUNC_0(VAR_10,
       VAR_6,
       VAR_5);
  if (VAR_14 < 0) {
   VAR_12->eee_active = 0;
   return 0;
  }

  VAR_17 = FUNC_3(VAR_14);
  if (!VAR_17) {
   VAR_12->eee_active = 0;
   return 0;
  }

  VAR_13 = FUNC_0(VAR_10,
             VAR_3,
             VAR_4);
  if (VAR_13 < 0) {
   VAR_12->eee_active = 0;
   return 0;
  }

  VAR_15 = FUNC_0(VAR_10,
       VAR_2,
       VAR_4);

  if (VAR_15 < 0) {
   VAR_12->eee_active = 0;
   return 0;
  }

  VAR_18 = FUNC_2(VAR_15);
  VAR_16 = FUNC_2(VAR_13);
  VAR_19 = (VAR_11.speed == VAR_7) ?
        VAR_8 :
        VAR_9;

  if (!(VAR_16 & VAR_18 & VAR_19)) {
   VAR_12->eee_active = 0;
   return 0;
  }

  VAR_12->eee_active = 1;
  return 1;
 }

 VAR_12->eee_active = 0;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ifreq {int ifr_data; } ;
struct bdx_priv {int dummy; } ;
typedef int data ;




 int VAR_0 ;
 int FUNC_0 (char*,int,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bdx_priv*,int) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (struct bdx_priv*,int,int) ;
 int FUNC_4 (struct bdx_priv*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (int ,int*,int) ;
 int VAR_6 ;
 struct bdx_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_7, struct ifreq *VAR_8, int VAR_9)
{
 struct bdx_priv *VAR_10 = FUNC_8(VAR_7);
 u32 VAR_11[3];
 int VAR_12;

 VAR_2;

 FUNC_0("jiffies=%ld cmd=%d\n", VAR_6, VAR_9);
 if (VAR_9 != VAR_5) {
  VAR_12 = FUNC_6(VAR_11, VAR_8->ifr_data, sizeof(VAR_11));
  if (VAR_12) {
   FUNC_9("can't copy from user\n");
   FUNC_2(-VAR_1);
  }
  FUNC_0("%d 0x%x 0x%x\n", VAR_11[0], VAR_11[1], VAR_11[2]);
 } else {
  return -VAR_3;
 }

 if (!FUNC_5(VAR_0))
  return -VAR_4;

 switch (VAR_11[0]) {

 case 129:
  VAR_12 = FUNC_4(VAR_10, VAR_11[1]);
  if (VAR_12 < 0)
   return VAR_12;
  VAR_11[2] = FUNC_1(VAR_10, VAR_11[1]);
  FUNC_0("read_reg(0x%x)=0x%x (dec %d)\n", VAR_11[1], VAR_11[2],
      VAR_11[2]);
  VAR_12 = FUNC_7(VAR_8->ifr_data, VAR_11, sizeof(VAR_11));
  if (VAR_12)
   FUNC_2(-VAR_1);
  break;

 case 128:
  VAR_12 = FUNC_4(VAR_10, VAR_11[1]);
  if (VAR_12 < 0)
   return VAR_12;
  FUNC_3(VAR_10, VAR_11[1], VAR_11[2]);
  FUNC_0("write_reg(0x%x, 0x%x)\n", VAR_11[1], VAR_11[2]);
  break;

 default:
  FUNC_2(-VAR_3);
 }
 return 0;
}

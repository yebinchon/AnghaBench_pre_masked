
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct xlr_net_priv {int dummy; } ;
struct xlr_adapter {struct net_device** netdev; } ;
struct sk_buff {struct net_device* dev; int protocol; } ;
struct nlm_fmn_msg {int msg0; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 unsigned char* VAR_2 ;
 unsigned char* FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 struct xlr_net_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct xlr_net_priv*,void*) ;
 int FUNC_6 (struct sk_buff*,size_t) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 void* FUNC_8 () ;

__attribute__((used)) static void FUNC_9(int VAR_3, int VAR_4, int VAR_5, int VAR_6,
    struct nlm_fmn_msg *VAR_7, void *VAR_8)
{
 struct sk_buff *VAR_9;
 void *VAR_10 = ((void*)0);
 struct net_device *VAR_11;
 struct xlr_net_priv *VAR_12;
 u32 VAR_13, VAR_14;
 unsigned char *VAR_15;
 struct xlr_adapter *VAR_16 = VAR_8;

 VAR_14 = (VAR_7->msg0 >> 40) & 0x3fff;
 if (VAR_14 == 0) {
  VAR_15 = FUNC_0(VAR_7->msg0 & 0xffffffffffULL);
  VAR_15 = VAR_15 - VAR_2;
  VAR_9 = (struct sk_buff *)(*(unsigned long *)VAR_15);
  FUNC_1((struct sk_buff *)VAR_15);
 } else {
  VAR_15 = (unsigned char *)
   FUNC_0(VAR_7->msg0 & 0xffffffffe0ULL);
  VAR_14 = VAR_14 - VAR_0 - VAR_1;
  VAR_13 = ((int)VAR_7->msg0) & 0x0f;
  VAR_15 = VAR_15 - VAR_2;
  VAR_9 = (struct sk_buff *)(*(unsigned long *)VAR_15);
  VAR_9->dev = VAR_16->netdev[VAR_13];
  if (!VAR_9->dev)
   return;
  VAR_11 = VAR_9->dev;
  VAR_12 = FUNC_3(VAR_11);


  FUNC_7(VAR_9, VAR_0);
  FUNC_6(VAR_9, VAR_14);
  VAR_9->protocol = FUNC_2(VAR_9, VAR_9->dev);
  FUNC_4(VAR_9);

  VAR_10 = FUNC_8();
  if (VAR_10)
   FUNC_5(VAR_12, VAR_10);
 }
}

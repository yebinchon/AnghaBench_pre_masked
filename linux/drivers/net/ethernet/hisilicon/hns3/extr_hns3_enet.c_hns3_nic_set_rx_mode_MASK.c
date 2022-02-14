
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int flags; } ;
struct hnae3_handle {int netdev_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int ,int ) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 int FUNC_2 (struct net_device*,int) ;
 struct hnae3_handle* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct net_device*,char*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_9)
{
 struct hnae3_handle *VAR_10 = FUNC_3(VAR_9);
 u8 VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(VAR_9);

 VAR_12 = FUNC_1(VAR_9, VAR_7, VAR_8);
 if (VAR_12) {
  FUNC_6(VAR_9, "sync uc address fail\n");
  if (VAR_12 == -VAR_0)
   VAR_11 |= VAR_2;
 }

 if (VAR_9->flags & VAR_4) {
  VAR_12 = FUNC_0(VAR_9, VAR_5,
        VAR_6);
  if (VAR_12) {
   FUNC_6(VAR_9, "sync mc address fail\n");
   if (VAR_12 == -VAR_0)
    VAR_11 |= VAR_1;
  }
 }





 FUNC_2(VAR_9, VAR_11 & VAR_3);
 VAR_10->netdev_flags = VAR_11;
 FUNC_5(VAR_9, VAR_11);
}

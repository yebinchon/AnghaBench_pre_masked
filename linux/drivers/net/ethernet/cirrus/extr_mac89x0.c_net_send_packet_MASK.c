
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; scalar_t__ len; } ;
struct net_local {scalar_t__ send_cmd; } ;
struct net_device {scalar_t__ mem_start; } ;
typedef int netdev_tx_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 struct net_local* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_local*,int ,struct net_device*,char*,scalar_t__,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct sk_buff*,void*,scalar_t__) ;
 int VAR_8 ;
 int FUNC_8 (struct net_device*,int ,scalar_t__) ;

__attribute__((used)) static netdev_tx_t
FUNC_9(struct sk_buff *VAR_9, struct net_device *VAR_10)
{
 struct net_local *VAR_11 = FUNC_3(VAR_10);
 unsigned long VAR_12;

 FUNC_4(VAR_11, VAR_8, VAR_10, "sent %d byte packet of type %x\n",
    VAR_9->len, VAR_9->data[VAR_0 + VAR_0] << 8 |
    VAR_9->data[VAR_0 + VAR_0 + 1]);




 FUNC_2(VAR_12);
 FUNC_5(VAR_10);


 FUNC_8(VAR_10, VAR_4, VAR_11->send_cmd);
 FUNC_8(VAR_10, VAR_6, VAR_9->len);


 if ((FUNC_6(VAR_10, VAR_3) & VAR_7) == 0) {


  FUNC_1(VAR_12);
  return VAR_1;
 }


 FUNC_7(VAR_9, (void *)(VAR_10->mem_start + VAR_5),
      VAR_9->len+1);

 FUNC_1(VAR_12);
 FUNC_0 (VAR_9);

 return VAR_2;
}

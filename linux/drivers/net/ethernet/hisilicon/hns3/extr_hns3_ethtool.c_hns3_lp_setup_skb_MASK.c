
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {struct net_device* dev; } ;
struct net_device {int dev_addr; } ;
struct hnae3_handle {TYPE_1__* pdev; } ;
struct ethhdr {int h_proto; int h_source; int * h_dest; } ;
struct TYPE_2__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct hnae3_handle* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;
 void* FUNC_4 (struct sk_buff*,unsigned int) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct sk_buff *VAR_5)
{


 struct net_device *VAR_6 = VAR_5->dev;
 struct hnae3_handle *VAR_7;
 unsigned char *VAR_8;
 struct ethhdr *VAR_9;
 unsigned int VAR_10;

 FUNC_5(VAR_5, VAR_4);
 VAR_9 = FUNC_4(VAR_5, sizeof(struct ethhdr));
 VAR_8 = FUNC_4(VAR_5, VAR_3);

 FUNC_3(VAR_9->h_dest, VAR_6->dev_addr, VAR_0);






 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7->pdev->revision == 0x20)
  VAR_9->h_dest[5] += 0x1f;
 FUNC_0(VAR_9->h_source);
 VAR_9->h_proto = FUNC_2(VAR_1);
 FUNC_6(VAR_5);

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  VAR_8[VAR_10] = (unsigned char)(VAR_10 & 0xff);
}

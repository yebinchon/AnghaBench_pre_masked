
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sockaddr {scalar_t__ sa_data; } ;
struct ql_adapter {int func; int ndev; scalar_t__ current_mac_addr; } ;
struct net_device {scalar_t__ dev_addr; int addr_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;
 struct ql_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_4 (struct ql_adapter*,int ) ;
 int FUNC_5 (struct ql_adapter*,int ) ;
 int FUNC_6 (struct ql_adapter*,int *,int ,int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5, void *VAR_6)
{
 struct ql_adapter *VAR_7 = FUNC_2(VAR_5);
 struct sockaddr *VAR_8 = VAR_6;
 int VAR_9;

 if (!FUNC_0(VAR_8->sa_data))
  return -VAR_0;
 FUNC_1(VAR_5->dev_addr, VAR_8->sa_data, VAR_5->addr_len);

 FUNC_1(VAR_7->current_mac_addr, VAR_5->dev_addr, VAR_5->addr_len);

 VAR_9 = FUNC_4(VAR_7, VAR_3);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_6(VAR_7, (u8 *) VAR_5->dev_addr,
   VAR_1, VAR_7->func * VAR_2);
 if (VAR_9)
  FUNC_3(VAR_7, VAR_4, VAR_7->ndev, "Failed to load MAC address.\n");
 FUNC_5(VAR_7, VAR_3);
 return VAR_9;
}

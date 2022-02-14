
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef size_t u16 ;
struct net_device {int dummy; } ;
struct hinic_vport_stats {int member_0; } ;
struct hinic_phy_port_stats {int dummy; } ;
struct hinic_dev {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_4__ {int offset; int size; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hinic_dev*,int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (struct hinic_dev*,struct hinic_phy_port_stats*) ;
 int FUNC_3 (struct hinic_dev*,struct hinic_vport_stats*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (struct hinic_phy_port_stats*) ;
 struct hinic_phy_port_stats* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int ,int) ;
 struct hinic_dev* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct hinic_dev*,int ,struct net_device*,char*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_4,
        struct ethtool_stats *VAR_5, u64 *VAR_6)
{
 struct hinic_dev *VAR_7 = FUNC_7(VAR_4);
 struct hinic_vport_stats VAR_8 = {0};
 struct hinic_phy_port_stats *VAR_9;
 u16 VAR_10 = 0, VAR_11 = 0;
 char *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_3(VAR_7, &VAR_8);
 if (VAR_13)
  FUNC_8(VAR_7, VAR_1, VAR_4,
     "Failed to get vport stats from firmware\n");

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_2); VAR_11++, VAR_10++) {
  VAR_12 = (char *)&VAR_8 + VAR_2[VAR_11].offset;
  VAR_6[VAR_10] = (VAR_2[VAR_11].size ==
    sizeof(u64)) ? *(u64 *)VAR_12 : *(u32 *)VAR_12;
 }

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_0);
 if (!VAR_9) {
  FUNC_6(&VAR_6[VAR_10], 0,
         FUNC_0(VAR_3) * sizeof(*VAR_6));
  VAR_10 += FUNC_0(VAR_3);
  goto get_drv_stats;
 }

 VAR_13 = FUNC_2(VAR_7, VAR_9);
 if (VAR_13)
  FUNC_8(VAR_7, VAR_1, VAR_4,
     "Failed to get port stats from firmware\n");

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++, VAR_10++) {
  VAR_12 = (char *)VAR_9 + VAR_3[VAR_11].offset;
  VAR_6[VAR_10] = (VAR_3[VAR_11].size ==
    sizeof(u64)) ? *(u64 *)VAR_12 : *(u32 *)VAR_12;
 }

 FUNC_4(VAR_9);

get_drv_stats:
 FUNC_1(VAR_7, VAR_6 + VAR_10);
}

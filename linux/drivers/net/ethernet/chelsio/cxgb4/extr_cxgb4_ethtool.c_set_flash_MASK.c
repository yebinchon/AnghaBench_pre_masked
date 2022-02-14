
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct firmware {int size; int data; } ;
struct ethtool_flash {char* data; } ;
struct adapter {unsigned int pf; int flags; unsigned int mbox; int pdev_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ,char*) ;
 struct adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct firmware const**,char*,int ) ;
 int FUNC_6 (struct adapter*,unsigned int,int ,int ,int) ;
 int FUNC_7 (struct adapter*,int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_5, struct ethtool_flash *VAR_6)
{
 int VAR_7;
 const struct firmware *VAR_8;
 struct adapter *VAR_9 = FUNC_3(VAR_5);
 unsigned int VAR_10 = VAR_3 + 1;
 u32 VAR_11;
 unsigned int VAR_12;
 u8 VAR_13 = 0;

 VAR_11 = FUNC_7(VAR_9, VAR_2);
 VAR_12 = FUNC_0(VAR_11);
 if (VAR_11 & VAR_4)
  VAR_13 = 1;

 if (VAR_13 && (VAR_12 != VAR_9->pf)) {
  FUNC_2(VAR_9->pdev_dev,
    "cxgb4 driver needs to be loaded as MASTER to support FW flash\n");
  return -VAR_1;
 }

 VAR_6->data[sizeof(VAR_6->data) - 1] = '\0';
 VAR_7 = FUNC_5(&VAR_8, VAR_6->data, VAR_9->pdev_dev);
 if (VAR_7 < 0)
  return VAR_7;






 if (VAR_9->flags & VAR_0)
  VAR_10 = VAR_9->mbox;

 VAR_7 = FUNC_6(VAR_9, VAR_10, VAR_8->data, VAR_8->size, 1);
 FUNC_4(VAR_8);
 if (!VAR_7)
  FUNC_1(VAR_9->pdev_dev,
    "loaded firmware %s, reload cxgb4 driver\n", VAR_6->data);
 return VAR_7;
}

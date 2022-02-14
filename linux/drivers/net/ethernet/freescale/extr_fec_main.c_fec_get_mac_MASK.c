
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {unsigned char* dev_addr; } ;
struct fec_platform_data {int mac; } ;
struct fec_enet_private {unsigned char dev_id; TYPE_1__* pdev; scalar_t__ hwp; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct TYPE_5__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,char*,unsigned char*) ;
 struct fec_platform_data* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*,unsigned char*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (unsigned char*) ;
 unsigned char* VAR_4 ;
 int FUNC_8 (unsigned char*,unsigned char*,int) ;
 struct fec_enet_private* FUNC_9 (struct net_device*) ;
 char* FUNC_10 (struct device_node*) ;
 int FUNC_11 (scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_5)
{
 struct fec_enet_private *VAR_6 = FUNC_9(VAR_5);
 struct fec_platform_data *VAR_7 = FUNC_4(&VAR_6->pdev->dev);
 unsigned char *VAR_8, VAR_9[VAR_0];







 VAR_8 = VAR_4;




 if (!FUNC_7(VAR_8)) {
  struct device_node *VAR_10 = VAR_6->pdev->dev.of_node;
  if (VAR_10) {
   const char *VAR_11 = FUNC_10(VAR_10);
   if (!FUNC_0(VAR_11))
    VAR_8 = (unsigned char *) VAR_11;
  }
 }




 if (!FUNC_7(VAR_8)) {




  if (VAR_7)
   VAR_8 = (unsigned char *)&VAR_7->mac;

 }




 if (!FUNC_7(VAR_8)) {
  *((__be32 *) &VAR_9[0]) =
   FUNC_2(FUNC_11(VAR_6->hwp + VAR_2));
  *((__be16 *) &VAR_9[4]) =
   FUNC_1(FUNC_11(VAR_6->hwp + VAR_1) >> 16);
  VAR_8 = &VAR_9[0];
 }




 if (!FUNC_7(VAR_8)) {

  FUNC_3(&VAR_6->pdev->dev, "Invalid MAC address: %pM\n", VAR_8);
  FUNC_6(VAR_5);
  FUNC_5(&VAR_6->pdev->dev, "Using random MAC address: %pM\n",
    VAR_5->dev_addr);
  return;
 }

 FUNC_8(VAR_5->dev_addr, VAR_8, VAR_0);


 if (VAR_8 == VAR_4)
   VAR_5->dev_addr[VAR_0-1] = VAR_4[VAR_0-1] + VAR_6->dev_id;
}

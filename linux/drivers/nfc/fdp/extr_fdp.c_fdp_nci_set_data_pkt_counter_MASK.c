
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nci_dev {int dummy; } ;
struct fdp_nci_info {void (* data_pkt_counter_cb ) (struct nci_dev*) ;int data_pkt_counter; TYPE_2__* phy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* i2c_dev; } ;
struct TYPE_3__ {struct device dev; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct fdp_nci_info* FUNC_2 (struct nci_dev*) ;

__attribute__((used)) static void FUNC_3(struct nci_dev *VAR_0,
      void (*VAR_1)(struct nci_dev *VAR_2), int VAR_3)
{
 struct fdp_nci_info *VAR_4 = FUNC_2(VAR_0);
 struct device *VAR_5 = &VAR_4->phy->i2c_dev->dev;

 FUNC_1(VAR_5, "NCI data pkt counter %d\n", VAR_3);
 FUNC_0(&VAR_4->data_pkt_counter, VAR_3);
 VAR_4->data_pkt_counter_cb = VAR_1;
}

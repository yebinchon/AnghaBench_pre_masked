
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct enetc_ndev_priv {int dev; int si; } ;
struct enetc_msg_swbd {int dma; scalar_t__ vaddr; int size; } ;
struct TYPE_2__ {int id; int type; } ;
struct enetc_msg_cmd_set_primary_mac {int mac; TYPE_1__ header; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;
 int FUNC_4 (int ,struct enetc_msg_swbd*) ;
 int FUNC_5 (int *,struct sockaddr*,int) ;

__attribute__((used)) static int FUNC_6(struct enetc_ndev_priv *VAR_4,
           struct sockaddr *VAR_5)
{
 struct enetc_msg_cmd_set_primary_mac *VAR_6;
 struct enetc_msg_swbd VAR_7;
 int VAR_8;

 VAR_7.size = FUNC_0(sizeof(struct enetc_msg_cmd_set_primary_mac), 64);
 VAR_7.vaddr = FUNC_2(VAR_4->dev, VAR_7.size, &VAR_7.dma,
           VAR_3);
 if (!VAR_7.vaddr) {
  FUNC_1(VAR_4->dev, "Failed to alloc Tx msg (size: %d)\n",
   VAR_7.size);
  return -VAR_2;
 }

 VAR_6 = (struct enetc_msg_cmd_set_primary_mac *)VAR_7.vaddr;
 VAR_6->header.type = VAR_1;
 VAR_6->header.id = VAR_0;
 FUNC_5(&VAR_6->mac, VAR_5, sizeof(struct sockaddr));


 VAR_8 = FUNC_4(VAR_4->si, &VAR_7);

 FUNC_3(VAR_4->dev, VAR_7.size, VAR_7.vaddr, VAR_7.dma);

 return VAR_8;
}

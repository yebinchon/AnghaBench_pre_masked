
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct hinic_rss_type {void* udp_ipv6; void* udp_ipv4; void* tcp_ipv6_ext; void* tcp_ipv6; void* tcp_ipv4; void* ipv6_ext; void* ipv6; void* ipv4; } ;
struct hinic_rss_context_table {int context; scalar_t__ status; int template_id; int func_id; int member_0; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
typedef int ctx_tbl ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int VAR_1 ;
 void* FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *,char*,int,scalar_t__,int) ;
 int FUNC_3 (struct hinic_hwdev*,int ,struct hinic_rss_context_table*,int,struct hinic_rss_context_table*,int*) ;

int FUNC_4(struct hinic_dev *VAR_10, u32 VAR_11,
         struct hinic_rss_type *VAR_12)
{
 struct hinic_rss_context_table VAR_13 = { 0 };
 struct hinic_hwdev *VAR_14 = VAR_10->hwdev;
 struct hinic_hwif *VAR_15;
 struct pci_dev *VAR_16;
 u16 VAR_17 = sizeof(VAR_13);
 int VAR_18;

 if (!VAR_14 || !VAR_12)
  return -VAR_0;

 VAR_15 = VAR_14->hwif;
 VAR_16 = VAR_15->pdev;

 VAR_13.func_id = FUNC_0(VAR_15);
 VAR_13.template_id = VAR_11;

 VAR_18 = FUNC_3(VAR_14, VAR_1,
     &VAR_13, sizeof(VAR_13),
     &VAR_13, &VAR_17);
 if (VAR_18 || !VAR_17 || VAR_13.status) {
  FUNC_2(&VAR_16->dev, "Failed to get hash type, err: %d, status: 0x%x, out size: 0x%x\n",
   VAR_18, VAR_13.status, VAR_17);
  return -VAR_0;
 }

 VAR_12->ipv4 = FUNC_1(VAR_13.context, VAR_2);
 VAR_12->ipv6 = FUNC_1(VAR_13.context, VAR_3);
 VAR_12->ipv6_ext = FUNC_1(VAR_13.context, VAR_4);
 VAR_12->tcp_ipv4 = FUNC_1(VAR_13.context, VAR_5);
 VAR_12->tcp_ipv6 = FUNC_1(VAR_13.context, VAR_6);
 VAR_12->tcp_ipv6_ext = FUNC_1(VAR_13.context,
           VAR_7);
 VAR_12->udp_ipv4 = FUNC_1(VAR_13.context, VAR_8);
 VAR_12->udp_ipv6 = FUNC_1(VAR_13.context, VAR_9);

 return 0;
}

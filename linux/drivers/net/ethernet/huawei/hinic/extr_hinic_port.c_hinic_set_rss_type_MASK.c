
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct pci_dev {int dev; } ;
struct hinic_rss_type {int ipv4; int ipv6; int ipv6_ext; int tcp_ipv4; int tcp_ipv6; int tcp_ipv6_ext; int udp_ipv4; int udp_ipv6; } ;
struct hinic_rss_context_tbl {int size; void* ctx; scalar_t__ rsvd; scalar_t__ offset; void* group_index; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_func_to_io {int cmdqs; } ;
struct hinic_hwdev {struct hinic_hwif* hwif; struct hinic_func_to_io func_to_io; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
struct hinic_cmdq_buf {int size; scalar_t__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,struct hinic_cmdq_buf*) ;
 int FUNC_4 (int *,int ,int ,struct hinic_cmdq_buf*,scalar_t__*) ;
 int FUNC_5 (int *,struct hinic_cmdq_buf*) ;

int FUNC_6(struct hinic_dev *VAR_13, u32 VAR_14,
         struct hinic_rss_type VAR_15)
{
 struct hinic_rss_context_tbl *VAR_16;
 struct hinic_func_to_io *VAR_17;
 struct hinic_cmdq_buf VAR_18;
 struct hinic_hwdev *VAR_19;
 struct hinic_hwif *VAR_20;
 struct pci_dev *VAR_21;
 u64 VAR_22;
 u32 VAR_23 = 0;
 int VAR_24;

 VAR_19 = VAR_13->hwdev;
 VAR_17 = &VAR_19->func_to_io;
 VAR_20 = VAR_19->hwif;
 VAR_21 = VAR_20->pdev;

 VAR_24 = FUNC_3(&VAR_17->cmdqs, &VAR_18);
 if (VAR_24) {
  FUNC_2(&VAR_21->dev, "Failed to allocate cmd buf\n");
  return -VAR_1;
 }

 VAR_23 |= FUNC_0(1, VAR_12) |
  FUNC_0(VAR_15.ipv4, VAR_4) |
  FUNC_0(VAR_15.ipv6, VAR_5) |
  FUNC_0(VAR_15.ipv6_ext, VAR_6) |
  FUNC_0(VAR_15.tcp_ipv4, VAR_7) |
  FUNC_0(VAR_15.tcp_ipv6, VAR_8) |
  FUNC_0(VAR_15.tcp_ipv6_ext, VAR_9) |
  FUNC_0(VAR_15.udp_ipv4, VAR_10) |
  FUNC_0(VAR_15.udp_ipv6, VAR_11);

 VAR_18.size = sizeof(struct hinic_rss_context_tbl);

 VAR_16 = (struct hinic_rss_context_tbl *)VAR_18.buf;
 VAR_16->group_index = FUNC_1(VAR_14);
 VAR_16->offset = 0;
 VAR_16->size = sizeof(u32);
 VAR_16->size = FUNC_1(VAR_16->size);
 VAR_16->rsvd = 0;
 VAR_16->ctx = FUNC_1(VAR_23);


 VAR_24 = FUNC_4(&VAR_17->cmdqs, VAR_2,
         VAR_3,
         &VAR_18, &VAR_22);

 FUNC_5(&VAR_17->cmdqs, &VAR_18);

 if (VAR_24 || VAR_22 != 0) {
  FUNC_2(&VAR_21->dev, "Failed to set rss context table, err: %d\n",
   VAR_24);
  return -VAR_0;
 }

 return 0;
}

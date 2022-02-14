
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct netlink_callback {int dummy; } ;
struct TYPE_3__ {struct device* parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct fdb_dump_entry {int dummy; } ;
struct ethsw_port_priv {struct ethsw_core* ethsw_data; } ;
struct ethsw_dump_ctx {int idx; struct netlink_callback* cb; struct sk_buff* skb; struct net_device* dev; } ;
struct TYPE_4__ {int max_fdb_entries; } ;
struct ethsw_core {int dpsw_handle; int mc_io; TYPE_2__ sw_attr; } ;
struct device {int dummy; } ;
typedef int fdb_entry ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,int *,int,int ) ;
 scalar_t__ FUNC_1 (struct device*,int ) ;
 int FUNC_2 (struct device*,int ,int,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int,int*) ;
 int FUNC_4 (struct fdb_dump_entry*,struct ethsw_dump_ctx*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,int ) ;
 int FUNC_7 (struct net_device*,char*,...) ;
 struct ethsw_port_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct fdb_dump_entry*,struct ethsw_port_priv*) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_4, struct netlink_callback *VAR_5,
    struct net_device *VAR_6,
    struct net_device *VAR_7, int *VAR_8)
{
 struct ethsw_port_priv *VAR_9 = FUNC_8(VAR_6);
 struct ethsw_core *VAR_10 = VAR_9->ethsw_data;
 struct device *VAR_11 = VAR_6->dev.parent;
 struct fdb_dump_entry *VAR_12;
 struct fdb_dump_entry VAR_13;
 struct ethsw_dump_ctx VAR_14 = {
  .dev = VAR_6,
  .skb = VAR_4,
  .cb = VAR_5,
  .idx = *VAR_8,
 };
 dma_addr_t VAR_15;
 u16 VAR_16;
 u32 VAR_17;
 int VAR_18 = 0, VAR_19;
 u8 *VAR_20;

 VAR_17 = VAR_10->sw_attr.max_fdb_entries * sizeof(VAR_13);
 VAR_20 = FUNC_6(VAR_17, VAR_3);
 if (!VAR_20)
  return -VAR_2;

 VAR_15 = FUNC_0(VAR_11, VAR_20, VAR_17,
           VAR_0);
 if (FUNC_1(VAR_11, VAR_15)) {
  FUNC_7(VAR_6, "dma_map_single() failed\n");
  VAR_18 = -VAR_2;
  goto err_map;
 }

 VAR_18 = FUNC_3(VAR_10->mc_io, 0, VAR_10->dpsw_handle, 0,
       VAR_15, VAR_17, &VAR_16);
 if (VAR_18) {
  FUNC_7(VAR_6, "dpsw_fdb_dump() = %d\n", VAR_18);
  goto err_dump;
 }

 FUNC_2(VAR_11, VAR_15, VAR_17, VAR_0);

 VAR_12 = (struct fdb_dump_entry *)VAR_20;
 for (VAR_19 = 0; VAR_19 < VAR_16; VAR_19++) {
  VAR_13 = VAR_12[VAR_19];

  if (!FUNC_9(&VAR_13, VAR_9))
   continue;

  VAR_18 = FUNC_4(&VAR_13, &VAR_14);
  if (VAR_18)
   goto end;
 }

end:
 *VAR_8 = VAR_14.idx;

 FUNC_5(VAR_20);

 return 0;

err_dump:
 FUNC_2(VAR_11, VAR_15, VAR_17, VAR_1);
err_map:
 FUNC_5(VAR_20);
 return VAR_18;
}

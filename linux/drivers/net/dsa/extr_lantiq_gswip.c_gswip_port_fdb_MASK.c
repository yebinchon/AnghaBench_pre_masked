
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct gswip_priv {int dev; TYPE_3__* vlans; TYPE_1__* hw_info; } ;
struct gswip_pce_table_entry {int key_mode; unsigned char* key; int valid; int * val; int table; int member_0; } ;
struct dsa_switch {struct gswip_priv* priv; } ;
struct TYPE_6__ {int fid; struct net_device* bridge; } ;
struct TYPE_5__ {struct net_device* bridge_dev; } ;
struct TYPE_4__ {unsigned int cpu_port; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,...) ;
 TYPE_2__* FUNC_3 (struct dsa_switch*,int) ;
 int FUNC_4 (struct gswip_priv*,struct gswip_pce_table_entry*) ;

__attribute__((used)) static int FUNC_5(struct dsa_switch *VAR_3, int VAR_4,
     const unsigned char *VAR_5, u16 VAR_6, bool VAR_7)
{
 struct gswip_priv *VAR_8 = VAR_3->priv;
 struct net_device *VAR_9 = FUNC_3(VAR_3, VAR_4)->bridge_dev;
 struct gswip_pce_table_entry VAR_10 = {0,};
 unsigned int VAR_11 = VAR_8->hw_info->cpu_port;
 int VAR_12 = -1;
 int VAR_13;
 int VAR_14;

 if (!VAR_9)
  return -VAR_0;

 for (VAR_13 = VAR_11; VAR_13 < FUNC_0(VAR_8->vlans); VAR_13++) {
  if (VAR_8->vlans[VAR_13].bridge == VAR_9) {
   VAR_12 = VAR_8->vlans[VAR_13].fid;
   break;
  }
 }

 if (VAR_12 == -1) {
  FUNC_2(VAR_8->dev, "Port not part of a bridge\n");
  return -VAR_0;
 }

 VAR_10.table = VAR_1;
 VAR_10.key_mode = 1;
 VAR_10.key[0] = VAR_5[5] | (VAR_5[4] << 8);
 VAR_10.key[1] = VAR_5[3] | (VAR_5[2] << 8);
 VAR_10.key[2] = VAR_5[1] | (VAR_5[0] << 8);
 VAR_10.key[3] = VAR_12;
 VAR_10.val[0] = VAR_7 ? FUNC_1(VAR_4) : 0;
 VAR_10.val[1] = VAR_2;
 VAR_10.valid = VAR_7;

 VAR_14 = FUNC_4(VAR_8, &VAR_10);
 if (VAR_14)
  FUNC_2(VAR_8->dev, "failed to write mac bridge: %d\n", VAR_14);

 return VAR_14;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {int (* data ) (struct device_node*) ;} ;
struct mii_bus {char* name; TYPE_1__* parent; int phy_mask; int id; int * write; int * read; struct fec_info* priv; } ;
struct fec_info {int mii_speed; TYPE_2__* fecp; } ;
struct TYPE_7__ {int fec_mii_speed; int fec_ievent; int fec_ecntrl; int fec_r_cntrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct fec_info*) ;
 struct fec_info* FUNC_6 (int,int ) ;
 struct mii_bus* FUNC_7 () ;
 int FUNC_8 (struct mii_bus*) ;
 int FUNC_9 (struct device_node*,int ,struct resource*) ;
 struct of_device_id* FUNC_10 (int ,TYPE_1__*) ;
 int FUNC_11 (struct mii_bus*,struct device_node*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (struct platform_device*,struct mii_bus*) ;
 int VAR_11 ;
 int FUNC_14 (struct resource*) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_12)
{
 const struct of_device_id *VAR_13;
 struct resource VAR_14;
 struct mii_bus *VAR_15;
 struct fec_info *VAR_16;
 int (*VAR_17)(struct device_node *);
 int VAR_18 = -VAR_1, VAR_19, VAR_20;

 VAR_13 = FUNC_10(VAR_10, &VAR_12->dev);
 if (!VAR_13)
  return -VAR_0;
 VAR_17 = VAR_13->data;

 VAR_15 = FUNC_7();
 if (!VAR_15)
  goto out;

 VAR_16 = FUNC_6(sizeof(struct fec_info), VAR_6);
 if (!VAR_16)
  goto out_mii;

 VAR_15->priv = VAR_16;
 VAR_15->name = "FEC MII Bus";
 VAR_15->read = &VAR_8;
 VAR_15->write = &VAR_9;

 VAR_18 = FUNC_9(VAR_12->dev.of_node, 0, &VAR_14);
 if (VAR_18)
  goto out_res;

 FUNC_16(VAR_15->id, VAR_7, "%x", VAR_14.start);

 VAR_16->fecp = FUNC_3(VAR_14.start, FUNC_14(&VAR_14));
 if (!VAR_16->fecp) {
  VAR_18 = -VAR_1;
  goto out_fec;
 }

 if (VAR_17) {
  VAR_19 = VAR_17(VAR_12->dev.of_node);
  if (!VAR_19) {

   FUNC_2(&VAR_12->dev, "could not determine IPS clock\n");
   VAR_19 = 0x3F * 5000000;
  }
 } else
  VAR_19 = VAR_11;





 VAR_20 = (VAR_19 + 4999999) / 5000000;
 if (VAR_20 > 0x3F) {
  VAR_20 = 0x3F;
  FUNC_1(&VAR_12->dev,
   "MII clock (%d Hz) exceeds max (2.5 MHz)\n",
   VAR_19 / VAR_20);
 }

 VAR_16->mii_speed = VAR_20 << 1;

 FUNC_15(&VAR_16->fecp->fec_r_cntrl, VAR_5);
 FUNC_15(&VAR_16->fecp->fec_ecntrl, VAR_3 |
                                   VAR_2);
 FUNC_12(&VAR_16->fecp->fec_ievent, VAR_4);
 FUNC_0(&VAR_16->fecp->fec_mii_speed, 0x7E, VAR_16->mii_speed);

 VAR_15->phy_mask = ~0;

 VAR_15->parent = &VAR_12->dev;
 FUNC_13(VAR_12, VAR_15);

 VAR_18 = FUNC_11(VAR_15, VAR_12->dev.of_node);
 if (VAR_18)
  goto out_unmap_regs;

 return 0;

out_unmap_regs:
 FUNC_4(VAR_16->fecp);
out_res:
out_fec:
 FUNC_5(VAR_16);
out_mii:
 FUNC_8(VAR_15);
out:
 return VAR_18;
}

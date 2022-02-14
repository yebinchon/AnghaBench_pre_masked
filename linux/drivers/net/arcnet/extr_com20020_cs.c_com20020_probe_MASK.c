
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {struct com20020_dev* priv; int config_flags; TYPE_2__** resource; int dev; } ;
struct net_device {int * dev_addr; } ;
struct com20020_dev {struct net_device* dev; } ;
struct TYPE_3__ {int owner; } ;
struct arcnet_local {int clockm; TYPE_1__ hw; int clockp; int backplane; int timeout; } ;
struct TYPE_4__ {int end; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct net_device* FUNC_0 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct com20020_dev*) ;
 struct com20020_dev* FUNC_4 (int,int ) ;
 struct arcnet_local* FUNC_5 (struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_6(struct pcmcia_device *VAR_10)
{
 struct com20020_dev *VAR_11;
 struct net_device *VAR_12;
 struct arcnet_local *VAR_13;

 FUNC_2(&VAR_10->dev, "com20020_attach()\n");


 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  goto fail_alloc_info;

 VAR_12 = FUNC_0("");
 if (!VAR_12)
  goto fail_alloc_dev;

 VAR_13 = FUNC_5(VAR_12);
 VAR_13->timeout = VAR_9;
 VAR_13->backplane = VAR_5;
 VAR_13->clockp = VAR_7;
 VAR_13->clockm = VAR_6 & 3;
 VAR_13->hw.owner = VAR_4;


 VAR_12->dev_addr[0] = VAR_8;

 VAR_10->resource[0]->flags |= VAR_3;
 VAR_10->resource[0]->end = 16;
 VAR_10->config_flags |= VAR_0;

 VAR_11->dev = VAR_12;
 VAR_10->priv = VAR_11;

 return FUNC_1(VAR_10);

fail_alloc_dev:
 FUNC_3(VAR_11);
fail_alloc_info:
 return -VAR_1;
}

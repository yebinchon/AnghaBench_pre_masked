
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct resource {int start; } ;
struct TYPE_24__ {scalar_t__ of_node; } ;
struct platform_device {TYPE_9__ dev; } ;
struct physmap_flash_info {int nmaps; int nparts; int parts; int part_types; TYPE_4__* cmtd; int vpp_lock; TYPE_4__** mtds; TYPE_2__* maps; scalar_t__ probe_type; TYPE_10__* gpios; scalar_t__ win_order; } ;
struct TYPE_21__ {TYPE_9__* parent; } ;
struct TYPE_23__ {TYPE_1__ dev; } ;
struct TYPE_22__ {unsigned long map_priv_1; int read; int size; int phys; int name; TYPE_10__* virt; } ;
struct TYPE_20__ {int ndescs; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (TYPE_10__*) ;
 int FUNC_4 (TYPE_9__*,char*) ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_9__*) ;
 int FUNC_7 (TYPE_9__*,char*,struct resource*) ;
 TYPE_10__* FUNC_8 (TYPE_9__*,char*,int ) ;
 TYPE_10__* FUNC_9 (TYPE_9__*,struct resource*) ;
 void* FUNC_10 (TYPE_9__*,int,int ) ;
 void* FUNC_11 (scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_12 (int ) ;
 TYPE_4__* FUNC_13 (TYPE_4__**,int,int ) ;
 int FUNC_14 (TYPE_4__*,int ,int *,int ,int ) ;
 int FUNC_15 (TYPE_4__*,scalar_t__) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (struct platform_device*) ;
 int FUNC_18 (struct platform_device*) ;
 int FUNC_19 (struct platform_device*) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int) ;
 int FUNC_21 (struct platform_device*,struct physmap_flash_info*) ;
 int FUNC_22 (struct resource*) ;
 scalar_t__* VAR_7 ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (int *) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_8)
{
 struct physmap_flash_info *VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 if (!VAR_8->dev.of_node && !FUNC_5(&VAR_8->dev))
  return -VAR_0;

 VAR_9 = FUNC_10(&VAR_8->dev, sizeof(*VAR_9), VAR_4);
 if (!VAR_9)
  return -VAR_2;

 while (FUNC_20(VAR_8, VAR_6, VAR_9->nmaps))
  VAR_9->nmaps++;

 if (!VAR_9->nmaps)
  return -VAR_1;

 VAR_9->maps = FUNC_10(&VAR_8->dev,
      sizeof(*VAR_9->maps) * VAR_9->nmaps,
      VAR_4);
 if (!VAR_9->maps)
  return -VAR_2;

 VAR_9->mtds = FUNC_10(&VAR_8->dev,
      sizeof(*VAR_9->mtds) * VAR_9->nmaps,
      VAR_4);
 if (!VAR_9->mtds)
  return -VAR_2;

 FUNC_21(VAR_8, VAR_9);

 VAR_9->gpios = FUNC_8(&VAR_8->dev, "addr",
          VAR_5);
 if (FUNC_2(VAR_9->gpios))
  return FUNC_3(VAR_9->gpios);

 if (VAR_9->gpios && VAR_9->nmaps > 1) {
  FUNC_4(&VAR_8->dev, "addr-gpios only supported for nmaps == 1\n");
  return -VAR_0;
 }

 if (VAR_8->dev.of_node)
  VAR_10 = FUNC_17(VAR_8);
 else
  VAR_10 = FUNC_18(VAR_8);

 if (VAR_10)
  return VAR_10;

 for (VAR_11 = 0; VAR_11 < VAR_9->nmaps; VAR_11++) {
  struct resource *VAR_12;

  VAR_12 = FUNC_20(VAR_8, VAR_6, VAR_11);
  VAR_9->maps[VAR_11].virt = FUNC_9(&VAR_8->dev, VAR_12);
  if (FUNC_2(VAR_9->maps[VAR_11].virt)) {
   VAR_10 = FUNC_3(VAR_9->maps[VAR_11].virt);
   goto err_out;
  }

  FUNC_7(&VAR_8->dev, "physmap platform flash device: %pR\n",
      VAR_12);

  VAR_9->maps[VAR_11].name = FUNC_6(&VAR_8->dev);

  if (!VAR_9->maps[VAR_11].phys)
   VAR_9->maps[VAR_11].phys = VAR_12->start;

  VAR_9->win_order = FUNC_12(FUNC_22(VAR_12)) - 1;
  VAR_9->maps[VAR_11].size = FUNC_1(VAR_9->win_order +
      (VAR_9->gpios ?
       VAR_9->gpios->ndescs : 0));

  VAR_9->maps[VAR_11].map_priv_1 = (unsigned long)VAR_8;

  if (VAR_9->gpios) {
   VAR_10 = FUNC_16(&VAR_9->maps[VAR_11]);
   if (VAR_10)
    goto err_out;
  }
  FUNC_23(&VAR_9->maps[VAR_11]);


  if (VAR_9->probe_type) {
   VAR_9->mtds[VAR_11] = FUNC_11(VAR_9->probe_type,
           &VAR_9->maps[VAR_11]);
  } else {
   int VAR_13;

   for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_7); VAR_13++) {
    VAR_9->mtds[VAR_11] = FUNC_11(VAR_7[VAR_13],
            &VAR_9->maps[VAR_11]);
    if (VAR_9->mtds[VAR_11])
     break;
   }
  }

  if (!VAR_9->mtds[VAR_11]) {
   FUNC_4(&VAR_8->dev, "map_probe failed\n");
   VAR_10 = -VAR_3;
   goto err_out;
  }
  VAR_9->mtds[VAR_11]->dev.parent = &VAR_8->dev;
 }

 if (VAR_9->nmaps == 1) {
  VAR_9->cmtd = VAR_9->mtds[0];
 } else {



  VAR_9->cmtd = FUNC_13(VAR_9->mtds, VAR_9->nmaps,
            FUNC_6(&VAR_8->dev));
  if (!VAR_9->cmtd)
   VAR_10 = -VAR_3;
 }
 if (VAR_10)
  goto err_out;

 FUNC_24(&VAR_9->vpp_lock);

 FUNC_15(VAR_9->cmtd, VAR_8->dev.of_node);
 VAR_10 = FUNC_14(VAR_9->cmtd, VAR_9->part_types, ((void*)0),
     VAR_9->parts, VAR_9->nparts);
 if (VAR_10)
  goto err_out;

 return 0;

err_out:
 FUNC_19(VAR_8);
 return VAR_10;
}

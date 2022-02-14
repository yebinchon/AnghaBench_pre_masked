
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct TYPE_7__ {char* name; int size; int virt; int bankwidth; scalar_t__ phys; } ;
struct platram_info {TYPE_3__* mtd; TYPE_2__ map; struct platdata_mtd_ram* pdata; int * dev; } ;
struct platform_device {int dev; scalar_t__ name; } ;
struct platdata_mtd_ram {char** map_probes; scalar_t__ nr_partitions; int partitions; int probes; int bankwidth; int * mapname; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_8__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 struct platdata_mtd_ram* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,struct resource*) ;
 void* FUNC_7 (char const* const,TYPE_2__*) ;
 struct platram_info* FUNC_8 (int,int ) ;
 int FUNC_9 (TYPE_3__*,int ,int *,int ,scalar_t__) ;
 int FUNC_10 (TYPE_3__*,int *,int ) ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct platram_info*) ;
 int FUNC_13 (struct platform_device*) ;
 int FUNC_14 (struct platram_info*,int ) ;
 int FUNC_15 (struct resource*) ;
 int FUNC_16 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_5)
{
 struct platdata_mtd_ram *VAR_6;
 struct platram_info *VAR_7;
 struct resource *VAR_8;
 int VAR_9 = 0;

 FUNC_2(&VAR_5->dev, "probe entered\n");

 if (FUNC_4(&VAR_5->dev) == ((void*)0)) {
  FUNC_3(&VAR_5->dev, "no platform data supplied\n");
  VAR_9 = -VAR_0;
  goto exit_error;
 }

 VAR_6 = FUNC_4(&VAR_5->dev);

 VAR_7 = FUNC_8(sizeof(*VAR_7), VAR_2);
 if (VAR_7 == ((void*)0)) {
  VAR_9 = -VAR_1;
  goto exit_error;
 }

 FUNC_12(VAR_5, VAR_7);

 VAR_7->dev = &VAR_5->dev;
 VAR_7->pdata = VAR_6;


 VAR_8 = FUNC_11(VAR_5, VAR_3, 0);
 VAR_7->map.virt = FUNC_6(&VAR_5->dev, VAR_8);
 if (FUNC_0(VAR_7->map.virt)) {
  VAR_9 = FUNC_1(VAR_7->map.virt);
  FUNC_3(&VAR_5->dev, "failed to ioremap() region\n");
  goto exit_free;
 }

 FUNC_2(&VAR_5->dev, "got platform resource %p (0x%llx)\n", VAR_8,
  (unsigned long long)VAR_8->start);



 VAR_7->map.phys = VAR_8->start;
 VAR_7->map.size = FUNC_15(VAR_8);
 VAR_7->map.name = VAR_6->mapname != ((void*)0) ?
   (char *)VAR_6->mapname : (char *)VAR_5->name;
 VAR_7->map.bankwidth = VAR_6->bankwidth;

 FUNC_2(&VAR_5->dev, "virt %p, %lu bytes\n", VAR_7->map.virt, VAR_7->map.size);

 FUNC_16(&VAR_7->map);

 FUNC_2(&VAR_5->dev, "initialised map, probing for mtd\n");




 if (VAR_6->map_probes) {
  const char * const *VAR_10 = VAR_6->map_probes;

  for ( ; !VAR_7->mtd && *VAR_10; VAR_10++)
   VAR_7->mtd = FUNC_7(*VAR_10 , &VAR_7->map);
 }

 else
  VAR_7->mtd = FUNC_7("map_ram", &VAR_7->map);

 if (VAR_7->mtd == ((void*)0)) {
  FUNC_3(&VAR_5->dev, "failed to probe for map_ram\n");
  VAR_9 = -VAR_1;
  goto exit_free;
 }

 VAR_7->mtd->dev.parent = &VAR_5->dev;

 FUNC_14(VAR_7, VAR_4);




 VAR_9 = FUNC_9(VAR_7->mtd, VAR_6->probes, ((void*)0),
     VAR_6->partitions,
     VAR_6->nr_partitions);
 if (!VAR_9)
  FUNC_5(&VAR_5->dev, "registered mtd device\n");

 if (VAR_6->nr_partitions) {

  VAR_9 = FUNC_10(VAR_7->mtd, ((void*)0), 0);
  if (VAR_9) {
   FUNC_3(&VAR_5->dev,
    "failed to register the entire device\n");
  }
 }

 return VAR_9;

 exit_free:
 FUNC_13(VAR_5);
 exit_error:
 return VAR_9;
}

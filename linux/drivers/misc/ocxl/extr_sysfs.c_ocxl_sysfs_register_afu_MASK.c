
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {char* name; int mode; } ;
struct TYPE_8__ {int mmap; int read; int size; TYPE_3__ attr; } ;
struct ocxl_file_info {int dev; TYPE_4__ attr_global_mmio; TYPE_2__* afu; } ;
struct TYPE_5__ {int global_mmio_size; } ;
struct TYPE_6__ {TYPE_1__ config; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_3__*) ;

int FUNC_6(struct ocxl_file_info *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  VAR_5 = FUNC_3(&VAR_3->dev, &VAR_0[VAR_4]);
  if (VAR_5)
   goto err;
 }

 FUNC_5(&VAR_3->attr_global_mmio.attr);
 VAR_3->attr_global_mmio.attr.name = "global_mmio_area";
 VAR_3->attr_global_mmio.attr.mode = 0600;
 VAR_3->attr_global_mmio.size = VAR_3->afu->config.global_mmio_size;
 VAR_3->attr_global_mmio.read = VAR_2;
 VAR_3->attr_global_mmio.mmap = VAR_1;
 VAR_5 = FUNC_2(&VAR_3->dev, &VAR_3->attr_global_mmio);
 if (VAR_5) {
  FUNC_1(&VAR_3->dev, "Unable to create global mmio attr for afu: %d\n", VAR_5);
  goto err;
 }

 return 0;

err:
 for (VAR_4--; VAR_4 >= 0; VAR_4--)
  FUNC_4(&VAR_3->dev, &VAR_0[VAR_4]);

 return VAR_5;
}

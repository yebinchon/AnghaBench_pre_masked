
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct nfp_cpp_area {int dummy; } ;
struct nfp6000_pcie {int dev; TYPE_3__* bar; } ;
struct TYPE_10__ {int flags; scalar_t__ start; scalar_t__ end; int name; } ;
struct TYPE_9__ {int bar; } ;
struct nfp6000_area_priv {int offset; int bar_offset; TYPE_3__* bar; int * iomem; scalar_t__ size; scalar_t__ phys; TYPE_2__ resource; int token; int target; TYPE_1__ width; int action; } ;
struct TYPE_11__ {int mask; int index; int * iomem; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int,int ) ;
 int * FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (struct nfp6000_pcie*,int ,int ,int ,int,scalar_t__,int ,int) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (struct nfp6000_pcie*,TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (struct nfp_cpp_area*) ;
 int FUNC_12 (struct nfp_cpp_area*) ;
 struct nfp6000_area_priv* FUNC_13 (struct nfp_cpp_area*) ;
 struct nfp6000_pcie* FUNC_14 (int ) ;
 int FUNC_15 (struct nfp_cpp_area*) ;

__attribute__((used)) static int FUNC_16(struct nfp_cpp_area *VAR_3)
{
 struct nfp6000_pcie *VAR_4 = FUNC_14(FUNC_11(VAR_3));
 struct nfp6000_area_priv *VAR_5 = FUNC_13(VAR_3);
 int VAR_6, VAR_7;

 if (VAR_5->bar) {

  FUNC_15(VAR_3);
  return 0;
 }

 VAR_6 = FUNC_7(VAR_4, VAR_5->target, VAR_5->action, VAR_5->token,
          VAR_5->offset, VAR_5->size, VAR_5->width.bar, 1);

 if (VAR_6 < 0) {
  VAR_7 = VAR_6;
  goto err_alloc_bar;
 }
 VAR_5->bar = &VAR_4->bar[VAR_6];


 if (FUNC_8(VAR_5->bar) ==
     VAR_2) {
  VAR_5->bar_offset = VAR_5->offset &
   (FUNC_1(VAR_5->bar) - 1);
  VAR_5->bar_offset += FUNC_2(
   VAR_5->bar, VAR_5->target);
  VAR_5->bar_offset += FUNC_3(
   VAR_5->bar, VAR_5->token);
 } else {
  VAR_5->bar_offset = VAR_5->offset & VAR_5->bar->mask;
 }






 VAR_5->phys = FUNC_10(VAR_5->bar) + VAR_5->bar_offset;
 VAR_5->resource.name = FUNC_12(VAR_3);
 VAR_5->resource.start = VAR_5->phys;
 VAR_5->resource.end = VAR_5->resource.start + VAR_5->size - 1;
 VAR_5->resource.flags = VAR_1;


 if (VAR_5->bar->iomem)
  VAR_5->iomem = VAR_5->bar->iomem + VAR_5->bar_offset;
 else

  VAR_5->iomem = FUNC_6(VAR_5->phys, VAR_5->size);

 if (FUNC_0(VAR_5->iomem)) {
  FUNC_5(VAR_4->dev, "Can't ioremap() a %d byte region of BAR %d\n",
   (int)VAR_5->size, VAR_5->bar->index);
  VAR_7 = !VAR_5->iomem ? -VAR_0 : FUNC_4(VAR_5->iomem);
  VAR_5->iomem = ((void*)0);
  goto err_iomem_remap;
 }

 FUNC_15(VAR_3);
 return 0;

err_iomem_remap:
 FUNC_9(VAR_4, VAR_5->bar);
 VAR_5->bar = ((void*)0);
err_alloc_bar:
 return VAR_7;
}

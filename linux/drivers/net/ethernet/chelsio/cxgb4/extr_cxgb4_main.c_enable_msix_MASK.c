
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sge {int max_ethqsets; int ofldqsets; int ethqsets; unsigned int nqs_per_uld; } ;
struct msix_entry {int entry; int vector; } ;
struct TYPE_8__ {int mapsize; } ;
struct TYPE_5__ {unsigned int nports; scalar_t__ crypto; scalar_t__ offload; } ;
struct adapter {int num_uld; int num_ofld_uld; int pdev_dev; TYPE_4__ msix_bmap_ulds; TYPE_3__* msix_info_ulds; TYPE_2__* msix_info; int pdev; TYPE_1__ params; struct sge sge; } ;
struct TYPE_7__ {int idx; int vec; } ;
struct TYPE_6__ {int vec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (struct adapter*) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 scalar_t__ FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct msix_entry*) ;
 struct msix_entry* FUNC_6 (int,int,int ) ;
 int FUNC_7 (int ,struct msix_entry*,int,int) ;
 int FUNC_8 (struct adapter*,int) ;

__attribute__((used)) static int FUNC_9(struct adapter *VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 struct sge *VAR_13 = &VAR_5->sge;
 unsigned int VAR_14 = VAR_5->params.nports;
 struct msix_entry *VAR_15;
 int VAR_16 = VAR_3;

 if (FUNC_3(VAR_5))
  VAR_16 += (VAR_4 * VAR_5->num_uld);
 if (FUNC_2(VAR_5))
  VAR_16 += (VAR_4 * VAR_5->num_ofld_uld);
 VAR_15 = FUNC_6(VAR_16 + 1, sizeof(*VAR_15),
    VAR_2);
 if (!VAR_15)
  return -VAR_0;


 if (FUNC_1(VAR_5)) {
  VAR_5->params.offload = 0;
  VAR_5->params.crypto = 0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_16 + 1; ++VAR_8)
  VAR_15[VAR_8].entry = VAR_8;

 VAR_10 = VAR_13->max_ethqsets + VAR_1;
 if (FUNC_2(VAR_5)) {
  VAR_10 += VAR_5->num_ofld_uld * VAR_13->ofldqsets;
  VAR_6 = VAR_5->num_ofld_uld * VAR_14;
 }
 if (FUNC_3(VAR_5)) {
  VAR_10 += VAR_5->num_uld * VAR_13->ofldqsets;
  VAR_7 = VAR_5->num_uld * VAR_14;
 }






 VAR_11 = VAR_5->params.nports + VAR_1 + VAR_6 + VAR_7;

 VAR_12 = FUNC_7(VAR_5->pdev, VAR_15, VAR_11, VAR_10);
 if (VAR_12 < 0) {
  FUNC_0(VAR_5->pdev_dev, "not enough MSI-X vectors left,"
    " not using MSI-X\n");
  FUNC_5(VAR_15);
  return VAR_12;
 }





 VAR_8 = VAR_12 - VAR_1 - VAR_6 - VAR_7;
 if (VAR_8 < VAR_13->max_ethqsets) {
  VAR_13->max_ethqsets = VAR_8;
  if (VAR_8 < VAR_13->ethqsets)
   FUNC_8(VAR_5, VAR_8);
 }
 if (FUNC_4(VAR_5)) {
  if (VAR_12 < VAR_10)
   VAR_13->nqs_per_uld = VAR_14;
  else
   VAR_13->nqs_per_uld = VAR_13->ofldqsets;
 }

 for (VAR_8 = 0; VAR_8 < (VAR_13->max_ethqsets + VAR_1); ++VAR_8)
  VAR_5->msix_info[VAR_8].vec = VAR_15[VAR_8].vector;
 if (FUNC_4(VAR_5)) {
  for (VAR_9 = 0 ; VAR_8 < VAR_12; ++VAR_8, VAR_9++) {
   VAR_5->msix_info_ulds[VAR_9].vec = VAR_15[VAR_8].vector;
   VAR_5->msix_info_ulds[VAR_9].idx = VAR_8;
  }
  VAR_5->msix_bmap_ulds.mapsize = VAR_9;
 }
 FUNC_0(VAR_5->pdev_dev, "%d MSI-X vectors allocated, "
   "nic %d per uld %d\n",
   VAR_12, VAR_13->max_ethqsets, VAR_13->nqs_per_uld);

 FUNC_5(VAR_15);
 return 0;
}

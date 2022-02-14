
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int name; } ;
struct cxgb4_lld_info {int iscsi_pgsz_order; scalar_t__* iscsi_ppm; TYPE_3__* vr; int iscsi_llimit; int pdev; struct net_device** ports; int iscsi_tagmask; } ;
struct cxgbit_device {int flags; struct cxgb4_lld_info lldi; } ;
struct cxgbi_tag_format {int* pgsz_order; } ;
struct TYPE_8__ {scalar_t__ pgsz_idx_dflt; } ;
struct cxgbi_ppm {int ppmax; TYPE_4__ tformat; } ;
struct TYPE_6__ {int size; int start; } ;
struct TYPE_5__ {unsigned int size; int start; } ;
struct TYPE_7__ {TYPE_2__ ppod_edram; TYPE_1__ iscsi; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (scalar_t__*,struct net_device*,int ,struct cxgb4_lld_info*,struct cxgbi_tag_format*,unsigned int,int ,int ,int,int ,int ) ;
 int FUNC_1 (int ,struct cxgbi_tag_format*) ;
 int FUNC_2 (struct cxgbi_tag_format*,int ,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct cxgbit_device *VAR_4)
{
 struct cxgb4_lld_info *VAR_5 = &VAR_4->lldi;
 struct net_device *VAR_6 = VAR_4->lldi.ports[0];
 struct cxgbi_tag_format VAR_7;
 unsigned int VAR_8;
 int VAR_9, VAR_10;

 if (!VAR_5->vr->iscsi.size) {
  FUNC_3("%s, iscsi NOT enabled, check config!\n", VAR_6->name);
  return -VAR_2;
 }

 VAR_8 = VAR_5->vr->iscsi.size >> VAR_3;

 FUNC_2(&VAR_7, 0, sizeof(struct cxgbi_tag_format));
 for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
  VAR_7.pgsz_order[VAR_10] = (VAR_5->iscsi_pgsz_order >> (VAR_10 << 3))
      & 0xF;
 FUNC_1(VAR_5->iscsi_tagmask, &VAR_7);

 VAR_9 = FUNC_0(VAR_5->iscsi_ppm, VAR_4->lldi.ports[0],
        VAR_4->lldi.pdev, &VAR_4->lldi, &VAR_7,
        VAR_5->vr->iscsi.size, VAR_5->iscsi_llimit,
        VAR_5->vr->iscsi.start, 2,
        VAR_5->vr->ppod_edram.start,
        VAR_5->vr->ppod_edram.size);
 if (VAR_9 >= 0) {
  struct cxgbi_ppm *VAR_11 = (struct cxgbi_ppm *)(*VAR_5->iscsi_ppm);

  if ((VAR_11->tformat.pgsz_idx_dflt < VAR_1) &&
      (VAR_11->ppmax >= 1024))
   FUNC_4(VAR_0, &VAR_4->flags);
  VAR_9 = 0;
 }

 return VAR_9;
}

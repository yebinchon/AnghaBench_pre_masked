
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {void* cstd_en; int cs_thres; void* cscn_en; } ;
struct qm_mcc_initcgr {TYPE_1__ cgr; int we_mask; } ;
struct TYPE_6__ {int cgrid; } ;
struct dpaa_priv {int use_ingress_cgr; TYPE_2__* mac_dev; TYPE_3__ ingress_cgr; } ;
typedef int initcgr ;
struct TYPE_5__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qm_mcc_initcgr*,int ,int) ;
 scalar_t__ FUNC_2 (struct dpaa_priv*) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int ,struct qm_mcc_initcgr*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct dpaa_priv *VAR_5)
{
 struct qm_mcc_initcgr VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_6(&VAR_5->ingress_cgr.cgrid);
 if (VAR_8 < 0) {
  if (FUNC_2(VAR_5))
   FUNC_4("Error %d allocating CGR ID\n", VAR_8);
  goto out_error;
 }


 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.we_mask = FUNC_0(VAR_4);
 VAR_6.cgr.cscn_en = VAR_2;
 VAR_7 = VAR_0;
 FUNC_5(&VAR_6.cgr.cs_thres, VAR_7, 1);

 VAR_6.we_mask |= FUNC_0(VAR_3);
 VAR_6.cgr.cstd_en = VAR_2;




 VAR_8 = FUNC_7(&VAR_5->ingress_cgr, VAR_1,
         &VAR_6);
 if (VAR_8 < 0) {
  if (FUNC_2(VAR_5))
   FUNC_4("Error %d creating ingress CGR with ID %d\n",
          VAR_8, VAR_5->ingress_cgr.cgrid);
  FUNC_8(VAR_5->ingress_cgr.cgrid);
  goto out_error;
 }
 if (FUNC_2(VAR_5))
  FUNC_3("Created ingress CGR %d for netdev with hwaddr %pM\n",
    VAR_5->ingress_cgr.cgrid, VAR_5->mac_dev->addr);

 VAR_5->use_ingress_cgr = 1;

out_error:
 return VAR_8;
}

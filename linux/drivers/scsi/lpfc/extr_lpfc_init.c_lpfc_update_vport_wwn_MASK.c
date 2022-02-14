
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u32 ;
struct TYPE_12__ {scalar_t__* wwn; } ;
struct TYPE_15__ {TYPE_3__ u; } ;
struct TYPE_11__ {int * vendorVersion; } ;
struct TYPE_10__ {int valid_vendor_ver_level; } ;
struct TYPE_14__ {TYPE_6__ portName; TYPE_6__ nodeName; TYPE_2__ un; TYPE_1__ cmn; } ;
struct lpfc_vport {int vport_flag; TYPE_6__ fc_portname; TYPE_5__ fc_sparam; TYPE_4__* phba; TYPE_6__ fc_nodename; } ;
struct lpfc_name {int dummy; } ;
struct TYPE_13__ {scalar_t__ cfg_soft_wwpn; scalar_t__ cfg_soft_wwnn; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_6__*,TYPE_6__*,int) ;
 int FUNC_2 (TYPE_6__*,TYPE_6__*,int) ;
 int FUNC_3 (scalar_t__,scalar_t__*) ;

void
FUNC_4(struct lpfc_vport *VAR_3)
{
 uint8_t VAR_4 = VAR_3->fc_sparam.cmn.valid_vendor_ver_level;
 u32 *VAR_5 = (u32 *)&VAR_3->fc_sparam.un.vendorVersion[0];


 if (VAR_3->phba->cfg_soft_wwnn)
  FUNC_3(VAR_3->phba->cfg_soft_wwnn,
      VAR_3->fc_sparam.nodeName.u.wwn);
 if (VAR_3->phba->cfg_soft_wwpn)
  FUNC_3(VAR_3->phba->cfg_soft_wwpn,
      VAR_3->fc_sparam.portName.u.wwn);





 if (VAR_3->fc_nodename.u.wwn[0] == 0 || VAR_3->phba->cfg_soft_wwnn)
  FUNC_2(&VAR_3->fc_nodename, &VAR_3->fc_sparam.nodeName,
   sizeof(struct lpfc_name));
 else
  FUNC_2(&VAR_3->fc_sparam.nodeName, &VAR_3->fc_nodename,
   sizeof(struct lpfc_name));





 if (VAR_3->fc_portname.u.wwn[0] != 0 &&
  FUNC_1(&VAR_3->fc_portname, &VAR_3->fc_sparam.portName,
   sizeof(struct lpfc_name)))
  VAR_3->vport_flag |= VAR_1;

 if (VAR_3->fc_portname.u.wwn[0] == 0 ||
     VAR_3->phba->cfg_soft_wwpn ||
     (VAR_4 == 1 && FUNC_0(*VAR_5) == VAR_0) ||
     VAR_3->vport_flag & VAR_2) {
  FUNC_2(&VAR_3->fc_portname, &VAR_3->fc_sparam.portName,
   sizeof(struct lpfc_name));
  VAR_3->vport_flag &= ~VAR_2;
  if (VAR_4 == 1 && FUNC_0(*VAR_5) == VAR_0)
   VAR_3->vport_flag |= VAR_2;
 }
 else
  FUNC_2(&VAR_3->fc_sparam.portName, &VAR_3->fc_portname,
   sizeof(struct lpfc_name));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num_reqq_elems; scalar_t__ num_rspq_elems; scalar_t__ num_sgpgs; } ;
struct TYPE_3__ {scalar_t__ num_rports; scalar_t__ num_ioim_reqs; scalar_t__ num_tskim_reqs; scalar_t__ num_fcxp_reqs; scalar_t__ num_uf_bufs; } ;
struct bfa_iocfc_cfg_s {TYPE_2__ drvcfg; TYPE_1__ fwcfg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

void
FUNC_0(struct bfa_iocfc_cfg_s *VAR_11)
{
 if (VAR_5 > 0)
  VAR_11->fwcfg.num_rports = VAR_5;
 if (VAR_4 > 0)
  VAR_11->fwcfg.num_ioim_reqs = VAR_4;
 if (VAR_7 > 0)
  VAR_11->fwcfg.num_tskim_reqs = VAR_7;
 if (VAR_3 > 0 && VAR_3 <= VAR_0)
  VAR_11->fwcfg.num_fcxp_reqs = VAR_3;
 if (VAR_8 > 0 && VAR_8 <= VAR_2)
  VAR_11->fwcfg.num_uf_bufs = VAR_8;
 if (VAR_9 > 0)
  VAR_11->drvcfg.num_reqq_elems = VAR_9;
 if (VAR_10 > 0)
  VAR_11->drvcfg.num_rspq_elems = VAR_10;
 if (VAR_6 > 0 && VAR_6 <= VAR_1)
  VAR_11->drvcfg.num_sgpgs = VAR_6;





 VAR_5 = VAR_11->fwcfg.num_rports;
 VAR_4 = VAR_11->fwcfg.num_ioim_reqs;
 VAR_7 = VAR_11->fwcfg.num_tskim_reqs;
 VAR_3 = VAR_11->fwcfg.num_fcxp_reqs;
 VAR_8 = VAR_11->fwcfg.num_uf_bufs;
 VAR_9 = VAR_11->drvcfg.num_reqq_elems;
 VAR_10 = VAR_11->drvcfg.num_rspq_elems;
 VAR_6 = VAR_11->drvcfg.num_sgpgs;
}

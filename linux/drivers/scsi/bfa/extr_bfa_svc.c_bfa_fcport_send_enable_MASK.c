
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int addr_hi; int addr_lo; } ;
struct TYPE_6__ {TYPE_2__ a32; } ;
struct TYPE_4__ {int maxfrsize; } ;
struct bfi_fcport_enable_req_s {int mh; TYPE_3__ stats_dma_addr; int use_flash_cfg; TYPE_1__ port_cfg; scalar_t__ msgtag; int pwwn; int nwwn; } ;
struct bfa_fcport_s {int bfa; int stats_pa; int use_flash_cfg; TYPE_1__ cfg; scalar_t__ msgtag; int pwwn; int nwwn; int reqq_wait; } ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__,int ) ;
 int FUNC_1 (int ) ;
 struct bfi_fcport_enable_req_s* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static bfa_boolean_t
FUNC_8(struct bfa_fcport_s *VAR_5)
{
 struct bfi_fcport_enable_req_s *VAR_6;





 VAR_5->msgtag++;




 VAR_6 = FUNC_2(VAR_5->bfa, VAR_1);
 if (!VAR_6) {
  FUNC_4(VAR_5->bfa, VAR_1,
       &VAR_5->reqq_wait);
  return VAR_0;
 }

 FUNC_6(VAR_6->mh, VAR_4, VAR_3,
   FUNC_1(VAR_5->bfa));
 VAR_6->nwwn = VAR_5->nwwn;
 VAR_6->pwwn = VAR_5->pwwn;
 VAR_6->port_cfg = VAR_5->cfg;
 VAR_6->msgtag = VAR_5->msgtag;
 VAR_6->port_cfg.maxfrsize = FUNC_7(VAR_5->cfg.maxfrsize);
  VAR_6->use_flash_cfg = VAR_5->use_flash_cfg;
 FUNC_0(VAR_6->stats_dma_addr, VAR_5->stats_pa);
 FUNC_5(VAR_5->bfa, VAR_6->stats_dma_addr.a32.addr_lo);
 FUNC_5(VAR_5->bfa, VAR_6->stats_dma_addr.a32.addr_hi);




 FUNC_3(VAR_5->bfa, VAR_1, VAR_6->mh);
 return VAR_2;
}

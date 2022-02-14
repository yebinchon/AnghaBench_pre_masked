
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct qbman_swp_desc {int qman_version; int cinh_bar; int cena_bar; } ;
struct TYPE_8__ {int dqrr_size; int reset_bug; void* valid_bit; scalar_t__ next_idx; } ;
struct TYPE_7__ {void* valid_bit; int available; } ;
struct TYPE_6__ {void* valid_bit; } ;
struct TYPE_5__ {void* valid_bit; } ;
struct qbman_swp {int sdq; struct qbman_swp_desc const* desc; TYPE_4__ dqrr; int addr_cena; int addr_cinh; TYPE_3__ vdq; TYPE_2__ mr; TYPE_1__ mc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct qbman_swp*) ;
 struct qbman_swp* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct qbman_swp*,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (int,int,int ,int,int,int,int,int,int,int,int ,int ) ;
 int FUNC_7 (struct qbman_swp*,int ,int) ;

struct qbman_swp *FUNC_8(const struct qbman_swp_desc *VAR_19)
{
 struct qbman_swp *VAR_20 = FUNC_2(sizeof(*VAR_20), VAR_0);
 u32 VAR_21;

 if (!VAR_20)
  return ((void*)0);
 VAR_20->desc = VAR_19;
 VAR_20->mc.valid_bit = VAR_8;
 VAR_20->sdq = 0;
 VAR_20->sdq |= VAR_17 << VAR_5;
 VAR_20->sdq |= VAR_18 << VAR_6;
 VAR_20->sdq |= VAR_13 << VAR_7;
 if ((VAR_20->desc->qman_version & VAR_11) >= VAR_10)
  VAR_20->mr.valid_bit = VAR_8;

 FUNC_0(&VAR_20->vdq.available, 1);
 VAR_20->vdq.valid_bit = VAR_8;
 VAR_20->dqrr.next_idx = 0;
 VAR_20->dqrr.valid_bit = VAR_8;

 if ((VAR_20->desc->qman_version & VAR_11) < VAR_9) {
  VAR_20->dqrr.dqrr_size = 4;
  VAR_20->dqrr.reset_bug = 1;
 } else {
  VAR_20->dqrr.dqrr_size = 8;
  VAR_20->dqrr.reset_bug = 0;
 }

 VAR_20->addr_cena = VAR_19->cena_bar;
 VAR_20->addr_cinh = VAR_19->cinh_bar;

 if ((VAR_20->desc->qman_version & VAR_11) >= VAR_10)
  FUNC_3(VAR_20->addr_cena, 0, 64 * 1024);

 VAR_21 = FUNC_6(VAR_20->dqrr.dqrr_size,
    1,
    0,
    3,
    2,
    3,
    1,
    1,
    1,
    1,
    0,
    0);
 if ((VAR_20->desc->qman_version & VAR_11) >= VAR_10)
  VAR_21 |= 1 << VAR_14 |
         1 << VAR_16 |
         1 << VAR_15;

 FUNC_7(VAR_20, VAR_1, VAR_21);
 VAR_21 = FUNC_5(VAR_20, VAR_1);
 if (!VAR_21) {
  FUNC_4("qbman: the portal is not enabled!\n");
  FUNC_1(VAR_20);
  return ((void*)0);
 }

 if ((VAR_20->desc->qman_version & VAR_11) >= VAR_10) {
  FUNC_7(VAR_20, VAR_2, VAR_12);
  FUNC_7(VAR_20, VAR_3, VAR_12);
 }






 FUNC_7(VAR_20, VAR_4, 0);
 return VAR_20;
}

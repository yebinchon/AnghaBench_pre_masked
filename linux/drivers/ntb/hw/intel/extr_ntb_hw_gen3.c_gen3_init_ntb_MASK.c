
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int topo; } ;
struct intel_ntb_dev {int db_count; int hwerr_flags; TYPE_3__* self_reg; scalar_t__ self_mmio; scalar_t__ db_valid_mask; TYPE_2__* reg; TYPE_1__ ntb; int * xlat_reg; int * peer_reg; scalar_t__ db_link_mask; int spad_count; int mw_count; } ;
struct TYPE_6__ {scalar_t__ db_mask; } ;
struct TYPE_5__ {int (* db_iowrite ) (scalar_t__,scalar_t__) ;} ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct intel_ntb_dev*,int *,int *) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_4(struct intel_ntb_dev *VAR_14)
{
 int VAR_15;


 VAR_14->mw_count = VAR_8;
 VAR_14->spad_count = VAR_3;
 VAR_14->db_count = VAR_1;
 VAR_14->db_link_mask = VAR_2;


 if (VAR_14->hwerr_flags & VAR_5)
  VAR_14->db_link_mask |= FUNC_0(31);

 switch (VAR_14->ntb.topo) {
 case 128:
 case 129:
  VAR_14->self_reg = &VAR_10;
  VAR_14->peer_reg = &VAR_9;
  VAR_14->xlat_reg = &VAR_11;

  if (VAR_14->ntb.topo == 128) {
   VAR_15 = FUNC_1(VAR_14,
           &VAR_12,
           &VAR_13);
  } else {
   VAR_15 = FUNC_1(VAR_14,
           &VAR_13,
           &VAR_12);
  }

  if (VAR_15)
   return VAR_15;


  FUNC_2(VAR_7 | VAR_6,
     VAR_14->self_mmio + VAR_4);

  break;

 default:
  return -VAR_0;
 }

 VAR_14->db_valid_mask = FUNC_0(VAR_14->db_count) - 1;

 VAR_14->reg->db_iowrite(VAR_14->db_valid_mask,
         VAR_14->self_mmio +
         VAR_14->self_reg->db_mask);

 return 0;
}

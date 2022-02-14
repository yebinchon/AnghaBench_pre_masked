
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {TYPE_1__* pdev; } ;
struct intel_ntb_dev {int hwerr_flags; int db_link_mask; int db_valid_mask; TYPE_3__ ntb; TYPE_2__* reg; int last_ts; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {scalar_t__ (* poll_link ) (struct intel_ntb_dev*) ;} ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int) ;
 int VAR_2 ;
 int FUNC_1 (struct intel_ntb_dev*,int) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (struct intel_ntb_dev*) ;

__attribute__((used)) static irqreturn_t FUNC_5(struct intel_ntb_dev *VAR_3, int VAR_4)
{
 u64 VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4);

 if ((VAR_3->hwerr_flags & VAR_1) && (VAR_4 == 31))
  VAR_5 |= VAR_3->db_link_mask;

 FUNC_0(&VAR_3->ntb.pdev->dev, "vec %d vec_mask %llx\n", VAR_4, VAR_5);

 VAR_3->last_ts = VAR_2;

 if (VAR_5 & VAR_3->db_link_mask) {
  if (VAR_3->reg->poll_link(VAR_3))
   FUNC_3(&VAR_3->ntb);
 }

 if (VAR_5 & VAR_3->db_valid_mask)
  FUNC_2(&VAR_3->ntb, VAR_4);

 return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct subchannel_id {scalar_t__ sch_no; } ;
struct qdio_ssqd_desc {int dummy; } ;
struct qdio_irq {scalar_t__ chsc_page; } ;
struct TYPE_2__ {int flags; scalar_t__ sch; } ;
struct chsc_ssqd_area {TYPE_1__ qdio_ssqd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct subchannel_id,struct chsc_ssqd_area*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct qdio_ssqd_desc*,TYPE_1__*,int) ;

int FUNC_5(struct qdio_irq *VAR_5,
   struct subchannel_id *VAR_6,
   struct qdio_ssqd_desc *VAR_7)
{
 struct chsc_ssqd_area *VAR_8;
 int VAR_9;

 FUNC_0("getssqd:%4x", VAR_6->sch_no);
 if (!VAR_5) {
  VAR_8 = (struct chsc_ssqd_area *)FUNC_1(VAR_4);
  if (!VAR_8)
   return -VAR_3;
 } else {
  VAR_8 = (struct chsc_ssqd_area *)VAR_5->chsc_page;
 }

 VAR_9 = FUNC_2(*VAR_6, VAR_8);
 if (VAR_9)
  goto out;

 if (!(VAR_8->qdio_ssqd.flags & VAR_0) ||
     !(VAR_8->qdio_ssqd.flags & VAR_1) ||
     (VAR_8->qdio_ssqd.sch != VAR_6->sch_no))
  VAR_9 = -VAR_2;

 if (!VAR_9)
  FUNC_4(VAR_7, &VAR_8->qdio_ssqd, sizeof(*VAR_7));

out:
 if (!VAR_5)
  FUNC_3((unsigned long)VAR_8);

 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct camif_vp {scalar_t__ id; struct camif_dev* camif; } ;
struct camif_dev {TYPE_1__* variant; } ;
struct camif_addr {int cr; int cb; int y; } ;
struct TYPE_2__ {scalar_t__ ip_revision; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct camif_dev*,int ,int ) ;
 int FUNC_4 (char*,int,int *,int *,int *) ;

void FUNC_5(struct camif_vp *VAR_2,
         struct camif_addr *VAR_3, int VAR_4)
{
 struct camif_dev *VAR_5 = VAR_2->camif;

 FUNC_3(VAR_5, FUNC_2(VAR_2->id, VAR_4), VAR_3->y);
 if (VAR_5->variant->ip_revision == VAR_0
  || VAR_2->id == VAR_1) {
  FUNC_3(VAR_5, FUNC_0(VAR_2->id, VAR_4),
        VAR_3->cb);
  FUNC_3(VAR_5, FUNC_1(VAR_2->id, VAR_4),
        VAR_3->cr);
 }

 FUNC_4("dst_buf[%d]: %pad, cb: %pad, cr: %pad\n",
   VAR_4, &VAR_3->y, &VAR_3->cb, &VAR_3->cr);
}

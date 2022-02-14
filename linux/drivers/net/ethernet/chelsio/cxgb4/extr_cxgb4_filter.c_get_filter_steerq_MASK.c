
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct port_info {int nqsets; size_t first_qset; } ;
struct net_device {int dummy; } ;
struct ch_filter_specification {int iq; int dirsteer; } ;
struct TYPE_5__ {TYPE_1__* ethrxq; } ;
struct adapter {TYPE_2__ sge; } ;
struct TYPE_6__ {int abs_id; } ;
struct TYPE_4__ {TYPE_3__ rspq; } ;


 int VAR_0 ;
 struct adapter* FUNC_0 (struct net_device*) ;
 struct port_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
        struct ch_filter_specification *VAR_2)
{
 struct adapter *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;






 if (!VAR_2->dirsteer) {
  if (VAR_2->iq)
   return -VAR_0;
  VAR_4 = 0;
 } else {
  struct port_info *VAR_5 = FUNC_1(VAR_1);




  if (VAR_2->iq < VAR_5->nqsets)
   VAR_4 = VAR_3->sge.ethrxq[VAR_5->first_qset +
       VAR_2->iq].rspq.abs_id;
  else
   VAR_4 = VAR_2->iq;
 }

 return VAR_4;
}

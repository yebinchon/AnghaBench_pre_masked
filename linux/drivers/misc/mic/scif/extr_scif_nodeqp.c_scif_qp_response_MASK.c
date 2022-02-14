
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node; } ;
struct scifmsg {TYPE_1__ dst; int uop; } ;
struct scif_dev {int node; int qpairs; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct scif_dev*,struct scifmsg*) ;
 int FUNC_1 (struct scif_dev*,int ,int ) ;

int FUNC_2(phys_addr_t VAR_1, struct scif_dev *VAR_2)
{
 int VAR_3 = 0;
 struct scifmsg VAR_4;

 VAR_3 = FUNC_1(VAR_2, VAR_2->qpairs, VAR_1);
 if (!VAR_3) {




  VAR_4.uop = VAR_0;
  VAR_4.dst.node = VAR_2->node;
  VAR_3 = FUNC_0(VAR_2, &VAR_4);
 }
 return VAR_3;
}

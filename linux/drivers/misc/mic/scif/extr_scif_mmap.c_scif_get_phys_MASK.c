
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scif_hw_dev {TYPE_1__* aper; scalar_t__ card_rel_da; } ;
struct scif_endpt {scalar_t__ remote_dev; } ;
struct scif_dev {struct scif_hw_dev* sdev; } ;
typedef scalar_t__ phys_addr_t ;
struct TYPE_2__ {scalar_t__ pa; } ;


 int FUNC_0 (struct scif_dev*) ;

__attribute__((used)) static phys_addr_t FUNC_1(phys_addr_t VAR_0, struct scif_endpt *VAR_1)
{
 struct scif_dev *VAR_2 = (struct scif_dev *)VAR_1->remote_dev;
 struct scif_hw_dev *VAR_3 = VAR_2->sdev;
 phys_addr_t VAR_4, VAR_5 = 0;





 if (!FUNC_0(VAR_2) && VAR_3->aper && VAR_3->card_rel_da)
  VAR_5 = VAR_3->aper->pa;
 VAR_4 = VAR_5 + VAR_0;
 return VAR_4;
}

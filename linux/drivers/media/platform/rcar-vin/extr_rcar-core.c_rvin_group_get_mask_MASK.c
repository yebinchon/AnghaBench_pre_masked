
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rvin_group_route {int mask; scalar_t__ vin; int csi; unsigned char channel; } ;
struct rvin_dev {scalar_t__ id; TYPE_1__* info; } ;
typedef enum rvin_csi_id { ____Placeholder_rvin_csi_id } rvin_csi_id ;
struct TYPE_2__ {struct rvin_group_route* routes; } ;


 int FUNC_0 (struct rvin_dev*,char*,scalar_t__,int,unsigned char) ;

__attribute__((used)) static unsigned int FUNC_1(struct rvin_dev *VAR_0,
     enum rvin_csi_id VAR_1,
     unsigned char VAR_2)
{
 const struct rvin_group_route *VAR_3;
 unsigned int VAR_4 = 0;

 for (VAR_3 = VAR_0->info->routes; VAR_3->mask; VAR_3++) {
  if (VAR_3->vin == VAR_0->id &&
      VAR_3->csi == VAR_1 &&
      VAR_3->channel == VAR_2) {
   FUNC_0(VAR_0,
    "Adding route: vin: %d csi: %d channel: %d\n",
    VAR_3->vin, VAR_3->csi, VAR_3->channel);
   VAR_4 |= VAR_3->mask;
  }
 }

 return VAR_4;
}

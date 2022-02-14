
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_bds_table; } ;
struct bdc_ep {TYPE_2__ bd_list; TYPE_1__* bdc; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,char*,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct bdc_ep *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1 / VAR_0->bd_list.num_bds_table;
 FUNC_0(VAR_0->bdc->dev,
  "bdi:%d num_bds_table:%d tbi:%d\n",
  VAR_1, VAR_0->bd_list.num_bds_table, VAR_2);

 return VAR_2;
}

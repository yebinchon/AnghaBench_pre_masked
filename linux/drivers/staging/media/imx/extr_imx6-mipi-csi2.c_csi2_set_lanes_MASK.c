
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_data_lanes; } ;
struct csi2_dev {scalar_t__ base; TYPE_1__ bus; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct csi2_dev *VAR_1)
{
 int VAR_2 = VAR_1->bus.num_data_lanes;

 FUNC_0(VAR_2 - 1, VAR_1->base + VAR_0);
}

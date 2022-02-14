
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct aq_nic_s {TYPE_2__* ndev; } ;
struct TYPE_3__ {struct device* parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;



__attribute__((used)) static inline struct device *FUNC_0(struct aq_nic_s *VAR_0)
{
 return VAR_0->ndev->dev.parent;
}

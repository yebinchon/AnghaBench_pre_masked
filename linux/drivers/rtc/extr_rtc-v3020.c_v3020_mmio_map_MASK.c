
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v3020_platform_data {int leftshift; } ;
struct v3020 {int * ioaddress; int leftshift; } ;
struct platform_device {int num_resources; TYPE_1__* resource; } ;
struct TYPE_2__ {scalar_t__ flags; int start; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct v3020 *VAR_2, struct platform_device *VAR_3,
     struct v3020_platform_data *VAR_4)
{
 if (VAR_3->num_resources != 1)
  return -VAR_0;

 if (VAR_3->resource[0].flags != VAR_1)
  return -VAR_0;

 VAR_2->leftshift = VAR_4->leftshift;
 VAR_2->ioaddress = FUNC_0(VAR_3->resource[0].start, 1);
 if (VAR_2->ioaddress == ((void*)0))
  return -VAR_0;

 return 0;
}

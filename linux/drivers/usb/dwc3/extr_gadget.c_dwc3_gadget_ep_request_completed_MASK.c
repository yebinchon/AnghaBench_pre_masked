
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ actual; scalar_t__ length; } ;
struct dwc3_request {TYPE_1__ request; } ;



__attribute__((used)) static bool FUNC_0(struct dwc3_request *VAR_0)
{
 return VAR_0->request.actual == VAR_0->request.length;
}

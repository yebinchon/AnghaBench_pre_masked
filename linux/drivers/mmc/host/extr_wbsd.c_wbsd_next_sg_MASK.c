
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wbsd_host {scalar_t__ num_sg; TYPE_1__* cur_sg; int remain; scalar_t__ offset; } ;
struct TYPE_2__ {int length; } ;



__attribute__((used)) static inline int FUNC_0(struct wbsd_host *VAR_0)
{



 VAR_0->cur_sg++;
 VAR_0->num_sg--;




 if (VAR_0->num_sg > 0) {
  VAR_0->offset = 0;
  VAR_0->remain = VAR_0->cur_sg->length;
 }

 return VAR_0->num_sg;
}

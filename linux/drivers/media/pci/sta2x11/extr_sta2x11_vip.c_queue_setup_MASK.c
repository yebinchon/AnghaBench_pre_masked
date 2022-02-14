
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_queue {int dummy; } ;
struct TYPE_2__ {unsigned int sizeimage; } ;
struct sta2x11_vip {scalar_t__ bcount; scalar_t__ tcount; int * active; scalar_t__ sequence; TYPE_1__ format; } ;
struct device {int dummy; } ;


 unsigned int VAR_0 ;
 struct sta2x11_vip* FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_1,
         unsigned int *VAR_2, unsigned int *VAR_3,
         unsigned int VAR_4[], struct device *VAR_5[])
{
 struct sta2x11_vip *VAR_6 = FUNC_0(VAR_1);

 if (!(*VAR_2) || *VAR_2 < VAR_0)
  *VAR_2 = VAR_0;

 *VAR_3 = 1;
 VAR_4[0] = VAR_6->format.sizeimage;

 VAR_6->sequence = 0;
 VAR_6->active = ((void*)0);
 VAR_6->tcount = 0;
 VAR_6->bcount = 0;

 return 0;
}

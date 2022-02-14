
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sring; } ;
struct vscsifrnt_info {TYPE_1__ ring; int ring_ref; int irq; } ;


 int FUNC_0 (int ,int ,unsigned long) ;
 int FUNC_1 (int ,struct vscsifrnt_info*) ;

__attribute__((used)) static void FUNC_2(struct vscsifrnt_info *VAR_0)
{
 FUNC_1(VAR_0->irq, VAR_0);
 FUNC_0(VAR_0->ring_ref, 0,
      (unsigned long)VAR_0->ring.sring);
}

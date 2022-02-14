
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpfe_device {unsigned long field_off; int ccdc; TYPE_2__* next_frm; } ;
struct TYPE_3__ {int vb2_buf; } ;
struct TYPE_4__ {TYPE_1__ vb; } ;


 unsigned long FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct vpfe_device *VAR_0)
{
 unsigned long VAR_1;

 VAR_1 = FUNC_0(&VAR_0->next_frm->vb.vb2_buf, 0) +
     VAR_0->field_off;

 FUNC_1(&VAR_0->ccdc, VAR_1);
}

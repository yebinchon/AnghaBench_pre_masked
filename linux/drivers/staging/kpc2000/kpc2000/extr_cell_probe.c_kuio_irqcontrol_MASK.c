
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct uio_info {struct kpc_uio_device* priv; } ;
struct TYPE_2__ {int irq_base_num; } ;
struct kpc_uio_device {TYPE_1__ cte; struct kp2000_device* pcard; } ;
struct kp2000_device {int sem; scalar_t__ sysinfo_regs_base; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static
int FUNC_5(struct uio_info *VAR_1, s32 VAR_2)
{
 struct kpc_uio_device *VAR_3 = VAR_1->priv;
 struct kp2000_device *VAR_4 = VAR_3->pcard;
 u64 VAR_5;

 FUNC_1(&VAR_4->sem);
 VAR_5 = FUNC_3(VAR_4->sysinfo_regs_base + VAR_0);
 if (VAR_2)
  VAR_5 &= ~(FUNC_0(VAR_3->cte.irq_base_num));
 else
  VAR_5 |= FUNC_0(VAR_3->cte.irq_base_num);
 FUNC_4(VAR_5, VAR_4->sysinfo_regs_base + VAR_0);
 FUNC_2(&VAR_4->sem);

 return 0;
}

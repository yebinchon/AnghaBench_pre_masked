
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsdfec_dev {int flags; int error_data_lock; scalar_t__ cecc_count; scalar_t__ uecc_count; scalar_t__ isr_err_count; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct xsdfec_dev *VAR_0)
{
 FUNC_0(&VAR_0->error_data_lock, VAR_0->flags);
 VAR_0->isr_err_count = 0;
 VAR_0->uecc_count = 0;
 VAR_0->cecc_count = 0;
 FUNC_1(&VAR_0->error_data_lock, VAR_0->flags);

 return 0;
}

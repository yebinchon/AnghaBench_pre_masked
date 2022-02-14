
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ufshcd_lrb {TYPE_2__* utr_descriptor_ptr; } ;
struct TYPE_3__ {int dword_2; } ;
struct TYPE_4__ {TYPE_1__ header; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct ufshcd_lrb *VAR_1)
{
 return FUNC_0(VAR_1->utr_descriptor_ptr->header.dword_2) & VAR_0;
}

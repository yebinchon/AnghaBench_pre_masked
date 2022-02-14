
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_if {TYPE_1__* drvr; } ;
typedef enum brcmf_feat_id { ____Placeholder_brcmf_feat_id } brcmf_feat_id ;
struct TYPE_2__ {int feat_flags; } ;


 int FUNC_0 (int) ;

bool FUNC_1(struct brcmf_if *VAR_0, enum brcmf_feat_id VAR_1)
{
 return (VAR_0->drvr->feat_flags & FUNC_0(VAR_1));
}

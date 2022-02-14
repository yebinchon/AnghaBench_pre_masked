
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int major; } ;
struct bfi_ioc_image_hdr_s {TYPE_1__ fwver; } ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bfa_boolean_t
FUNC_0(struct bfi_ioc_image_hdr_s *VAR_2)
{
 if (VAR_2->fwver.major == 0 || VAR_2->fwver.major == 0xFF)
  return VAR_0;

 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_ioc_image_hdr {scalar_t__* md5sum; } ;


 int VAR_0 ;

__attribute__((used)) static bool
FUNC_0(struct bfi_ioc_image_hdr *VAR_1,
   struct bfi_ioc_image_hdr *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->md5sum[VAR_3] != VAR_2->md5sum[VAR_3])
   return 0;
 }

 return 1;
}

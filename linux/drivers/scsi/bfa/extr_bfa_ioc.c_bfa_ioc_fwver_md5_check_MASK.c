
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_ioc_image_hdr_s {scalar_t__* md5sum; } ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bfa_boolean_t
FUNC_0(struct bfi_ioc_image_hdr_s *VAR_3,
    struct bfi_ioc_image_hdr_s *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  if (VAR_3->md5sum[VAR_5] != VAR_4->md5sum[VAR_5])
   return VAR_0;

 return VAR_1;
}

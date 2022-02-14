
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct esas2r_flash_img {int length; } ;
struct esas2r_flash_context {int fi_hdr_len; struct esas2r_flash_img* fi; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static u16 FUNC_1(struct esas2r_flash_context *VAR_0)
{
 struct esas2r_flash_img *VAR_1 = VAR_0->fi;
 u16 VAR_2;
 u32 VAR_3;
 u16 *VAR_4;

 for (VAR_3 = (VAR_1->length - VAR_0->fi_hdr_len) / 2,
      VAR_4 = (u16 *)((u8 *)VAR_1 + VAR_0->fi_hdr_len),
      VAR_2 = 0;
      VAR_3;
      VAR_3--, VAR_4++)
  VAR_2 = VAR_2 + FUNC_0(*VAR_4);

 return VAR_2;
}

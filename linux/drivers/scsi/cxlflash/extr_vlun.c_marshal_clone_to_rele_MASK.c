
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dk_cxlflash_release {int context_id; int hdr; } ;
struct dk_cxlflash_clone {int context_id_dst; int hdr; } ;



__attribute__((used)) static void FUNC_0(struct dk_cxlflash_clone *VAR_0,
      struct dk_cxlflash_release *VAR_1)
{
 VAR_1->hdr = VAR_0->hdr;
 VAR_1->context_id = VAR_0->context_id_dst;
}

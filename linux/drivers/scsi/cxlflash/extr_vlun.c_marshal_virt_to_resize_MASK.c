
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dk_cxlflash_uvirtual {int last_lba; int lun_size; int rsrc_handle; int context_id; int hdr; } ;
struct dk_cxlflash_resize {int last_lba; int req_size; int rsrc_handle; int context_id; int hdr; } ;



__attribute__((used)) static void FUNC_0(struct dk_cxlflash_uvirtual *VAR_0,
       struct dk_cxlflash_resize *VAR_1)
{
 VAR_1->hdr = VAR_0->hdr;
 VAR_1->context_id = VAR_0->context_id;
 VAR_1->rsrc_handle = VAR_0->rsrc_handle;
 VAR_1->req_size = VAR_0->lun_size;
 VAR_1->last_lba = VAR_0->last_lba;
}

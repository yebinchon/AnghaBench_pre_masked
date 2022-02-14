
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct bfi_flash_read_req {int alen; int mh; void* length; void* offset; int instance; void* type; } ;
struct TYPE_2__ {scalar_t__ msg; } ;
struct bfa_flash {scalar_t__ residue; TYPE_1__ mb; int ioc; int dbuf_pa; scalar_t__ offset; scalar_t__ addr_off; int instance; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3)
{
 struct bfa_flash *VAR_4 = VAR_3;
 struct bfi_flash_read_req *VAR_5 =
   (struct bfi_flash_read_req *) VAR_4->mb.msg;
 u32 VAR_6;

 VAR_5->type = FUNC_0(VAR_4->type);
 VAR_5->instance = VAR_4->instance;
 VAR_5->offset = FUNC_0(VAR_4->addr_off + VAR_4->offset);
 VAR_6 = (VAR_4->residue < VAR_0) ?
        VAR_4->residue : VAR_0;
 VAR_5->length = FUNC_0(VAR_6);
 FUNC_4(VAR_5->mh, VAR_2, VAR_1,
      FUNC_2(VAR_4->ioc));
 FUNC_1(&VAR_5->alen, VAR_6, VAR_4->dbuf_pa);
 FUNC_3(VAR_4->ioc, &VAR_4->mb, ((void*)0), ((void*)0));
}

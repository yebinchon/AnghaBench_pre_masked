
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfi_flash_erase_req_s {int mh; int instance; int type; } ;
struct TYPE_2__ {scalar_t__ msg; } ;
struct bfa_flash_s {TYPE_1__ mb; int ioc; int instance; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct bfa_flash_s *VAR_3 = VAR_2;
 struct bfi_flash_erase_req_s *VAR_4 =
   (struct bfi_flash_erase_req_s *) VAR_3->mb.msg;

 VAR_4->type = FUNC_0(VAR_3->type);
 VAR_4->instance = VAR_3->instance;
 FUNC_3(VAR_4->mh, VAR_1, VAR_0,
   FUNC_2(VAR_3->ioc));
 FUNC_1(VAR_3->ioc, &VAR_3->mb);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfi_ioc_getattr_req_s {int attr_addr; int mh; } ;
struct TYPE_2__ {int pa; } ;
struct bfa_ioc_s {TYPE_1__ attr_dma; } ;
typedef int attr_req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bfa_ioc_s*,struct bfi_ioc_getattr_req_s*,int) ;
 int FUNC_2 (struct bfa_ioc_s*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct bfa_ioc_s *VAR_2)
{
 struct bfi_ioc_getattr_req_s VAR_3;

 FUNC_3(VAR_3.mh, VAR_1, VAR_0,
      FUNC_2(VAR_2));
 FUNC_0(VAR_3.attr_addr, VAR_2->attr_dma.pa);
 FUNC_1(VAR_2, &VAR_3, sizeof(VAR_3));
}

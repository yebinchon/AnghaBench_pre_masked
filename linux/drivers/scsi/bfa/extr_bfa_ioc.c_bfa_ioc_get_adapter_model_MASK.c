
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bfi_ioc_attr_s {int card_type; } ;
struct TYPE_2__ {int device_id; } ;
struct bfa_ioc_s {TYPE_1__ pcidev; struct bfi_ioc_attr_s* attr; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct bfa_ioc_s*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (void*,int ,int ) ;
 int FUNC_5 (char*,int ,char*,char*,int,...) ;

void
FUNC_6(struct bfa_ioc_s *VAR_2, char *VAR_3)
{
 struct bfi_ioc_attr_s *VAR_4;
 u8 VAR_5 = FUNC_2(VAR_2);

 FUNC_0(!VAR_3);
 FUNC_4((void *)VAR_3, 0, VAR_0);

 VAR_4 = VAR_2->attr;

 if (FUNC_1(VAR_2->pcidev.device_id) &&
  (!FUNC_3(VAR_4->card_type)))
  FUNC_5(VAR_3, VAR_0, "%s-%u-%u%s",
   VAR_1, VAR_4->card_type, VAR_5, "p");
 else
  FUNC_5(VAR_3, VAR_0, "%s-%u",
   VAR_1, VAR_4->card_type);
}

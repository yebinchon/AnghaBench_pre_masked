
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_ioc_attr {int maxfrsize; void* card_type; void* adapter_prop; } ;
struct bfa_ioc {struct bfi_ioc_attr* attr; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_ioc*,int ) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct bfa_ioc *VAR_1)
{
 struct bfi_ioc_attr *VAR_2 = VAR_1->attr;

 VAR_2->adapter_prop = FUNC_1(VAR_2->adapter_prop);
 VAR_2->card_type = FUNC_1(VAR_2->card_type);
 VAR_2->maxfrsize = FUNC_2(VAR_2->maxfrsize);

 FUNC_0(VAR_1, VAR_0);
}

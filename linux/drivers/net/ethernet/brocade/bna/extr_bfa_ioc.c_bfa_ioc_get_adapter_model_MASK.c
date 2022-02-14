
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfi_ioc_attr {int card_type; } ;
struct bfa_ioc {struct bfi_ioc_attr* attr; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ,char*,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct bfa_ioc *VAR_2, char *VAR_3)
{
 struct bfi_ioc_attr *VAR_4;

 FUNC_0(!(VAR_3));
 FUNC_1(VAR_3, 0, VAR_0);

 VAR_4 = VAR_2->attr;

 FUNC_2(VAR_3, VAR_0, "%s-%u",
  VAR_1, VAR_4->card_type);
}

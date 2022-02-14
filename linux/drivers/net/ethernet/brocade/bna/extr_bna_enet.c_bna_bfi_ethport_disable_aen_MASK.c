
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_ethport {int flags; } ;
struct bfi_msgq_mhdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bna_ethport*,int ) ;
 int FUNC_1 (struct bna_ethport*) ;

__attribute__((used)) static void
FUNC_2(struct bna_ethport *VAR_2,
    struct bfi_msgq_mhdr *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_2);

 VAR_2->flags &= ~VAR_0;

 if (VAR_4)
  FUNC_0(VAR_2, VAR_1);
}

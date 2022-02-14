
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_transaction_info {int dummy; } ;
struct nilfs_sc_info {int sc_super; int sc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct nilfs_sc_info*,int) ;
 int FUNC_1 (struct nilfs_sc_info*) ;
 int FUNC_2 (int ,struct nilfs_transaction_info*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct nilfs_sc_info *VAR_1, int VAR_2)
{
 struct nilfs_transaction_info VAR_3;

 FUNC_2(VAR_1->sc_super, &VAR_3, 0);
 FUNC_0(VAR_1, VAR_2);






 if (FUNC_4(VAR_0, &VAR_1->sc_flags))
  FUNC_1(VAR_1);

 FUNC_3(VAR_1->sc_super);
}

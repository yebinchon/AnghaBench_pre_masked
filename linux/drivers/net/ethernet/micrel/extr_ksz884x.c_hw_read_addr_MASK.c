
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_hw {scalar_t__ id; int * override_addr; int * perm_addr; int mac_override; scalar_t__ io; } ;


 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct ksz_hw*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ksz_hw *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_3->perm_addr[FUNC_0(VAR_4)] = FUNC_4(VAR_3->io +
   VAR_2 + VAR_4);

 if (!VAR_3->mac_override) {
  FUNC_3(VAR_3->override_addr, VAR_3->perm_addr, VAR_1);
  if (FUNC_1(VAR_3->override_addr)) {
   FUNC_3(VAR_3->perm_addr, VAR_0, VAR_1);
   FUNC_3(VAR_3->override_addr, VAR_0,
          VAR_1);
   VAR_3->override_addr[5] += VAR_3->id;
   FUNC_2(VAR_3);
  }
 }
}

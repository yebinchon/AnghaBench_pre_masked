
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_hw {int * override_addr; scalar_t__ io; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (struct ksz_hw*,int *) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ksz_hw *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_2(VAR_2->override_addr[FUNC_0(VAR_3)],
   VAR_2->io + VAR_1 + VAR_3);

 FUNC_1(VAR_2, VAR_2->override_addr);
}

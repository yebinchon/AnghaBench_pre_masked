
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_hw {int * address; scalar_t__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ksz_hw*,int,int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ksz_hw *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (FUNC_0(VAR_3->address[VAR_4]))
   FUNC_2(0, VAR_3->io + VAR_1 * VAR_4 +
    VAR_2);
  else
   FUNC_1(VAR_3, VAR_4, VAR_3->address[VAR_4]);
 }
}

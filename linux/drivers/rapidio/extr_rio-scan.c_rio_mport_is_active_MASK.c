
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rio_mport {int phys_rmap; int index; scalar_t__ phys_efptr; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct rio_mport*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_2(struct rio_mport *VAR_1)
{
 u32 VAR_2 = 0;

 FUNC_1(VAR_1,
  VAR_1->phys_efptr +
   FUNC_0(VAR_1->index, VAR_1->phys_rmap),
  &VAR_2);
 return VAR_2 & VAR_0;
}

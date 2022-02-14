
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rio_mport {scalar_t__ phys_efptr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rio_mport*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_1(struct rio_mport *VAR_2)
{
 u32 VAR_3;

 FUNC_0(VAR_2, VAR_2->phys_efptr + VAR_0,
     &VAR_3);
 return (VAR_3 & VAR_1) ? 1 : 0;
}

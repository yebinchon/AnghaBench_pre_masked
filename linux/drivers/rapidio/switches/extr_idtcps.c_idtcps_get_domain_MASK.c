
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct rio_mport {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rio_mport*,int ,scalar_t__,int ,int*) ;

__attribute__((used)) static int
FUNC_1(struct rio_mport *VAR_1, u16 VAR_2, u8 VAR_3,
         u8 *VAR_4)
{
 u32 VAR_5;




 FUNC_0(VAR_1, VAR_2, VAR_3,
    VAR_0, &VAR_5);

 *VAR_4 = (u8)(VAR_5 & 0xff);

 return 0;
}

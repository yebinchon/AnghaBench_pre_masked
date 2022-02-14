
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rio_mport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rio_mport*,int ,int,int ,int*) ;
 int FUNC_1 (struct rio_mport*,int ,int,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct rio_mport *VAR_3, u16 VAR_4, u8 VAR_5,
         u8 VAR_6)
{
 u32 VAR_7;






 FUNC_0(VAR_3, VAR_4, VAR_5,
     VAR_1, &VAR_7);
 FUNC_1(VAR_3, VAR_4, VAR_5, VAR_1,
      VAR_7 & ~VAR_2);

 FUNC_1(VAR_3, VAR_4, VAR_5,
      VAR_0,
      (u32)(VAR_6 << 24));
 return 0;
}

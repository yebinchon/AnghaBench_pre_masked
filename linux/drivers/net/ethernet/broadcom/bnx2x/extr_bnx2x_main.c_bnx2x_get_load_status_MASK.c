
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bnx2x*,int ) ;

__attribute__((used)) static bool FUNC_2(struct bnx2x *VAR_7, int VAR_8)
{
 u32 VAR_9 = (VAR_8 ? VAR_2 :
        VAR_0);
 u32 VAR_10 = (VAR_8 ? VAR_3 :
        VAR_1);
 u32 VAR_11 = FUNC_1(VAR_7, VAR_4);

 FUNC_0(VAR_5 | VAR_6, "GLOB_REG=0x%08x\n", VAR_11);

 VAR_11 = (VAR_11 & VAR_9) >> VAR_10;

 FUNC_0(VAR_5 | VAR_6, "load mask for engine %d = 0x%x\n",
    VAR_8, VAR_11);

 return VAR_11 != 0;
}

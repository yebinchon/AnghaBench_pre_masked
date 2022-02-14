
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct code_entry {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int FUNC_1 (struct bnx2x*,int,int *) ;
 int FUNC_2 (struct bnx2x*,int *) ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_4, u8 *VAR_5)
{
 u32 VAR_6, VAR_7 = VAR_3;
 int VAR_8;

 FUNC_0(VAR_0 | VAR_1, "NVRAM DIRS CRC test-set\n");

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_6 = FUNC_1(VAR_4, VAR_7 +
           sizeof(struct code_entry) * VAR_8,
       VAR_5);
  if (VAR_6)
   return VAR_6;
 }

 return FUNC_2(VAR_4, VAR_5);
}

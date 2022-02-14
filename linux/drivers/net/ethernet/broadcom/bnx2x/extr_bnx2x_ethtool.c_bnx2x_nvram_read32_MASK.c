
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bnx2x*,int ,int *,int) ;

__attribute__((used)) static int FUNC_2(struct bnx2x *VAR_0, u32 VAR_1, u32 *VAR_2,
         int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1, (u8 *)VAR_2, VAR_3);

 if (!VAR_4) {
  __be32 *VAR_5 = (__be32 *)VAR_2;

  while ((VAR_3 -= 4) >= 0)
   *VAR_2++ = FUNC_0(*VAR_5++);
 }

 return VAR_4;
}

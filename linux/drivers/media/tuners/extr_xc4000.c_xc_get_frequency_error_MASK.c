
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct xc4000_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xc4000_priv*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct xc4000_priv *VAR_1, u32 *VAR_2)
{
 int VAR_3;
 u16 VAR_4;
 u32 VAR_5;

 VAR_3 = FUNC_0(VAR_1, VAR_0, &VAR_4);
 if (VAR_3 != 0)
  return VAR_3;

 VAR_5 = (u32)VAR_4 & 0xFFFFU;
 VAR_5 = (VAR_5 < 0x8000U ? VAR_5 : 0x10000U - VAR_5);
 (*VAR_2) = VAR_5 * 15625;
 return VAR_3;
}

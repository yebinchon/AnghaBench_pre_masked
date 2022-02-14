
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ks8851_net {int dummy; } ;
typedef scalar_t__ __le32 ;


 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct ks8851_net*,int ,int *,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static unsigned FUNC_4(struct ks8851_net *VAR_0, unsigned VAR_1)
{
 __le32 VAR_2 = 0;

 FUNC_1(VAR_1 & 3);

 FUNC_2(VAR_0, FUNC_0(0xf, VAR_1), (u8 *)&VAR_2, 4);
 return FUNC_3(VAR_2);
}

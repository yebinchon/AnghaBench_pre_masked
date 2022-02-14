
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1, u16 VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_1);
 u8 *VAR_4 = FUNC_2(VAR_1, VAR_3);
 __be16 *VAR_5;

 VAR_5 = (__be16 *)(VAR_4 + VAR_0);

 return VAR_2 == FUNC_1(*VAR_5);
}

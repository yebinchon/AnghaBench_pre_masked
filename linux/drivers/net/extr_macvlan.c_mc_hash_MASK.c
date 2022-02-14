
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct macvlan_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char const*) ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct macvlan_dev const*) ;

__attribute__((used)) static unsigned int FUNC_3(const struct macvlan_dev *VAR_1,
       const unsigned char *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2 + 2);

 VAR_3 ^= FUNC_2(VAR_1);
 return FUNC_1(VAR_3, VAR_0);
}

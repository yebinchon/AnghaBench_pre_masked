
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct if_spi_card {int dummy; } ;
typedef int __le16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct if_spi_card*,int ,int *,int) ;

__attribute__((used)) static inline int FUNC_2(struct if_spi_card *VAR_0, u16 VAR_1, u16 VAR_2)
{
 __le16 VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 return FUNC_1(VAR_0, VAR_1, (u8 *)&VAR_3, sizeof(u16));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct bcm_qspi {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct bcm_qspi*,int ,scalar_t__) ;

__attribute__((used)) static inline u16 FUNC_1(struct bcm_qspi *VAR_2, int VAR_3)
{
 u32 VAR_4 = VAR_1;
 u32 VAR_5 = VAR_4 + (VAR_3 << 3) + 0x4;
 u32 VAR_6 = VAR_4 + (VAR_3 << 3);

 return (FUNC_0(VAR_2, VAR_0, VAR_5) & 0xff) |
  ((FUNC_0(VAR_2, VAR_0, VAR_6) & 0xff) << 8);
}

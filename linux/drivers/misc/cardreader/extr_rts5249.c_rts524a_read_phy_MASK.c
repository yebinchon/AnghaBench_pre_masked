
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtsx_pcr {int dummy; } ;


 int FUNC_0 (struct rtsx_pcr*,int,int *) ;

__attribute__((used)) static int FUNC_1(struct rtsx_pcr *VAR_0, u8 VAR_1, u16 *VAR_2)
{
 VAR_1 = VAR_1 & 0x80 ? (VAR_1 & 0x7F) | 0x40 : VAR_1;

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}

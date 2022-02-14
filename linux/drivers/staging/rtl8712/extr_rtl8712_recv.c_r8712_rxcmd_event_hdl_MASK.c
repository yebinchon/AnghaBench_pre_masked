
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct recv_stat {int rxdw0; } ;
struct _adapter {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct _adapter*,int *) ;

void FUNC_3(struct _adapter *VAR_1, void *VAR_2)
{
 __le32 VAR_3;
 u8 *VAR_4;
 u16 VAR_5, VAR_6;
 struct recv_stat *VAR_7;

 VAR_4 = VAR_2;
 VAR_3 = *(__le32 *)VAR_4;
 VAR_7 = VAR_2;
 VAR_6 = (FUNC_1(VAR_7->rxdw0) & 0x000f0000) >> 16;
 VAR_6 <<= 3;
 VAR_4 += VAR_0 + VAR_6;
 do {
  VAR_3 = *(__le32 *)VAR_4;
  VAR_5 = (u16)(FUNC_1(VAR_3) & 0xffff);
  FUNC_2(VAR_1, (__le32 *)VAR_4);
  VAR_4 += (VAR_5 + 8);
 } while (FUNC_1(VAR_3) & FUNC_0(31));

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct rtsx_chip {int sgi; scalar_t__ host_sg_tbl_ptr; } ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(
 struct rtsx_chip *VAR_2, u32 VAR_3, u32 VAR_4, u8 VAR_5)
{
 __le64 *VAR_6 = (__le64 *)(VAR_2->host_sg_tbl_ptr);
 u64 VAR_7 = 0;
 u32 VAR_8 = 0;
 u8 VAR_9 = 0;

 do {
  if (VAR_4 > 0x80000) {
   VAR_8 = 0x80000;
   VAR_9 = VAR_5 & (~VAR_1);
  } else {
   VAR_8 = VAR_4;
   VAR_9 = VAR_5;
  }
  VAR_7 = ((u64)VAR_3 << 32) | ((u64)VAR_8 << 12) | VAR_9;

  if (VAR_2->sgi < (VAR_0 / 8))
   VAR_6[(VAR_2->sgi)++] = FUNC_0(VAR_7);

  VAR_4 -= VAR_8;
  VAR_3 += VAR_8;
 } while (VAR_4);
}

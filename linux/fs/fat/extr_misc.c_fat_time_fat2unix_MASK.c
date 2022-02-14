
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int time64_t ;
struct timespec64 {int tv_sec; int tv_nsec; } ;
struct msdos_sb_info {int dummy; } ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 scalar_t__* VAR_5 ;
 scalar_t__ FUNC_1 (struct msdos_sb_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;

void FUNC_4(struct msdos_sb_info *VAR_6, struct timespec64 *VAR_7,
         __le16 VAR_8, __le16 VAR_9, u8 VAR_10)
{
 u16 VAR_11 = FUNC_2(VAR_8), VAR_12 = FUNC_2(VAR_9);
 time64_t VAR_13;
 long VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_17 = VAR_12 >> 9;
 VAR_16 = FUNC_3(1, (VAR_12 >> 5) & 0xf);
 VAR_14 = FUNC_3(1, VAR_12 & 0x1f) - 1;

 VAR_15 = (VAR_17 + 3) / 4;
 if (VAR_17 > VAR_4)
  VAR_15--;
 if (FUNC_0(VAR_17) && VAR_16 > 2)
  VAR_15++;

 VAR_13 = (VAR_11 & 0x1f) << 1;
 VAR_13 += ((VAR_11 >> 5) & 0x3f) * VAR_3;
 VAR_13 += (VAR_11 >> 11) * VAR_2;
 VAR_13 += (time64_t)(VAR_17 * 365 + VAR_15
     + VAR_5[VAR_16] + VAR_14
     + VAR_0) * VAR_1;

 VAR_13 += FUNC_1(VAR_6);

 if (VAR_10) {
  VAR_7->tv_sec = VAR_13 + (VAR_10 / 100);
  VAR_7->tv_nsec = (VAR_10 % 100) * 10000000;
 } else {
  VAR_7->tv_sec = VAR_13;
  VAR_7->tv_nsec = 0;
 }
}

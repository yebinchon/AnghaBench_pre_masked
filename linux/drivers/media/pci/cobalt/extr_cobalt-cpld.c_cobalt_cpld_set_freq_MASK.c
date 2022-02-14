
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u64 ;
typedef unsigned int u32 ;
typedef int u16 ;
struct cobalt {int dummy; } ;
typedef int read_regs ;
struct TYPE_3__ {unsigned int mult; int n1; int hsdiv; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct cobalt*,int ) ;
 int FUNC_4 (struct cobalt*,int ,int) ;
 unsigned int FUNC_5 (unsigned int,unsigned int const) ;
 int FUNC_6 (unsigned int,unsigned int const,unsigned int*) ;
 int FUNC_7 (int*,int*,int) ;
 TYPE_1__* VAR_13 ;
 int FUNC_8 (int,int) ;

bool FUNC_9(struct cobalt *VAR_14, unsigned VAR_15)
{
 const unsigned VAR_16 = 39170000;
 u64 VAR_17;
 u64 VAR_18;
 unsigned VAR_19 = 0xffffffff;
 unsigned VAR_20 = 0;
 unsigned VAR_21;
 u8 VAR_22, VAR_23;
 u8 VAR_24[6];
 int VAR_25 = 0;
 u16 VAR_26;
 int VAR_27 = 3;

 for (VAR_21 = 0; VAR_21 < FUNC_0(VAR_13); VAR_21++) {
  unsigned VAR_28 = VAR_13[VAR_21].mult;
  u32 VAR_29;

  VAR_17 = (u64)VAR_15 * VAR_28;
  if (VAR_17 < VAR_1 || VAR_17 > VAR_0)
   continue;
  FUNC_6((VAR_17 << 28) + VAR_16 / 2, VAR_16, &VAR_29);
  if (VAR_29 < VAR_19) {
   VAR_25 = 1;
   VAR_20 = VAR_21;
   VAR_19 = VAR_29;
  }
 }
 if (!VAR_25)
  return 0;
 VAR_17 = (u64)VAR_15 * VAR_13[VAR_20].mult;
 VAR_22 = VAR_13[VAR_20].n1 - 1;
 VAR_23 = VAR_13[VAR_20].hsdiv - 4;
 VAR_18 = FUNC_5(VAR_17 << 28, VAR_16);

 VAR_26 = FUNC_3(VAR_14, VAR_6);
 VAR_26 |= VAR_3;
 VAR_26 |= VAR_2;

 VAR_24[0] = (VAR_23 << 5) | (VAR_22 >> 2);
 VAR_24[1] = ((VAR_22 & 0x3) << 6) | (VAR_18 >> 32);
 VAR_24[2] = (VAR_18 >> 24) & 0xff;
 VAR_24[3] = (VAR_18 >> 16) & 0xff;
 VAR_24[4] = (VAR_18 >> 8) & 0xff;
 VAR_24[5] = VAR_18 & 0xff;
 FUNC_1(1, "%u: %6ph\n", VAR_15, VAR_24);

 while (VAR_27--) {
  u8 VAR_30[6];

  FUNC_4(VAR_14, VAR_6,
   VAR_2 |
   VAR_3);
  FUNC_8(10000, 15000);
  FUNC_4(VAR_14, VAR_10, VAR_24[0]);
  FUNC_4(VAR_14, VAR_11, VAR_24[1]);
  FUNC_4(VAR_14, VAR_12, VAR_24[2]);
  FUNC_4(VAR_14, VAR_7, VAR_24[3]);
  FUNC_4(VAR_14, VAR_8, VAR_24[4]);
  FUNC_4(VAR_14, VAR_9, VAR_24[5]);
  FUNC_4(VAR_14, VAR_6,
   VAR_2 |
   VAR_5);
  FUNC_8(10000, 15000);
  FUNC_4(VAR_14, VAR_6,
   VAR_2 |
   VAR_3);
  FUNC_8(10000, 15000);
  VAR_30[0] = FUNC_3(VAR_14, VAR_10);
  VAR_30[1] = FUNC_3(VAR_14, VAR_11);
  VAR_30[2] = FUNC_3(VAR_14, VAR_12);
  VAR_30[3] = FUNC_3(VAR_14, VAR_7);
  VAR_30[4] = FUNC_3(VAR_14, VAR_8);
  VAR_30[5] = FUNC_3(VAR_14, VAR_9);
  FUNC_4(VAR_14, VAR_6,
   VAR_2 |
   VAR_3 |
   VAR_4);
  FUNC_8(10000, 15000);
  FUNC_4(VAR_14, VAR_6,
   VAR_2);
  FUNC_8(10000, 15000);

  if (!FUNC_7(VAR_30, VAR_24, sizeof(VAR_30)))
   break;
  FUNC_1(1, "retry: %6ph\n", VAR_30);
 }
 if (2 - VAR_27)
  FUNC_2("Needed %d retries\n", 2 - VAR_27);

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct go7007 {scalar_t__ ipb; } ;
typedef scalar_t__ __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__*,int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (struct go7007*,int *,int,int ) ;
 int FUNC_6 (struct go7007*,int *,int ) ;

__attribute__((used)) static int FUNC_7(struct go7007 *VAR_7,
     __le16 *VAR_8, int VAR_9, int *VAR_10)
{
 u8 *VAR_11;
 u16 VAR_12 = 0x3e00;
 unsigned int VAR_13 = 0x19;
 int VAR_14, VAR_15 = 0, VAR_16;

 VAR_11 = FUNC_2(5120, VAR_5);
 if (VAR_11 == ((void*)0))
  return -VAR_4;

 VAR_10[0] = FUNC_5(VAR_7, VAR_11, 0, VAR_6);
 VAR_14 = 368;
 VAR_10[1] = FUNC_5(VAR_7, VAR_11 + VAR_14, 0, VAR_3);
 VAR_14 += 1632;
 VAR_10[2] = FUNC_5(VAR_7, VAR_11 + VAR_14, 0, VAR_2);
 VAR_14 += 1432;
 VAR_10[3] = FUNC_5(VAR_7, VAR_11 + VAR_14, 0, VAR_0);
 VAR_14 += 1632;
 FUNC_5(VAR_7, VAR_11 + VAR_14, 0, VAR_1);
 VAR_14 += 16;
 FUNC_6(VAR_7, VAR_11 + VAR_14, 0);
 VAR_14 += 40;
 for (VAR_14 = 0; VAR_14 < 5120; VAR_14 += VAR_16 * 2) {
  if (VAR_9 - VAR_15 < 32) {
   VAR_15 = -1;
   goto done;
  }

  VAR_8[VAR_15 + 1] = FUNC_0(0x8000 | VAR_12);

  VAR_16 = 28;
  if (VAR_12 + VAR_16 > 0x4000)
   VAR_16 = 0x4000 - VAR_12;
  if (VAR_14 + 2 * VAR_16 > 5120)
   VAR_16 = (5120 - VAR_14) / 2;

  if (VAR_16 < 28) {
   VAR_8[VAR_15] = FUNC_0(0x4000 | VAR_16);
   VAR_8[VAR_15 + 31] = FUNC_0(VAR_13);
   if (VAR_12 + VAR_16 == 0x4000) {
    VAR_12 = 0x3e00;
    ++VAR_13;
   }
  } else {
   VAR_8[VAR_15] = FUNC_0(0x1000 | 28);
   VAR_8[VAR_15 + 31] = 0;
   VAR_12 += 28;
  }

  FUNC_3(&VAR_8[VAR_15 + 2], VAR_11 + VAR_14, VAR_16 * 2);
  VAR_15 += 32;
 }
 VAR_12 = 0x3e00;
 VAR_13 = VAR_7->ipb ? 0x14f9 : 0x0af9;
 FUNC_4(VAR_11, 0, 5120);
 VAR_10[4] = FUNC_5(VAR_7, VAR_11, 1, VAR_6);
 VAR_14 = 368;
 VAR_10[5] = FUNC_5(VAR_7, VAR_11 + VAR_14, 1, VAR_3);
 VAR_14 += 1632;
 VAR_10[6] = FUNC_5(VAR_7, VAR_11 + VAR_14, 1, VAR_2);
 VAR_14 += 1432;
 VAR_10[7] = FUNC_5(VAR_7, VAR_11 + VAR_14, 1, VAR_0);
 VAR_14 += 1632;
 FUNC_5(VAR_7, VAR_11 + VAR_14, 1, VAR_1);
 VAR_14 += 16;
 for (VAR_14 = 0; VAR_14 < 5120; VAR_14 += VAR_16 * 2) {
  if (VAR_9 - VAR_15 < 32) {
   VAR_15 = -1;
   goto done;
  }

  VAR_8[VAR_15 + 1] = FUNC_0(0x8000 | VAR_12);

  VAR_16 = 28;
  if (VAR_12 + VAR_16 > 0x4000)
   VAR_16 = 0x4000 - VAR_12;
  if (VAR_14 + 2 * VAR_16 > 5120)
   VAR_16 = (5120 - VAR_14) / 2;

  if (VAR_16 < 28) {
   VAR_8[VAR_15] = FUNC_0(0x4000 | VAR_16);
   VAR_8[VAR_15 + 31] = FUNC_0(VAR_13);
   if (VAR_12 + VAR_16 == 0x4000) {
    VAR_12 = 0x3e00;
    ++VAR_13;
   }
  } else {
   VAR_8[VAR_15] = FUNC_0(0x1000 | 28);
   VAR_8[VAR_15 + 31] = 0;
   VAR_12 += 28;
  }

  FUNC_3(&VAR_8[VAR_15 + 2], VAR_11 + VAR_14, VAR_16 * 2);
  VAR_15 += 32;
 }
done:
 FUNC_1(VAR_11);
 return VAR_15;
}

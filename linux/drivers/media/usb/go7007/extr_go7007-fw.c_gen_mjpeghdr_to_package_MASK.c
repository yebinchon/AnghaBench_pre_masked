
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct go7007 {int dummy; } ;
typedef scalar_t__ __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__*,int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct go7007*,int *,int) ;

__attribute__((used)) static int FUNC_6(struct go7007 *VAR_2, __le16 *VAR_3, int VAR_4)
{
 u8 *VAR_5;
 u16 VAR_6 = 0x3e00;
 unsigned int VAR_7 = 0x19;
 int VAR_8 = 0, VAR_9, VAR_10 = 0, VAR_11;

 VAR_5 = FUNC_2(4096, VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 for (VAR_9 = 1; VAR_9 < 32; ++VAR_9) {
  FUNC_5(VAR_2, VAR_5 + VAR_8, VAR_9);
  VAR_8 += 80;
 }
 VAR_11 = FUNC_5(VAR_2, VAR_5 + VAR_8, 1);
 FUNC_4(VAR_5 + VAR_8, VAR_5 + VAR_8 + 80, VAR_11 - 80);
 VAR_8 += VAR_11 - 80;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9 += VAR_11 * 2) {
  if (VAR_4 - VAR_10 < 32) {
   VAR_10 = -1;
   goto done;
  }

  VAR_3[VAR_10 + 1] = FUNC_0(0x8000 | VAR_6);

  VAR_11 = 28;
  if (VAR_6 + VAR_11 > 0x4000)
   VAR_11 = 0x4000 - VAR_6;
  if (VAR_9 + 2 * VAR_11 > VAR_8)
   VAR_11 = (VAR_8 - VAR_9) / 2;

  if (VAR_11 < 28) {
   VAR_3[VAR_10] = FUNC_0(0x4000 | VAR_11);
   VAR_3[VAR_10 + 31] = FUNC_0(VAR_7++);
   VAR_6 = 0x3e00;
  } else {
   VAR_3[VAR_10] = FUNC_0(0x1000 | 28);
   VAR_3[VAR_10 + 31] = 0;
   VAR_6 += 28;
  }

  FUNC_3(&VAR_3[VAR_10 + 2], VAR_5 + VAR_9, VAR_11 * 2);
  VAR_10 += 32;
 }
done:
 FUNC_1(VAR_5);
 return VAR_10;
}

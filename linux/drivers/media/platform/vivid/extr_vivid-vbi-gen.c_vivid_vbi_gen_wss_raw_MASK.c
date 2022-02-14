
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wss ;
typedef int u8 ;
typedef int u16 ;
struct v4l2_sliced_vbi_data {int* data; } ;


 int FUNC_0 (int *,unsigned int const,int) ;

__attribute__((used)) static void FUNC_1(const struct v4l2_sliced_vbi_data *VAR_0,
  u8 *VAR_1, unsigned VAR_2)
{
 const unsigned VAR_3 = 5000000;
 u8 VAR_4[29 + 24 + 24 + 24 + 18 + 18] = { 0 };
 const unsigned VAR_5 = 0x07;
 const unsigned VAR_6 = 0x38;
 unsigned VAR_7 = 0;
 u16 VAR_8;
 int VAR_9;

 FUNC_0(VAR_4 + VAR_7, 0x1f1c71c7, 29); VAR_7 += 29;
 FUNC_0(VAR_4 + VAR_7, 0x1e3c1f, 24); VAR_7 += 24;

 VAR_8 = (VAR_0->data[1] << 8) | VAR_0->data[0];
 for (VAR_9 = 0; VAR_9 <= 13; VAR_9++, VAR_7 += 6)
  FUNC_0(VAR_4 + VAR_7, (VAR_8 & (1 << VAR_9)) ? VAR_6 : VAR_5, 6);

 for (VAR_9 = 0, VAR_7 = 0; VAR_7 < sizeof(VAR_4); VAR_7++) {
  unsigned VAR_10 = ((VAR_7 + 1) * VAR_2) / VAR_3;

  while (VAR_9 < VAR_10)
   VAR_1[VAR_9++] = VAR_4[VAR_7];
 }
}

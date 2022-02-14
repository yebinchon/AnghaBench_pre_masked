
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int teletext ;
struct v4l2_sliced_vbi_data {int data; } ;


 int FUNC_0 (int*,int ,int) ;

__attribute__((used)) static void FUNC_1(const struct v4l2_sliced_vbi_data *VAR_0,
  u8 *VAR_1, unsigned VAR_2)
{
 const unsigned VAR_3 = 6937500 / 10;
 u8 VAR_4[45] = { 0x55, 0x55, 0x27 };
 unsigned VAR_5 = 0;
 int VAR_6;

 FUNC_0(VAR_4 + 3, VAR_0->data, sizeof(VAR_4) - 3);

 VAR_2 /= 10;

 for (VAR_6 = 0, VAR_5 = 0; VAR_5 < sizeof(VAR_4) * 8; VAR_5++) {
  unsigned VAR_7 = ((VAR_5 + 1) * VAR_2) / VAR_3;
  u8 VAR_8 = (VAR_4[VAR_5 / 8] & (1 << (VAR_5 & 7))) ? 0xc0 : 0x10;

  while (VAR_6 < VAR_7)
   VAR_1[VAR_6++] = VAR_8;
 }
}

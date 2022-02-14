
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct vim2m_q_data {struct vim2m_fmt* fmt; } ;
struct vim2m_fmt {int fourcc; } ;
typedef int __le16 ;
typedef int __be16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct vim2m_q_data *VAR_0,
       struct vim2m_q_data *VAR_1,
       u8 *VAR_2[2], u8 **VAR_3, int VAR_4, bool VAR_5)
{
 struct vim2m_fmt *VAR_6 = VAR_1->fmt;
 struct vim2m_fmt *VAR_7 = VAR_0->fmt;
 u8 VAR_8[2], VAR_9[2], VAR_10[2], *VAR_11, *VAR_12, *VAR_13;
 int VAR_14;



 VAR_11 = VAR_8;
 VAR_12 = VAR_9;
 VAR_13 = VAR_10;

 switch (VAR_7->fourcc) {
 case 134:
  for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
   u16 VAR_15 = FUNC_3(*(__le16 *)(VAR_2[VAR_14]));

   *VAR_11++ = (u8)(((VAR_15 & 0xf800) >> 11) << 3) | 0x07;
   *VAR_12++ = (u8)((((VAR_15 & 0x07e0) >> 5)) << 2) | 0x03;
   *VAR_13++ = (u8)((VAR_15 & 0x1f) << 3) | 0x07;
  }
  break;
 case 133:
  for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
   u16 VAR_16 = FUNC_0(*(__be16 *)(VAR_2[VAR_14]));

   *VAR_11++ = (u8)(((VAR_16 & 0xf800) >> 11) << 3) | 0x07;
   *VAR_12++ = (u8)((((VAR_16 & 0x07e0) >> 5)) << 2) | 0x03;
   *VAR_13++ = (u8)((VAR_16 & 0x1f) << 3) | 0x07;
  }
  break;
 default:
 case 135:
  for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
   *VAR_11++ = VAR_2[VAR_14][0];
   *VAR_12++ = VAR_2[VAR_14][1];
   *VAR_13++ = VAR_2[VAR_14][2];
  }
  break;
 case 136:
  for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
   *VAR_13++ = VAR_2[VAR_14][0];
   *VAR_12++ = VAR_2[VAR_14][1];
   *VAR_11++ = VAR_2[VAR_14][2];
  }
  break;
 }



 VAR_11 = VAR_8;
 VAR_12 = VAR_9;
 VAR_13 = VAR_10;

 switch (VAR_6->fourcc) {
 case 134:
  for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
   u16 VAR_17;
   __le16 *VAR_18 = (__le16 *)*VAR_3;

   VAR_17 = ((*VAR_11 << 8) & 0xf800) | ((*VAR_12 << 3) & 0x07e0) |
         (*VAR_13 >> 3);

   *VAR_18 = FUNC_2(VAR_17);

   *VAR_3 += 2;
  }
  return;
 case 133:
  for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
   u16 VAR_19;
   __be16 *VAR_20 = (__be16 *)*VAR_3;

   VAR_19 = ((*VAR_11 << 8) & 0xf800) | ((*VAR_12 << 3) & 0x07e0) |
         (*VAR_13 >> 3);

   *VAR_20 = FUNC_1(VAR_19);

   *VAR_3 += 2;
  }
  return;
 case 135:
  for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
   *(*VAR_3)++ = *VAR_11++;
   *(*VAR_3)++ = *VAR_12++;
   *(*VAR_3)++ = *VAR_13++;
  }
  return;
 case 136:
  for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
   *(*VAR_3)++ = *VAR_13++;
   *(*VAR_3)++ = *VAR_12++;
   *(*VAR_3)++ = *VAR_11++;
  }
  return;
 case 128:
 default:
 {
  u8 VAR_21, VAR_22, VAR_23, VAR_24;

  VAR_21 = ((8453 * (*VAR_11) + 16594 * (*VAR_12) + 3223 * (*VAR_13)
       + 524288) >> 15);
  VAR_23 = ((-4878 * (*VAR_11) - 9578 * (*VAR_12) + 14456 * (*VAR_13)
       + 4210688) >> 15);
  VAR_24 = ((14456 * (*VAR_11++) - 12105 * (*VAR_12++) - 2351 * (*VAR_13++)
       + 4210688) >> 15);
  VAR_22 = ((8453 * (*VAR_11) + 16594 * (*VAR_12) + 3223 * (*VAR_13)
       + 524288) >> 15);

  *(*VAR_3)++ = VAR_21;
  *(*VAR_3)++ = VAR_23;

  *(*VAR_3)++ = VAR_22;
  *(*VAR_3)++ = VAR_24;
  return;
 }
 case 132:
  if (!(VAR_4 & 1)) {
   *(*VAR_3)++ = *VAR_13;
   *(*VAR_3)++ = *++VAR_12;
  } else {
   *(*VAR_3)++ = *VAR_12;
   *(*VAR_3)++ = *++VAR_11;
  }
  return;
 case 131:
  if (!(VAR_4 & 1)) {
   *(*VAR_3)++ = *VAR_12;
   *(*VAR_3)++ = *++VAR_13;
  } else {
   *(*VAR_3)++ = *VAR_11;
   *(*VAR_3)++ = *++VAR_12;
  }
  return;
 case 130:
  if (!(VAR_4 & 1)) {
   *(*VAR_3)++ = *VAR_12;
   *(*VAR_3)++ = *++VAR_11;
  } else {
   *(*VAR_3)++ = *VAR_13;
   *(*VAR_3)++ = *++VAR_12;
  }
  return;
 case 129:
  if (!(VAR_4 & 1)) {
   *(*VAR_3)++ = *VAR_11;
   *(*VAR_3)++ = *++VAR_12;
  } else {
   *(*VAR_3)++ = *VAR_12;
   *(*VAR_3)++ = *++VAR_13;
  }
  return;
 }
}

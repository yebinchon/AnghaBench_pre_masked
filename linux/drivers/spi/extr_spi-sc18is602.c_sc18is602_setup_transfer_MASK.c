
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sc18is602 {int freq; int speed; int ctrl; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct sc18is602 *VAR_10, u32 VAR_11, u8 VAR_12)
{
 u8 VAR_13 = 0;
 int VAR_14;

 if (VAR_12 & VAR_7)
  VAR_13 |= VAR_4;
 if (VAR_12 & VAR_8)
  VAR_13 |= VAR_5;
 if (VAR_12 & VAR_9)
  VAR_13 |= VAR_6;


 if (VAR_11 >= VAR_10->freq / 4) {
  VAR_13 |= VAR_2;
  VAR_10->speed = VAR_10->freq / 4;
 } else if (VAR_11 >= VAR_10->freq / 16) {
  VAR_13 |= VAR_1;
  VAR_10->speed = VAR_10->freq / 16;
 } else if (VAR_11 >= VAR_10->freq / 64) {
  VAR_13 |= VAR_3;
  VAR_10->speed = VAR_10->freq / 64;
 } else {
  VAR_13 |= VAR_0;
  VAR_10->speed = VAR_10->freq / 128;
 }






 if (VAR_13 == VAR_10->ctrl)
  return 0;

 VAR_14 = FUNC_0(VAR_10->client, 0xf0, VAR_13);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_10->ctrl = VAR_13;

 return 0;
}

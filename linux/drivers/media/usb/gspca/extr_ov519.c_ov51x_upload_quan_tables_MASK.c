
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ bridge; } ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int FUNC_1 (struct sd*,int,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct sd *VAR_4)
{
 static const unsigned char VAR_5[] = {
  0, 1, 1, 2, 2, 3, 3, 4,
  1, 1, 1, 2, 2, 3, 4, 4,
  1, 1, 2, 2, 3, 4, 4, 4,
  2, 2, 2, 3, 4, 4, 4, 4,
  2, 2, 3, 4, 4, 5, 5, 5,
  3, 3, 4, 4, 5, 5, 5, 5,
  3, 4, 4, 4, 5, 5, 5, 5,
  4, 4, 4, 4, 5, 5, 5, 5
 };

 static const unsigned char VAR_6[] = {
  0, 2, 2, 3, 4, 4, 4, 4,
  2, 2, 2, 4, 4, 4, 4, 4,
  2, 2, 3, 4, 4, 4, 4, 4,
  3, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 4, 4, 4
 };


 static const unsigned char VAR_7[] = {
  5, 4, 5, 6, 6, 7, 7, 7,
  5, 5, 5, 5, 6, 7, 7, 7,
  6, 6, 6, 6, 7, 7, 7, 8,
  7, 7, 6, 7, 7, 7, 8, 8
 };
 static const unsigned char VAR_8[] = {
  6, 6, 6, 7, 7, 7, 7, 7,
  6, 6, 6, 7, 7, 7, 7, 7,
  6, 6, 6, 7, 7, 7, 7, 8,
  7, 7, 7, 7, 7, 7, 8, 8
 };

 struct gspca_dev *VAR_9 = (struct gspca_dev *)VAR_4;
 const unsigned char *VAR_10, *VAR_11;
 unsigned char VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16 = VAR_3;

 FUNC_0(VAR_9, VAR_2, "Uploading quantization tables\n");

 if (VAR_4->bridge == VAR_0 || VAR_4->bridge == VAR_1) {
  VAR_10 = VAR_5;
  VAR_11 = VAR_6;
  VAR_15 = 32;
 } else {
  VAR_10 = VAR_7;
  VAR_11 = VAR_8;
  VAR_15 = 16;
 }

 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
  VAR_12 = *VAR_10++;
  VAR_13 = *VAR_10++;
  VAR_12 &= 0x0f;
  VAR_13 &= 0x0f;
  VAR_12 |= VAR_13 << 4;
  FUNC_1(VAR_4, VAR_16, VAR_12);

  VAR_12 = *VAR_11++;
  VAR_13 = *VAR_11++;
  VAR_12 &= 0x0f;
  VAR_13 &= 0x0f;
  VAR_12 |= VAR_13 << 4;
  FUNC_1(VAR_4, VAR_16 + VAR_15, VAR_12);

  VAR_16++;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {struct hdcs* sensor_priv; } ;
struct TYPE_2__ {int cto; int rs; int er; } ;
struct hdcs {int psmp; int w; TYPE_1__ exp; } ;
struct gspca_dev {int dummy; } ;
typedef int __s32 ;


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
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (struct sd*) ;
 int FUNC_1 (struct gspca_dev*,int ,char*,int,int,int) ;
 int FUNC_2 (struct sd*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_12, __s32 VAR_13)
{
 struct sd *VAR_14 = (struct sd *) VAR_12;
 struct hdcs *VAR_15 = VAR_14->sensor_priv;
 int VAR_16, VAR_17;
 int VAR_18;

 int VAR_19;

 int VAR_20;

 int VAR_21;


 int VAR_22;
 int VAR_23, VAR_24;
 u8 VAR_25[14];

 VAR_23 = VAR_13 * VAR_8 * 257;

 VAR_19 = VAR_15->exp.cto + VAR_15->psmp + (VAR_7 + 2);
 VAR_20 = VAR_15->exp.cto + (VAR_15->w * VAR_19 / 2);


 VAR_21 = VAR_15->exp.rs + VAR_20;

 VAR_16 = VAR_23 / VAR_21;


 VAR_23 -= VAR_16 * VAR_21;


 if (FUNC_0(VAR_14)) {

  VAR_17 = VAR_15->w - (VAR_23 + VAR_15->exp.er + 13) / VAR_19;

  VAR_22 = (VAR_15->exp.er + 12 + VAR_19 - 1) / VAR_19;
  VAR_18 = VAR_15->w - VAR_22;
 } else {

  VAR_17 = VAR_20 - VAR_15->exp.er - 6 - VAR_23;

  VAR_22 = (VAR_15->exp.er + 5 + VAR_19 - 1) / VAR_19;
  VAR_18 = VAR_20 - VAR_22 * VAR_19 - 1;
 }

 if (VAR_17 < 0)
  VAR_17 = 0;
 else if (VAR_17 > VAR_18)
  VAR_17 = VAR_18;

 if (FUNC_0(VAR_14)) {
  VAR_25[0] = VAR_4;
  VAR_25[1] = 0x00;
  VAR_25[2] = VAR_10;
  VAR_25[3] = VAR_16 & 0xff;
  VAR_25[4] = VAR_9;
  VAR_25[5] = VAR_16 >> 8;
  VAR_25[6] = VAR_6;
  VAR_25[7] = (VAR_17 >> 2) & 0xff;
  VAR_25[8] = VAR_5;
  VAR_25[9] = 0x10;
  VAR_25[10] = VAR_4;
  VAR_25[11] = 0x04;
  VAR_24 = FUNC_2(VAR_14, VAR_25, 6);
 } else {
  VAR_25[0] = VAR_1;
  VAR_25[1] = 0x00;
  VAR_25[2] = VAR_10;
  VAR_25[3] = VAR_16 & 0xff;
  VAR_25[4] = VAR_9;
  VAR_25[5] = VAR_16 >> 8;
  VAR_25[6] = VAR_3;
  VAR_25[7] = VAR_17 & 0xff;
  VAR_25[8] = VAR_2;
  VAR_25[9] = VAR_17 >> 8;
  VAR_25[10] = VAR_11;
  VAR_25[11] = 0x10;
  VAR_25[12] = VAR_1;
  VAR_25[13] = 0x04;
  VAR_24 = FUNC_2(VAR_14, VAR_25, 7);
  if (VAR_24 < 0)
   return VAR_24;
 }
 FUNC_1(VAR_12, VAR_0, "Writing exposure %d, rowexp %d, srowexp %d\n",
    VAR_13, VAR_16, VAR_17);
 return VAR_24;
}

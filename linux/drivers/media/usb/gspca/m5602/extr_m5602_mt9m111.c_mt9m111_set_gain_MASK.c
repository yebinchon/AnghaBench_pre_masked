
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int dummy; } ;
struct gspca_dev {int dummy; } ;
typedef int __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int,int,int) ;
 int FUNC_1 (struct sd*,int ,int*,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_5, __s32 VAR_6)
{
 int VAR_7, VAR_8;
 u8 VAR_9[2] = {0x00, 0x00};
 struct sd *VAR_10 = (struct sd *) VAR_5;


 VAR_7 = FUNC_1(VAR_10, VAR_3, VAR_9, 2);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_6 >= VAR_2 * 2 * 2 * 2)
  return -VAR_1;

 if ((VAR_6 >= VAR_2 * 2 * 2) &&
     (VAR_6 < (VAR_2 - 1) * 2 * 2 * 2))
  VAR_8 = (1 << 10) | (VAR_6 << 9) |
    (VAR_6 << 8) | (VAR_6 / 8);
 else if ((VAR_6 >= VAR_2 * 2) &&
   (VAR_6 < VAR_2 * 2 * 2))
  VAR_8 = (1 << 9) | (1 << 8) | (VAR_6 / 4);
 else if ((VAR_6 >= VAR_2) &&
   (VAR_6 < VAR_2 * 2))
  VAR_8 = (1 << 8) | (VAR_6 / 2);
 else
  VAR_8 = VAR_6;

 VAR_9[1] = (VAR_8 & 0xff);
 VAR_9[0] = (VAR_8 & 0xff00) >> 8;
 FUNC_0(VAR_5, VAR_0, "tmp=%d, data[1]=%d, data[0]=%d\n", VAR_8,
    VAR_9[1], VAR_9[0]);

 VAR_7 = FUNC_1(VAR_10, VAR_4,
       VAR_9, 2);

 return VAR_7;
}

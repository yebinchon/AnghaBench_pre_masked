
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int dummy; } ;
struct gspca_dev {int dummy; } ;
typedef int __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int,int) ;
 int FUNC_2 (struct sd*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_6, __s32 VAR_7)
{
 int VAR_8;
 struct sd *VAR_9 = (struct sd *) VAR_6;
 unsigned int VAR_10, VAR_11;

 VAR_7 = (VAR_7 * VAR_7 >> 14) + VAR_7 / 4;

 VAR_10 = VAR_7 % VAR_1;
 VAR_11 = FUNC_1(512, VAR_7 / VAR_1);

 FUNC_0(VAR_6, VAR_0, "Set coarse exposure to %d, fine exposure to %d\n",
    VAR_11, VAR_10);

 VAR_8 = FUNC_2(VAR_9, VAR_4, VAR_10 >> 8);
 if (VAR_8 < 0)
  goto out;

 VAR_8 = FUNC_2(VAR_9, VAR_5, VAR_10 & 0xff);
 if (VAR_8 < 0)
  goto out;

 VAR_8 = FUNC_2(VAR_9, VAR_2, VAR_11 >> 8);
 if (VAR_8 < 0)
  goto out;

 VAR_8 = FUNC_2(VAR_9, VAR_3, VAR_11 & 0xff);

out:
 return VAR_8;
}

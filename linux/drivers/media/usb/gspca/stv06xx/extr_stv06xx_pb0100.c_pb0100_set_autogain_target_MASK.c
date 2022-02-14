
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int dummy; } ;
struct TYPE_2__ {int width; int height; } ;
struct gspca_dev {TYPE_1__ pixfmt; } ;
typedef int __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int,int) ;
 int FUNC_1 (struct sd*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_3, __s32 VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 struct sd *VAR_9 = (struct sd *) VAR_3;



 VAR_6 = VAR_3->pixfmt.width * VAR_3->pixfmt.height;
 VAR_6 = VAR_6/(8*8) + VAR_6/(64*64);

 VAR_7 = (VAR_6 * VAR_4) >> 8;
 VAR_8 = VAR_6 - VAR_7;
 VAR_5 = FUNC_1(VAR_9, VAR_1, VAR_7);
 if (!VAR_5)
  VAR_5 = FUNC_1(VAR_9, VAR_2, VAR_8);

 FUNC_0(VAR_3, VAR_0, "Set autogain target to %d, status: %d\n",
    VAR_4, VAR_5);

 return VAR_5;
}

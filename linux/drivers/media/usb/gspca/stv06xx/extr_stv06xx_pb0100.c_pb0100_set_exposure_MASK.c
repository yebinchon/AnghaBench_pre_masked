
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int dummy; } ;
struct gspca_dev {int dummy; } ;
typedef int __s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,char*,int ,int) ;
 int FUNC_1 (struct sd*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_2, __s32 VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_2;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_3);
 FUNC_0(VAR_2, VAR_0, "Set exposure to %d, status: %d\n",
    VAR_3, VAR_5);

 return VAR_5;
}

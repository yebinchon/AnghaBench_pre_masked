
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int dummy; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int FUNC_1 (struct sd*,int ) ;

__attribute__((used)) static int FUNC_2(struct sd *VAR_2)
{
 struct gspca_dev *VAR_3 = (struct gspca_dev *)VAR_2;

 FUNC_0(VAR_3, VAR_0, "Starting stream\n");

 return FUNC_1(VAR_2, VAR_1);
}

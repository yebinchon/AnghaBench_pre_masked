
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int dummy; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct sd *VAR_1)
{
 struct gspca_dev *VAR_2 = (struct gspca_dev *)VAR_1;

 FUNC_0(VAR_2, VAR_0, "Halting stream\n");

 return 0;
}

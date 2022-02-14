
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ subtype; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int FUNC_1 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;


 FUNC_0(VAR_2, VAR_0, "SPCA500 init\n");
 if (VAR_3->subtype == VAR_1)
  FUNC_1(VAR_2);


 FUNC_0(VAR_2, VAR_0, "SPCA500 init done\n");
 return 0;
}

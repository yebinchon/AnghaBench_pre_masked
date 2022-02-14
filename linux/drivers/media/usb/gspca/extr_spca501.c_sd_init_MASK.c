
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int subtype; } ;
struct gspca_dev {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct gspca_dev*,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct gspca_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_5;

 switch (VAR_6->subtype) {
 case 130:
 case 128:

  if (FUNC_1(VAR_5, VAR_3))
   goto error;
  break;
 case 129:

  if (FUNC_1(VAR_5, VAR_4))
   goto error;
  break;
 default:

  if (FUNC_1(VAR_5, VAR_2))
   goto error;
  break;
 }
 FUNC_0(VAR_5, VAR_0, "Initializing SPCA501 finished\n");
 return 0;
error:
 return -VAR_1;
}

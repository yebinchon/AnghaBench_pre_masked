
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ bridge; } ;
struct gspca_dev {int dummy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sd*,int ) ;
 int FUNC_1 (struct sd*) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1, s32 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;

 FUNC_0(VAR_3, VAR_2);


 if (VAR_3->bridge == VAR_0)
  FUNC_1(VAR_3);
}

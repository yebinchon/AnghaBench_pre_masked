
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scifmsg {scalar_t__ uop; } ;
struct scif_dev {scalar_t__ exit; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct device*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct scif_dev*,struct scifmsg*) ;
 struct device* FUNC_3 (struct scif_dev*) ;
 int FUNC_4 (struct device*) ;

int FUNC_5(struct scif_dev *VAR_3, struct scifmsg *VAR_4)
{
 int VAR_5;
 struct device *VAR_6 = ((void*)0);

 if (VAR_4->uop > VAR_2) {

  if (VAR_1 != VAR_3->exit)
   return -VAR_0;
  VAR_6 = FUNC_3(VAR_3);
  if (FUNC_0(VAR_6)) {
   VAR_5 = FUNC_1(VAR_6);
   return VAR_5;
  }
 }
 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_4->uop > VAR_2)
  FUNC_4(VAR_6);
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ context; } ;
struct gspca_dev {int streaming; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,struct urb*) ;
 int FUNC_1 (struct gspca_dev*,int ,char*) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_1)
{
 struct gspca_dev *VAR_2 = (struct gspca_dev *) VAR_1->context;

 FUNC_1(VAR_2, VAR_0, "isoc irq\n");
 if (!VAR_2->streaming)
  return;
 FUNC_0(VAR_2, VAR_1);
}

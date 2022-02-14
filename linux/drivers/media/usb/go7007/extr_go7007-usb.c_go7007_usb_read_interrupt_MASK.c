
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007_usb {int intr_urb; } ;
struct go7007 {int dev; struct go7007_usb* hpi_context; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct go7007 *VAR_1)
{
 struct go7007_usb *VAR_2 = VAR_1->hpi_context;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->intr_urb, VAR_0);
 if (VAR_3 < 0) {
  FUNC_0(VAR_1->dev, "unable to submit interrupt urb: %d\n", VAR_3);
  return VAR_3;
 }
 return 0;
}

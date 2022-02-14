
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {struct hwarc* priv; } ;
struct hwarc {int usb_dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static
int FUNC_3(struct uwb_rc *VAR_0)
{
 struct hwarc *VAR_1 = VAR_0->priv;
 int VAR_2;


 VAR_2 = FUNC_0(VAR_1->usb_dev, ((void*)0));
 if (VAR_2 >= 0) {
  VAR_2 = FUNC_1(VAR_1->usb_dev);
  FUNC_2(VAR_1->usb_dev);
 }

 return VAR_2;
}

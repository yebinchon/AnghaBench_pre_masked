
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3_ep {scalar_t__ num; scalar_t__ started; } ;


 int VAR_0 ;
 int FUNC_0 (struct renesas_usb3_ep*,int) ;
 int FUNC_1 (struct renesas_usb3_ep*,int,int) ;

__attribute__((used)) static int FUNC_2(struct renesas_usb3_ep *VAR_1, bool VAR_2,
    bool VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2 && VAR_1->started)
  return -VAR_0;

 if (VAR_1->num)
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 else
  VAR_4 = FUNC_0(VAR_1, VAR_2);

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfa384x_usbctlx {int done; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 struct hfa384x_usbctlx* FUNC_2 (int,int ) ;

__attribute__((used)) static struct hfa384x_usbctlx *FUNC_3(void)
{
 struct hfa384x_usbctlx *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2),
         FUNC_0() ? VAR_0 : VAR_1);
 if (VAR_2)
  FUNC_1(&VAR_2->done);

 return VAR_2;
}

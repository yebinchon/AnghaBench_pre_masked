
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3 {int dentry; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int,int ,struct renesas_usb3*,int *) ;
 int FUNC_2 (struct device*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct renesas_usb3 *VAR_1,
          struct device *VAR_2)
{
 VAR_1->dentry = FUNC_0(FUNC_2(VAR_2), ((void*)0));

 FUNC_1("b_device", 0644, VAR_1->dentry, VAR_1,
       &VAR_0);
}

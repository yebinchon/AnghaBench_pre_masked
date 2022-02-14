
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbg_cmd {int is_read; } ;


 int FUNC_0 (struct usbg_cmd*,int) ;

__attribute__((used)) static int FUNC_1(struct usbg_cmd *VAR_0)
{
 bool VAR_1 = 0;

 if (!VAR_0->is_read)
  VAR_1 = 1;
 return FUNC_0(VAR_0, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r592_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct r592_device*,int ,int ) ;
 int FUNC_3 (struct r592_device*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct r592_device *VAR_5, bool VAR_6)
{
 FUNC_0("%sabling the device", VAR_6 ? "en" : "dis");

 if (VAR_6) {


  FUNC_3(VAR_5, VAR_2, VAR_3 | VAR_4);


  FUNC_2(VAR_5, VAR_0, VAR_1);

  FUNC_1(100);
 } else

  FUNC_3(VAR_5, VAR_2, 0);

 return 0;
}

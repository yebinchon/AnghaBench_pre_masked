
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3,
 int VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_4 != VAR_1) {
  FUNC_1(VAR_3, "PWRREQ2 is invalid control for rail %d\n", VAR_4);
  return -VAR_0;
 }

 VAR_6 = FUNC_2(VAR_3, VAR_2, FUNC_0(2));
 if (VAR_6 < 0)
  FUNC_1(VAR_3, "Error in updating the ONOFFSEL 0x10 register\n");
 return VAR_6;
}

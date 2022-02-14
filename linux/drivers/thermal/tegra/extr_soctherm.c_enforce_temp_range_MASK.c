
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct device*,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_0);
 if (VAR_4 != VAR_3)
  FUNC_1(VAR_2, "soctherm: trip temperature %d forced to %d\n",
    VAR_3, VAR_4);
 return VAR_4;
}

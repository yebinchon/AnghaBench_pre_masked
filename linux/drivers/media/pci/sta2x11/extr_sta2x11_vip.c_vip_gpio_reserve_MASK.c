
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int,char const*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char const*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1, int VAR_2, int VAR_3,
       const char *VAR_4)
{
 int VAR_5 = -VAR_0;

 if (!FUNC_4(VAR_2))
  return VAR_5;

 VAR_5 = FUNC_5(VAR_2, VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_1, "Failed to allocate pin %d (%s)\n", VAR_2, VAR_4);
  return VAR_5;
 }

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_1, "Failed to set direction for pin %d (%s)\n",
   VAR_2, VAR_4);
  FUNC_3(VAR_2);
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_2, 0);
 if (VAR_5) {
  FUNC_0(VAR_1, "Failed to export pin %d (%s)\n", VAR_2, VAR_4);
  FUNC_3(VAR_2);
  return VAR_5;
 }

 return 0;
}

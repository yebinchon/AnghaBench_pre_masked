
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int ** VAR_1 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_4(int VAR_2, struct device *VAR_3)
{
 struct device_node *VAR_4;
 static bool VAR_5 = 0;
 static bool VAR_6 = 0;
 int VAR_7 = VAR_2;

 if (!FUNC_1(VAR_0))
  return VAR_7;

 VAR_4 = VAR_3->of_node;
 if (!VAR_4)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_4, "serial");
 if (VAR_7 < 0) {
  VAR_6 = 1;
  VAR_7 = VAR_2;
 } else {
  VAR_5 = 1;
  if (VAR_7 >= FUNC_0(VAR_1) || VAR_1[VAR_7] != ((void*)0)) {
   FUNC_2(VAR_3, "requested serial port %d  not available.\n", VAR_7);
   VAR_7 = VAR_2;
  }
 }

 if (VAR_5 && VAR_6)
  FUNC_2(VAR_3, "aliased and non-aliased serial devices found in device tree. Serial port enumeration may be unpredictable.\n");

 return VAR_7;
}

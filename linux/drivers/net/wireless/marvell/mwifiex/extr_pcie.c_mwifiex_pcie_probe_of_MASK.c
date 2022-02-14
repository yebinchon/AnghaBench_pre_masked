
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2)
{
 if (!FUNC_1(VAR_1, VAR_2->of_node)) {
  FUNC_0(VAR_2, "required compatible string missing\n");
  return -VAR_0;
 }

 return 0;
}

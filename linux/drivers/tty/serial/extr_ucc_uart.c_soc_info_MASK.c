
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {char* name; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 struct device_node* FUNC_1 (int *,char*) ;
 char* FUNC_2 (struct device_node*,char*,int *) ;
 int FUNC_3 (char const*,char*,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_4(unsigned int *VAR_1, unsigned int *VAR_2)
{
 struct device_node *VAR_3;
 const char *VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;


 VAR_3 = FUNC_1(((void*)0), "cpu");
 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_2(VAR_3, "compatible", ((void*)0));
 if (!VAR_4)

  VAR_4 = VAR_3->name;


 if ((FUNC_3(VAR_4, "PowerPC,%u", &VAR_6) != 1) || !VAR_6)
  return 0;


 VAR_5 = FUNC_0(VAR_0);
 *VAR_1 = (VAR_5 >> 4) & 0xf;
 *VAR_2 = VAR_5 & 0xf;

 return VAR_6;
}

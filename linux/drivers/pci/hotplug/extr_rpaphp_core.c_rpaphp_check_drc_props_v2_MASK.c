
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct of_drc_info {unsigned int last_drc_index; char* drc_name_prefix; char* drc_type; } ;
struct device_node {int parent; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct property* FUNC_0 (int ,char*,int *) ;
 int * FUNC_1 (struct property*,int *,unsigned int*) ;
 int FUNC_2 (struct property**,int const**,struct of_drc_info*) ;
 int FUNC_3 (char*,char*,char*,unsigned int) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int FUNC_5(struct device_node *VAR_2, char *VAR_3,
    char *VAR_4, unsigned int VAR_5)
{
 struct property *VAR_6;
 unsigned int VAR_7;
 struct of_drc_info VAR_8;
 const __be32 *VAR_9;
 char VAR_10[VAR_1];
 int VAR_11;

 VAR_6 = FUNC_0(VAR_2->parent, "ibm,drc-info", ((void*)0));
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_6, ((void*)0), &VAR_7);
 if (!VAR_9)
  return -VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  FUNC_2(&VAR_6, &VAR_9, &VAR_8);




  if (VAR_5 <= VAR_8.last_drc_index) {
   FUNC_3(VAR_10, "%s%d", VAR_8.drc_name_prefix,
    VAR_5);
   break;
  }
 }

 if (((VAR_3 == ((void*)0)) ||
      (VAR_3 && !FUNC_4(VAR_3, VAR_10))) &&
     ((VAR_4 == ((void*)0)) ||
      (VAR_4 && !FUNC_4(VAR_4, VAR_8.drc_type))))
  return 0;

 return -VAR_0;
}

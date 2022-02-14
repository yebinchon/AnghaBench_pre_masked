
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int parent; } ;


 int VAR_0 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int ,int const**,int const**,int const**,int const**) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct device_node *VAR_1, char *VAR_2,
    char *VAR_3, unsigned int VAR_4)
{
 char *VAR_5, *VAR_6;
 const int *VAR_7, *VAR_8;
 const int *VAR_9, *VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = FUNC_1(VAR_1->parent, &VAR_7, &VAR_8, &VAR_9, &VAR_10);
 if (VAR_12 < 0) {
  return -VAR_0;
 }

 VAR_5 = (char *) &VAR_8[1];
 VAR_6 = (char *) &VAR_9[1];


 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_7[0]); VAR_11++) {
  if ((unsigned int) VAR_7[VAR_11 + 1] == VAR_4)
   break;

  VAR_5 += (FUNC_3(VAR_5) + 1);
  VAR_6 += (FUNC_3(VAR_6) + 1);
 }

 if (((VAR_2 == ((void*)0)) || (VAR_2 && !FUNC_2(VAR_2, VAR_5))) &&
     ((VAR_3 == ((void*)0)) || (VAR_3 && !FUNC_2(VAR_3, VAR_6))))
  return 0;

 return -VAR_0;
}

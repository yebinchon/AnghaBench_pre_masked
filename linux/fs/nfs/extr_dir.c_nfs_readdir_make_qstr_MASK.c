
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {unsigned int len; int hash; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char const*,unsigned int) ;
 int * FUNC_1 (char const*,unsigned int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
int FUNC_3(struct qstr *VAR_2, const char *VAR_3, unsigned int VAR_4)
{
 VAR_2->len = VAR_4;
 VAR_2->name = FUNC_1(VAR_3, VAR_4, VAR_1);
 if (VAR_2->name == ((void*)0))
  return -VAR_0;




 FUNC_2(VAR_2->name);
 VAR_2->hash = FUNC_0(((void*)0), VAR_3, VAR_4);
 return 0;
}

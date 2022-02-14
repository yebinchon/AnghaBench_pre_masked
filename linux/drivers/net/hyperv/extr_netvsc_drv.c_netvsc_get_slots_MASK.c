
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {char* data; } ;


 int FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 unsigned int FUNC_2 (char*) ;
 unsigned int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1)
{
 char *VAR_2 = VAR_1->data;
 unsigned int VAR_3 = FUNC_2(VAR_2);
 unsigned int VAR_4 = FUNC_3(VAR_1);
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_3 + VAR_4, VAR_0);
 VAR_6 = FUNC_1(VAR_1);
 return VAR_5 + VAR_6;
}

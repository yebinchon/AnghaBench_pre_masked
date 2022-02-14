
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,unsigned int*,int ,int *,int *) ;
 unsigned int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline bool FUNC_2(struct sk_buff *VAR_1)
{
 unsigned int VAR_2 = 0;

 FUNC_0(VAR_1, &VAR_2, VAR_0, ((void*)0), ((void*)0));

 return VAR_2 == FUNC_1(VAR_1);
}

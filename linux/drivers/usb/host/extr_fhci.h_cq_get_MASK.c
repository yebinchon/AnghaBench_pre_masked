
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kfifo {int dummy; } ;
typedef int p ;


 unsigned int FUNC_0 (struct kfifo*,void*,int) ;

__attribute__((used)) static inline void *FUNC_1(struct kfifo *VAR_0)
{
 unsigned int VAR_1;
 void *VAR_2;

 VAR_1 = FUNC_0(VAR_0, (void *)&VAR_2, sizeof(VAR_2));
 if (VAR_1 != sizeof(VAR_2))
  return ((void*)0);

 return VAR_2;
}

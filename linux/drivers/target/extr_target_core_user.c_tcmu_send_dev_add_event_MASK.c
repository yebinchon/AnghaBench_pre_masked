
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmu_dev {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcmu_dev*,int ,struct sk_buff**,void**) ;
 int FUNC_1 (struct tcmu_dev*,int ,struct sk_buff*,void*) ;

__attribute__((used)) static int FUNC_2(struct tcmu_dev *VAR_1)
{
 struct sk_buff *VAR_2 = ((void*)0);
 void *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 VAR_4 = FUNC_0(VAR_1, VAR_0, &VAR_2,
          &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;
 return FUNC_1(VAR_1, VAR_0, VAR_2,
           VAR_3);
}

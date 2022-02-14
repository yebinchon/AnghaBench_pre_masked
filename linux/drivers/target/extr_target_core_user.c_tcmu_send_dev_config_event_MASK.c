
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmu_dev {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,char const*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct tcmu_dev*,int ,struct sk_buff**,void**) ;
 int FUNC_3 (struct tcmu_dev*,int ,struct sk_buff*,void*) ;

__attribute__((used)) static int FUNC_4(struct tcmu_dev *VAR_2,
          const char *VAR_3)
{
 struct sk_buff *VAR_4 = ((void*)0);
 void *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 VAR_6 = FUNC_2(VAR_2, VAR_1,
          &VAR_4, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_6 = FUNC_0(VAR_4, VAR_0, VAR_3);
 if (VAR_6 < 0) {
  FUNC_1(VAR_4);
  return VAR_6;
 }
 return FUNC_3(VAR_2, VAR_1,
           VAR_4, VAR_5);
}

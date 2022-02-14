
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tcmu_dev {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct tcmu_dev*,int ,struct sk_buff**,void**) ;
 int FUNC_3 (struct tcmu_dev*,int ,struct sk_buff*,void*) ;

__attribute__((used)) static int FUNC_4(struct tcmu_dev *VAR_3, u64 VAR_4)
{
 struct sk_buff *VAR_5 = ((void*)0);
 void *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 VAR_7 = FUNC_2(VAR_3, VAR_2,
          &VAR_5, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 VAR_7 = FUNC_0(VAR_5, VAR_0,
    VAR_4, VAR_1);
 if (VAR_7 < 0) {
  FUNC_1(VAR_5);
  return VAR_7;
 }
 return FUNC_3(VAR_3, VAR_2,
           VAR_5, VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (struct ath10k*,int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_2(struct ath10k *VAR_1)
{
 struct sk_buff *VAR_2;

 VAR_2 = FUNC_1(VAR_1, 0);
 if (!VAR_2)
  return FUNC_0(-VAR_0);

 return VAR_2;
}

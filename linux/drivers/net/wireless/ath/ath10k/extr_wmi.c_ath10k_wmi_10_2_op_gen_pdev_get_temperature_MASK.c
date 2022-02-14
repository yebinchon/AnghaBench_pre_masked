
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,char*) ;
 struct sk_buff* FUNC_2 (struct ath10k*,int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_3(struct ath10k *VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_2(VAR_2, 0);
 if (!VAR_3)
  return FUNC_0(-VAR_1);

 FUNC_1(VAR_2, VAR_0, "wmi pdev get temperature\n");
 return VAR_3;
}

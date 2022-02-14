
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
typedef int gfp_t ;


 unsigned long FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,unsigned long) ;

__attribute__((used)) static __inline__ struct sk_buff *FUNC_4(struct net_device *VAR_0, int VAR_1,
      gfp_t VAR_2)
{
 struct sk_buff *VAR_3 = FUNC_1(VAR_1 + 64, VAR_2);

 if (FUNC_2(VAR_3)) {
  unsigned long VAR_4 = FUNC_0(VAR_3->data);
  FUNC_3(VAR_3, VAR_4);
 }
 return VAR_3;
}

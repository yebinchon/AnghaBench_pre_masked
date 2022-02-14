
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(int VAR_3)
{

 if (VAR_3 + VAR_1 < VAR_0)
  VAR_3 = VAR_0 - VAR_1;

 return FUNC_0(VAR_2 + VAR_3) +
  FUNC_0(sizeof(struct skb_shared_info));
}

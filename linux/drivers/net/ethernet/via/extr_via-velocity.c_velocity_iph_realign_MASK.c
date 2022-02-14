
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct velocity_info {int flags; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static inline void FUNC_2(struct velocity_info *VAR_1,
     struct sk_buff *VAR_2, int VAR_3)
{
 if (VAR_1->flags & VAR_0) {
  FUNC_0(VAR_2->data + 2, VAR_2->data, VAR_3);
  FUNC_1(VAR_2, 2);
 }
}

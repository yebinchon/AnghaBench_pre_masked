
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_cookie {scalar_t__ len; int data; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct nlm_cookie *VAR_0, struct nlm_cookie *VAR_1)
{
 if (VAR_0->len != VAR_1->len)
  return 0;
 if (FUNC_0(VAR_0->data, VAR_1->data, VAR_0->len))
  return 0;
 return 1;
}

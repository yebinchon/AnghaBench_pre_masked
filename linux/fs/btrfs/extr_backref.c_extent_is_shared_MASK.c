
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct share_check {int share_count; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct share_check *VAR_1)
{
 return (VAR_1 && VAR_1->share_count > 1) ? VAR_0 : 0;
}

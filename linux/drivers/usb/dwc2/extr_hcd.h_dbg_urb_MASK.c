
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int pipe; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct urb *VAR_2)
{
 return FUNC_0(VAR_2->pipe) == VAR_0 ||
        FUNC_0(VAR_2->pipe) == VAR_1;
}

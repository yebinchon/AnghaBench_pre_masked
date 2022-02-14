
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhine_private {scalar_t__ cur_tx; scalar_t__ dirty_tx; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct rhine_private *VAR_1)
{
 return (VAR_1->cur_tx - VAR_1->dirty_tx) >= VAR_0;
}

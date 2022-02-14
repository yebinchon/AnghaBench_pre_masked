
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int start; scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static inline int FUNC_1(const struct extent_buffer *VAR_2)
{
 return (FUNC_0(VAR_2->start + VAR_2->len, VAR_1) >> VAR_0) -
        (VAR_2->start >> VAR_0);
}

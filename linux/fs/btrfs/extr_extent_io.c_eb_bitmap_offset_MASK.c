
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {size_t start; } ;


 size_t FUNC_0 (unsigned long) ;
 size_t VAR_0 ;
 size_t FUNC_1 (size_t) ;

__attribute__((used)) static inline void FUNC_2(struct extent_buffer *VAR_1,
        unsigned long VAR_2, unsigned long VAR_3,
        unsigned long *VAR_4,
        size_t *VAR_5)
{
 size_t VAR_6 = FUNC_1(VAR_1->start);
 size_t VAR_7 = FUNC_0(VAR_3);
 size_t VAR_8;






 VAR_8 = VAR_6 + VAR_2 + VAR_7;

 *VAR_4 = VAR_8 >> VAR_0;
 *VAR_5 = FUNC_1(VAR_8);
}

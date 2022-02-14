
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_ring_s {unsigned int size; } ;



__attribute__((used)) static inline unsigned int FUNC_0(struct aq_ring_s *VAR_0,
        unsigned int VAR_1)
{
 return (++VAR_1 >= VAR_0->size) ? 0U : VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {unsigned long aux_nr_pages; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_0(struct ring_buffer *VAR_1)
{
 return VAR_1->aux_nr_pages << VAR_0;
}

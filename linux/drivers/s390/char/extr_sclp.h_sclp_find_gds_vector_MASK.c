
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct gds_vector {int length; scalar_t__ gds_id; } ;



__attribute__((used)) static inline struct gds_vector *
FUNC_0(void *VAR_0, void *VAR_1, u16 VAR_2)
{
 struct gds_vector *VAR_3;

 for (VAR_3 = VAR_0; (void *) VAR_3 < VAR_1; VAR_3 = (void *) VAR_3 + VAR_3->length)
  if (VAR_3->gds_id == VAR_2)
   return VAR_3;
 return ((void*)0);
}

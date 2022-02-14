
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gds_vector {int length; scalar_t__ gds_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gds_vector*) ;

__attribute__((used)) static inline void FUNC_1(struct gds_vector *VAR_1)
{
 void *VAR_2;

 VAR_2 = (void *) VAR_1 + VAR_1->length;
 for (VAR_1 = VAR_1 + 1; (void *) VAR_1 < VAR_2; VAR_1 = (void *) VAR_1 + VAR_1->length)
  if (VAR_1->gds_id == VAR_0)
   FUNC_0(VAR_1);
}

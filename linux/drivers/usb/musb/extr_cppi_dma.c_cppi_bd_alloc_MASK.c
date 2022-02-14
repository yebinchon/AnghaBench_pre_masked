
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cppi_descriptor {struct cppi_descriptor* next; } ;
struct cppi_channel {struct cppi_descriptor* freelist; } ;



__attribute__((used)) static inline struct cppi_descriptor *FUNC_0(struct cppi_channel *VAR_0)
{
 struct cppi_descriptor *VAR_1 = VAR_0->freelist;

 if (VAR_1)
  VAR_0->freelist = VAR_1->next;
 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int flags; int end; } ;
struct pcmcia_align_data {int mask; int offset; } ;
typedef int resource_size_t ;


 int VAR_0 ;

__attribute__((used)) static resource_size_t FUNC_0(void *VAR_1,
    const struct resource *VAR_2,
    resource_size_t VAR_3, resource_size_t VAR_4)
{
 struct pcmcia_align_data *VAR_5 = VAR_1;
 resource_size_t VAR_6;

 VAR_6 = (VAR_2->start & ~VAR_5->mask) + VAR_5->offset;
 if (VAR_6 < VAR_2->start)
  VAR_6 += VAR_5->mask + 1;
 return VAR_6;
}

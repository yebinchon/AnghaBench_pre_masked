
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_align_data {int mask; int offset; } ;
typedef int resource_size_t ;



__attribute__((used)) static resource_size_t FUNC_0(struct pcmcia_align_data *VAR_0,
     resource_size_t VAR_1)
{
 resource_size_t VAR_2;



 VAR_2 = (VAR_1 & ~VAR_0->mask) + VAR_0->offset;
 if (VAR_2 < VAR_1)
  VAR_2 += VAR_0->mask + 1;
 return VAR_2;
}

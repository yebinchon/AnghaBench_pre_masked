
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extended_attribute {int valuelen_lo; int valuelen_hi; } ;



__attribute__((used)) static unsigned FUNC_0(struct extended_attribute *VAR_0)
{
 return VAR_0->valuelen_lo + 256 * VAR_0->valuelen_hi;
}

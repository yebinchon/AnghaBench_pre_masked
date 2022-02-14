
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enetc_cbdr {int next_to_clean; int next_to_use; int bd_count; } ;



__attribute__((used)) static int FUNC_0(struct enetc_cbdr *VAR_0)
{
 return (VAR_0->next_to_clean - VAR_0->next_to_use - 1 + VAR_0->bd_count) %
  VAR_0->bd_count;
}

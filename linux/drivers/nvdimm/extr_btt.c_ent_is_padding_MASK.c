
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_entry {scalar_t__ lba; scalar_t__ old_map; scalar_t__ new_map; scalar_t__ seq; } ;



__attribute__((used)) static bool FUNC_0(struct log_entry *VAR_0)
{
 return (VAR_0->lba == 0) && (VAR_0->old_map == 0) && (VAR_0->new_map == 0)
  && (VAR_0->seq == 0);
}

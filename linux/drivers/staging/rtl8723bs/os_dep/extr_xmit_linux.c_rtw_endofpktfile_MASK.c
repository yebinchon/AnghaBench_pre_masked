
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkt_file {scalar_t__ pkt_len; } ;
typedef int sint ;



sint FUNC_0(struct pkt_file *VAR_0)
{
 if (VAR_0->pkt_len == 0)
  return 1;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct pkt_file {scalar_t__ buf_start; scalar_t__ cur_addr; scalar_t__ buf_len; } ;
typedef scalar_t__ SIZE_PTR ;



uint FUNC_0(struct pkt_file *VAR_0)
{
 return (VAR_0->buf_len - ((SIZE_PTR)(VAR_0->cur_addr) - (SIZE_PTR)(VAR_0->buf_start)));
}

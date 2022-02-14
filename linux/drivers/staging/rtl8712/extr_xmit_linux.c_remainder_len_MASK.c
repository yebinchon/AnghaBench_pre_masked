
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct pkt_file {scalar_t__ buf_start; scalar_t__ cur_addr; scalar_t__ buf_len; } ;
typedef scalar_t__ addr_t ;



__attribute__((used)) static uint FUNC_0(struct pkt_file *VAR_0)
{
 return (uint)(VAR_0->buf_len - ((addr_t)(VAR_0->cur_addr) -
        (addr_t)(VAR_0->buf_start)));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct be_rx_compl_info {int err; scalar_t__ ipv6; scalar_t__ ip_csum; scalar_t__ l4_csum; scalar_t__ udpf; scalar_t__ tcpf; } ;



__attribute__((used)) static inline bool FUNC_0(struct be_rx_compl_info *VAR_0)
{



 return (VAR_0->tcpf || VAR_0->udpf) && VAR_0->l4_csum &&
  (VAR_0->ip_csum || VAR_0->ipv6) && !VAR_0->err;
}

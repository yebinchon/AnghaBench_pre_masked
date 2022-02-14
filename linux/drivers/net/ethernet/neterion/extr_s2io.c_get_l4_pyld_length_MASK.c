
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int doff; } ;
struct iphdr {int ihl; int tot_len; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct iphdr *VAR_0, struct tcphdr *VAR_1)
{
 return FUNC_0(VAR_0->tot_len) - (VAR_0->ihl << 2) - (VAR_1->doff << 2);
}

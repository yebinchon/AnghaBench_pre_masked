
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int dummy; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned short const*,unsigned short,unsigned short,int,unsigned int*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static inline void
FUNC_2(const unsigned short *VAR_1, unsigned short VAR_2,
       unsigned int *VAR_3, int VAR_4, int VAR_5)
{
 unsigned short VAR_6 = (VAR_5 ?
       sizeof(struct ipv6hdr) :
       sizeof(struct iphdr)) +
      sizeof(struct tcphdr) +
      (VAR_4 ?
       FUNC_1(VAR_0, 4) : 0);
 unsigned short VAR_7 = VAR_2 - VAR_6;

 FUNC_0(VAR_1, VAR_6, VAR_7, 8, VAR_3);
}

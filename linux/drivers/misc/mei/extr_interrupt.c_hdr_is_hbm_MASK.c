
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_msg_hdr {scalar_t__ host_addr; scalar_t__ me_addr; } ;



__attribute__((used)) static inline bool FUNC_0(struct mei_msg_hdr *VAR_0)
{
 return VAR_0->host_addr == 0 && VAR_0->me_addr == 0;
}

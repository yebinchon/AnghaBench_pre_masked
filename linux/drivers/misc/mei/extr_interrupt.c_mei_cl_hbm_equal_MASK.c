
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_msg_hdr {scalar_t__ host_addr; scalar_t__ me_addr; } ;
struct mei_cl {int dummy; } ;


 scalar_t__ FUNC_0 (struct mei_cl*) ;
 scalar_t__ FUNC_1 (struct mei_cl*) ;

__attribute__((used)) static inline int FUNC_2(struct mei_cl *VAR_0,
   struct mei_msg_hdr *VAR_1)
{
 return FUNC_0(VAR_0) == VAR_1->host_addr &&
  FUNC_1(VAR_0) == VAR_1->me_addr;
}

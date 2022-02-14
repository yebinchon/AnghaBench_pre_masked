
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct nsm_handle {int sm_addr; } ;



__attribute__((used)) static inline struct sockaddr *FUNC_0(const struct nsm_handle *VAR_0)
{
 return (struct sockaddr *)&VAR_0->sm_addr;
}

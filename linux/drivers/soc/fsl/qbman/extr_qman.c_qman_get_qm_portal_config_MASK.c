
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qman_portal {struct qm_portal_config const* config; } ;
struct qm_portal_config {int dummy; } ;



const struct qm_portal_config *FUNC_0(
      struct qman_portal *VAR_0)
{
 return VAR_0->config;
}

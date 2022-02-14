
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bman_portal {struct bm_portal_config const* config; } ;
struct bm_portal_config {int dummy; } ;



const struct bm_portal_config *
FUNC_0(const struct bman_portal *VAR_0)
{
 return VAR_0->config;
}

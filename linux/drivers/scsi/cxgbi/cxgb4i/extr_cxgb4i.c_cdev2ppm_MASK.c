
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_ppm {int dummy; } ;
struct cxgbi_device {int dummy; } ;
struct cxgb4_lld_info {scalar_t__* iscsi_ppm; } ;


 scalar_t__ FUNC_0 (struct cxgbi_device*) ;

__attribute__((used)) static struct cxgbi_ppm *FUNC_1(struct cxgbi_device *VAR_0)
{
 return (struct cxgbi_ppm *)(*((struct cxgb4_lld_info *)
           (FUNC_0(VAR_0)))->iscsi_ppm);
}

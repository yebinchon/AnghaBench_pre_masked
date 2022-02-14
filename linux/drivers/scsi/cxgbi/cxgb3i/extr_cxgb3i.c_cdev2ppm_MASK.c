
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {struct cxgbi_ppm* ulp_iscsi; } ;
struct cxgbi_ppm {int dummy; } ;
struct cxgbi_device {scalar_t__ lldev; } ;



__attribute__((used)) static struct cxgbi_ppm *FUNC_0(struct cxgbi_device *VAR_0)
{
 return ((struct t3cdev *)VAR_0->lldev)->ulp_iscsi;
}

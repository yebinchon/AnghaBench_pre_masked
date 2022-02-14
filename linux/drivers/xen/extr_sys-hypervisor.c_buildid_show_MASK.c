
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_build_id {int len; char* buf; } ;
struct hyp_sysfs_attr {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct xen_build_id*) ;
 int VAR_3 ;
 int FUNC_1 (struct xen_build_id*) ;
 struct xen_build_id* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_4(struct hyp_sysfs_attr *VAR_4, char *VAR_5)
{
 ssize_t VAR_6;
 struct xen_build_id *VAR_7;

 VAR_6 = FUNC_0(VAR_3, ((void*)0));
 if (VAR_6 < 0) {
  if (VAR_6 == -VAR_1)
   VAR_6 = FUNC_3(VAR_5, "<denied>");
  return VAR_6;
 }

 VAR_7 = FUNC_2(sizeof(*VAR_7) + VAR_6, VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->len = VAR_6;
 VAR_6 = FUNC_0(VAR_3, VAR_7);
 if (VAR_6 > 0)
  VAR_6 = FUNC_3(VAR_5, "%s", VAR_7->buf);
 FUNC_1(VAR_7);

 return VAR_6;
}

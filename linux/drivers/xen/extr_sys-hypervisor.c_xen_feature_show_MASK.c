
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_feature_info {int submap_idx; int submap; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int ,struct xen_feature_info*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(int VAR_1, char *VAR_2)
{
 ssize_t VAR_3;
 struct xen_feature_info VAR_4;

 VAR_4.submap_idx = VAR_1;
 VAR_3 = FUNC_0(VAR_0, &VAR_4);
 if (!VAR_3)
  VAR_3 = FUNC_1(VAR_2, "%08x", VAR_4.submap);

 return VAR_3;
}

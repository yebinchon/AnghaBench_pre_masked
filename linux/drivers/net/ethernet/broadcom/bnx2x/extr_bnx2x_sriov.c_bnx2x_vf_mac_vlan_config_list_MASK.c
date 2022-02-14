
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x_vf_mac_vlan_filters {int count; TYPE_1__* filters; } ;
struct bnx2x {int dummy; } ;
struct TYPE_2__ {int add; int applied; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,int) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_virtf*,int,TYPE_1__*,int) ;
 int FUNC_4 (struct bnx2x_vf_mac_vlan_filters*) ;

int FUNC_5(struct bnx2x *VAR_2, struct bnx2x_virtf *VAR_3,
      struct bnx2x_vf_mac_vlan_filters *VAR_4,
      int VAR_5, bool VAR_6)
{
 int VAR_7 = 0, VAR_8;

 FUNC_1(VAR_0, "vf[%d]\n", VAR_3->abs_vfid);

 if (!FUNC_2(VAR_2, VAR_3, 1))
  return -VAR_1;


 for (VAR_8 = 0; VAR_8 < VAR_4->count; VAR_8++) {
  VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_5,
           &VAR_4->filters[VAR_8], VAR_6);
  if (VAR_7)
   break;
 }


 if (VAR_8 != VAR_4->count) {
  FUNC_0("Managed only %d/%d filters - rolling back\n",
     VAR_8, VAR_4->count);
  while (--VAR_8 >= 0) {
   if (!VAR_4->filters[VAR_8].applied)
    continue;
   VAR_4->filters[VAR_8].add = !VAR_4->filters[VAR_8].add;
   FUNC_3(VAR_2, VAR_3, VAR_5,
       &VAR_4->filters[VAR_8],
       VAR_6);
  }
 }


 FUNC_4(VAR_4);

 return VAR_7;
}

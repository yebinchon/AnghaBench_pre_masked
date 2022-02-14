
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_virtf {int mcast_obj; int abs_vfid; } ;
struct bnx2x_mcast_ramrod_params {int mcast_list_len; int mcast_list; int ramrod_flags; int * mcast_obj; } ;
struct bnx2x_mcast_list_elem {int link; int mac; } ;
struct bnx2x {int dummy; } ;
typedef int bnx2x_mac_addr_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_mcast_ramrod_params*,int ) ;
 struct bnx2x_mcast_list_elem* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct bnx2x_mcast_list_elem*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct bnx2x_mcast_ramrod_params*,int ,int) ;
 int FUNC_8 (int ,int *) ;

int FUNC_9(struct bnx2x *VAR_7, struct bnx2x_virtf *VAR_8,
     bnx2x_mac_addr_t *VAR_9, int VAR_10, bool VAR_11)
{
 struct bnx2x_mcast_list_elem *VAR_12 = ((void*)0);
 struct bnx2x_mcast_ramrod_params VAR_13;
 int VAR_14, VAR_15;

 FUNC_1(VAR_2, "vf[%d]\n", VAR_8->abs_vfid);


 FUNC_7(&VAR_13, 0, sizeof(struct bnx2x_mcast_ramrod_params));
 VAR_13.mcast_obj = &VAR_8->mcast_obj;
 if (VAR_11)
  FUNC_8(VAR_6, &VAR_13.ramrod_flags);
 else
  FUNC_8(VAR_5, &VAR_13.ramrod_flags);
 if (VAR_10) {
  VAR_12 = FUNC_4(VAR_10, sizeof(struct bnx2x_mcast_list_elem),
        VAR_4);
  if (!VAR_12) {
   FUNC_0("Cannot Configure multicasts due to lack of memory\n");
   return -VAR_3;
  }
 }

 if (VAR_10) {
  FUNC_2(&VAR_13.mcast_list);
  for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
   VAR_12[VAR_15].mac = VAR_9[VAR_15];
   FUNC_6(&VAR_12[VAR_15].link,
          &VAR_13.mcast_list);
  }


  VAR_13.mcast_list_len = VAR_10;
  VAR_14 = FUNC_3(VAR_7, &VAR_13, VAR_1);
  if (VAR_14)
   FUNC_0("Failed to set multicasts\n");
 } else {

  VAR_14 = FUNC_3(VAR_7, &VAR_13, VAR_0);
  if (VAR_14)
   FUNC_0("Failed to remove multicasts\n");
 }

 FUNC_5(VAR_12);

 return VAR_14;
}

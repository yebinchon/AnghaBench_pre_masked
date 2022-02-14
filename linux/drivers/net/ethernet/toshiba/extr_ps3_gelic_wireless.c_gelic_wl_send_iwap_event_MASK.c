
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_family; int sa_data; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;
typedef int u8 ;
struct gelic_wl_info {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (union iwreq_data*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,union iwreq_data*,int *) ;
 int FUNC_4 (struct gelic_wl_info*) ;

__attribute__((used)) static void FUNC_5(struct gelic_wl_info *VAR_3, u8 *VAR_4)
{
 union iwreq_data VAR_5;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 if (VAR_4)
  FUNC_0(VAR_5.ap_addr.sa_data, VAR_4, VAR_1);
 VAR_5.ap_addr.sa_family = VAR_0;
 FUNC_3(FUNC_2(FUNC_4(VAR_3)), VAR_2,
       &VAR_5, ((void*)0));
}

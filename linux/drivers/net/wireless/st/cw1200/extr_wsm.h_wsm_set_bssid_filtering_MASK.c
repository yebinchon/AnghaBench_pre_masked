
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_set_bssid_filtering {int filter; } ;
struct cw1200_common {int dummy; } ;
typedef int arg ;


 int VAR_0 ;
 int FUNC_0 (struct cw1200_common*,int ,struct wsm_set_bssid_filtering*,int) ;

__attribute__((used)) static inline int FUNC_1(struct cw1200_common *VAR_1,
       bool VAR_2)
{
 struct wsm_set_bssid_filtering VAR_3 = {
  .filter = !VAR_2,
 };
 return FUNC_0(VAR_1, VAR_0,
   &VAR_3, sizeof(VAR_3));
}

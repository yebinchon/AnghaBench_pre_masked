
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wsm_keep_alive_period {int period; } ;
struct cw1200_common {int dummy; } ;
typedef int arg ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cw1200_common*,int ,struct wsm_keep_alive_period*,int) ;

__attribute__((used)) static inline int FUNC_2(struct cw1200_common *VAR_1,
     int VAR_2)
{
 struct wsm_keep_alive_period VAR_3 = {
  .period = FUNC_0(VAR_2),
 };
 return FUNC_1(VAR_1, VAR_0,
   &VAR_3, sizeof(VAR_3));
}

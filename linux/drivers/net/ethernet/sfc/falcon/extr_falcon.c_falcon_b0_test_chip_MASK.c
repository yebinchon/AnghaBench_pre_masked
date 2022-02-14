
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_self_tests {int registers; } ;
struct ef4_nic {int loopback_modes; int loopback_mode; int mac_lock; } ;
typedef enum reset_type { ____Placeholder_reset_type } reset_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ef4_nic*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct ef4_nic*,int ,int ) ;
 int FUNC_4 (struct ef4_nic*,int) ;
 int FUNC_5 (struct ef4_nic*,int,int) ;
 int VAR_2 ;
 int FUNC_6 (struct ef4_nic*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct ef4_nic *VAR_3, struct ef4_self_tests *VAR_4)
{
 enum reset_type VAR_5 = VAR_1;
 int VAR_6, VAR_7;

 FUNC_7(&VAR_3->mac_lock);
 if (VAR_3->loopback_modes) {


  if (VAR_3->loopback_modes & (1 << VAR_0))
   VAR_3->loopback_mode = VAR_0;
  else
   VAR_3->loopback_mode = FUNC_2(VAR_3->loopback_modes);
 }
 FUNC_1(VAR_3);
 FUNC_8(&VAR_3->mac_lock);

 FUNC_4(VAR_3, VAR_5);

 VAR_4->registers =
  FUNC_3(VAR_3, VAR_2,
      FUNC_0(VAR_2))
  ? -1 : 1;

 VAR_6 = FUNC_6(VAR_3, VAR_5);
 VAR_7 = FUNC_5(VAR_3, VAR_5, VAR_6 == 0);
 return VAR_6 ? VAR_6 : VAR_7;
}

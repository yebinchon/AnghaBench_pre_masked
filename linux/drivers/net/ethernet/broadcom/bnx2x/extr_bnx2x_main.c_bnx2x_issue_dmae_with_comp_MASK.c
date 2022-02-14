
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dmae_command {int dummy; } ;
struct bnx2x {scalar_t__ recovery_state; int dmae_lock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*,struct dmae_command*,int ) ;
 int FUNC_4 (struct bnx2x*,struct dmae_command*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;

int FUNC_8(struct bnx2x *VAR_7, struct dmae_command *VAR_8,
          u32 *VAR_9)
{
 int VAR_10 = FUNC_1(VAR_7) ? (400000) : 4000;
 int VAR_11 = 0;

 FUNC_3(VAR_7, VAR_8, VAR_0);






 FUNC_5(&VAR_7->dmae_lock);


 *VAR_9 = 0;


 FUNC_4(VAR_7, VAR_8, FUNC_2(VAR_7));


 FUNC_7(5);
 while ((*VAR_9 & ~VAR_5) != VAR_3) {

  if (!VAR_10 ||
      (VAR_7->recovery_state != VAR_1 &&
       VAR_7->recovery_state != VAR_2)) {
   FUNC_0("DMAE timeout!\n");
   VAR_11 = VAR_6;
   goto unlock;
  }
  VAR_10--;
  FUNC_7(50);
 }
 if (*VAR_9 & VAR_5) {
  FUNC_0("DMAE PCI error!\n");
  VAR_11 = VAR_4;
 }

unlock:

 FUNC_6(&VAR_7->dmae_lock);

 return VAR_11;
}

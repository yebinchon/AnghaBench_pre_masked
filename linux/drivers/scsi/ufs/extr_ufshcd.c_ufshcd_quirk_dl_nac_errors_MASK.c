
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_hba {int saved_err; int saved_uic_err; TYPE_1__* host; } ;
struct TYPE_2__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct ufs_hba*) ;

__attribute__((used)) static bool FUNC_4(struct ufs_hba *VAR_7)
{
 unsigned long VAR_8;
 bool VAR_9 = 1;

 FUNC_1(VAR_7->host->host_lock, VAR_8);




 if (VAR_7->saved_err & (VAR_0 | VAR_3))
  goto out;

 if ((VAR_7->saved_err & VAR_1) ||
     ((VAR_7->saved_err & VAR_6) &&
      (VAR_7->saved_uic_err & VAR_5)))
  goto out;

 if ((VAR_7->saved_err & VAR_6) &&
     (VAR_7->saved_uic_err & VAR_4)) {
  int VAR_10;



  FUNC_2(VAR_7->host->host_lock, VAR_8);
  FUNC_0(50);
  FUNC_1(VAR_7->host->host_lock, VAR_8);





  if ((VAR_7->saved_err & VAR_2) ||
      ((VAR_7->saved_err & VAR_6) &&
      (VAR_7->saved_uic_err & ~VAR_4)))
   goto out;
  FUNC_2(VAR_7->host->host_lock, VAR_8);
  VAR_10 = FUNC_3(VAR_7);
  FUNC_1(VAR_7->host->host_lock, VAR_8);

  if (VAR_10)
   goto out;


  if (VAR_7->saved_uic_err == VAR_4)
   VAR_7->saved_err &= ~VAR_6;

  VAR_7->saved_uic_err &= ~VAR_4;
  if (!VAR_7->saved_uic_err) {
   VAR_9 = 0;
   goto out;
  }
 }
out:
 FUNC_2(VAR_7->host->host_lock, VAR_8);
 return VAR_9;
}

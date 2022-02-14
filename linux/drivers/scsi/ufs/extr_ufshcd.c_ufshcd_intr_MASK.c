
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ufs_hba {int nutrs; TYPE_1__* host; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ufs_hba*,int ) ;
 int FUNC_3 (struct ufs_hba*,int) ;
 int FUNC_4 (struct ufs_hba*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 u32 VAR_6, VAR_7;
 irqreturn_t VAR_8 = VAR_1;
 struct ufs_hba *VAR_9 = VAR_5;
 int VAR_10 = VAR_9->nutrs;

 FUNC_0(VAR_9->host->host_lock);
 VAR_6 = FUNC_2(VAR_9, VAR_3);







 do {
  VAR_7 =
   VAR_6 & FUNC_2(VAR_9, VAR_2);
  if (VAR_6)
   FUNC_4(VAR_9, VAR_6, VAR_3);
  if (VAR_7) {
   FUNC_3(VAR_9, VAR_7);
   VAR_8 = VAR_0;
  }

  VAR_6 = FUNC_2(VAR_9, VAR_3);
 } while (VAR_6 && --VAR_10);

 FUNC_1(VAR_9->host->host_lock);
 return VAR_8;
}

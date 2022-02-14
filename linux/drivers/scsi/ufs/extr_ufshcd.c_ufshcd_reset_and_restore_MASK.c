
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_hba {TYPE_1__* host; } ;
struct TYPE_2__ {int host_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct ufs_hba*) ;
 int FUNC_3 (struct ufs_hba*) ;
 int FUNC_4 (struct ufs_hba*) ;
 int FUNC_5 (struct ufs_hba*) ;

__attribute__((used)) static int FUNC_6(struct ufs_hba *VAR_1)
{
 int VAR_2 = 0;
 unsigned long VAR_3;
 int VAR_4 = VAR_0;

 do {

  FUNC_5(VAR_1);

  VAR_2 = FUNC_2(VAR_1);
 } while (VAR_2 && --VAR_4);





 FUNC_0(VAR_1->host->host_lock, VAR_3);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 FUNC_1(VAR_1->host->host_lock, VAR_3);

 return VAR_2;
}

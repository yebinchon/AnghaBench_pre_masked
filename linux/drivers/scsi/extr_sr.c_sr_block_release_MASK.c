
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cd {int cdi; } ;
struct gendisk {int dummy; } ;
typedef int fmode_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct scsi_cd* FUNC_3 (struct gendisk*) ;
 int FUNC_4 (struct scsi_cd*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct gendisk *VAR_1, fmode_t VAR_2)
{
 struct scsi_cd *VAR_3 = FUNC_3(VAR_1);
 FUNC_1(&VAR_0);
 FUNC_0(&VAR_3->cdi, VAR_2);
 FUNC_4(VAR_3);
 FUNC_2(&VAR_0);
}

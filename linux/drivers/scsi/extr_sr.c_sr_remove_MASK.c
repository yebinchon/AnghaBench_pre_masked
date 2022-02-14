
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cd {int kref; int disk; int device; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct scsi_cd* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2)
{
 struct scsi_cd *VAR_3 = FUNC_1(VAR_2);

 FUNC_6(VAR_3->device);

 FUNC_0(VAR_3->disk);
 FUNC_2(VAR_2, ((void*)0));

 FUNC_4(&VAR_1);
 FUNC_3(&VAR_3->kref, VAR_0);
 FUNC_5(&VAR_1);

 return 0;
}

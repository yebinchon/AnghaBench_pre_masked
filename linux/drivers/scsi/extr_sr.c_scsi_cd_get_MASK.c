
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cd {int kref; int device; } ;
struct gendisk {int * private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct scsi_cd* FUNC_4 (struct gendisk*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline struct scsi_cd *FUNC_6(struct gendisk *VAR_2)
{
 struct scsi_cd *VAR_3 = ((void*)0);

 FUNC_2(&VAR_1);
 if (VAR_2->private_data == ((void*)0))
  goto out;
 VAR_3 = FUNC_4(VAR_2);
 FUNC_0(&VAR_3->kref);
 if (FUNC_5(VAR_3->device)) {
  FUNC_1(&VAR_3->kref, VAR_0);
  VAR_3 = ((void*)0);
 }
 out:
 FUNC_3(&VAR_1);
 return VAR_3;
}

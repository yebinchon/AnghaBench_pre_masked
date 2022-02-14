
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct firmware {scalar_t__ size; int data; } ;
struct Scsi_Host {int shost_gendev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct firmware const*) ;
 int FUNC_2 (struct firmware const**,char*,int *) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(struct Scsi_Host *VAR_3, u8 *VAR_4)
{
 int VAR_5;
 const struct firmware *VAR_6;

 VAR_5 = FUNC_2(&VAR_6, "sas_addr", &VAR_3->shost_gendev);
 if (VAR_5)
  return VAR_5;

 if (VAR_6->size < VAR_2) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_5 = FUNC_0(VAR_4, VAR_6->data, FUNC_3(VAR_6->data, VAR_1 * 2) / 2);
 if (VAR_5)
  goto out;

out:
 FUNC_1(VAR_6);
 return VAR_5;
}

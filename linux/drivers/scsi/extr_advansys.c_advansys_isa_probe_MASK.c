
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct asc_board {struct Scsi_Host* shost; struct device* dev; int irq; } ;
struct Scsi_Host {int dummy; } ;
typedef int PortAddr ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_3 (struct Scsi_Host*,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (struct device*,struct Scsi_Host*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 struct Scsi_Host* FUNC_8 (int *,int) ;
 int FUNC_9 (struct Scsi_Host*) ;
 struct asc_board* FUNC_10 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_8, unsigned int VAR_9)
{
 int VAR_10 = -VAR_4;
 PortAddr VAR_11 = VAR_6[VAR_9];
 struct Scsi_Host *VAR_12;
 struct asc_board *VAR_13;

 if (!FUNC_7(VAR_11, VAR_1, VAR_3)) {
  FUNC_0(1, "I/O port 0x%x busy\n", VAR_11);
  return -VAR_4;
 }
 FUNC_0(1, "probing I/O port 0x%x\n", VAR_11);
 if (!FUNC_1(VAR_11))
  goto release_region;
 if (!(FUNC_2(VAR_11, VAR_2) & VAR_0))
  goto release_region;

 VAR_10 = -VAR_5;
 VAR_12 = FUNC_8(&VAR_7, sizeof(*VAR_13));
 if (!VAR_12)
  goto release_region;

 VAR_13 = FUNC_10(VAR_12);
 VAR_13->irq = FUNC_4(VAR_11);
 VAR_13->dev = VAR_8;
 VAR_13->shost = VAR_12;

 VAR_10 = FUNC_3(VAR_12, VAR_11, VAR_2);
 if (VAR_10)
  goto free_host;

 FUNC_5(VAR_8, VAR_12);
 return 0;

 free_host:
 FUNC_9(VAR_12);
 release_region:
 FUNC_6(VAR_11, VAR_1);
 return VAR_10;
}

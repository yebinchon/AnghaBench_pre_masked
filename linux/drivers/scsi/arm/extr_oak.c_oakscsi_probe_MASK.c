
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct expansion_card {int dev; } ;
struct ecard_id {int dummy; } ;
struct Scsi_Host {int irq; } ;
struct NCR5380_hostdata {int dummy; } ;
struct TYPE_2__ {int io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (struct Scsi_Host*,int) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int VAR_4 ;
 int FUNC_3 (struct expansion_card*) ;
 int FUNC_4 (struct expansion_card*) ;
 int FUNC_5 (struct expansion_card*,int ) ;
 int FUNC_6 (struct expansion_card*,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 TYPE_1__* FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (struct Scsi_Host*,int *) ;
 struct Scsi_Host* FUNC_11 (int *,int) ;
 int FUNC_12 (struct Scsi_Host*) ;
 int FUNC_13 (struct Scsi_Host*) ;

__attribute__((used)) static int FUNC_14(struct expansion_card *VAR_6, const struct ecard_id *VAR_7)
{
 struct Scsi_Host *VAR_8;
 int VAR_9 = -VAR_1;

 VAR_9 = FUNC_4(VAR_6);
 if (VAR_9)
  goto out;

 VAR_8 = FUNC_11(&VAR_5, sizeof(struct NCR5380_hostdata));
 if (!VAR_8) {
  VAR_9 = -VAR_1;
  goto release;
 }

 FUNC_9(VAR_8)->io = FUNC_7(FUNC_6(VAR_6, VAR_0),
                          FUNC_5(VAR_6, VAR_0));
 if (!FUNC_9(VAR_8)->io) {
  VAR_9 = -VAR_1;
  goto unreg;
 }

 VAR_8->irq = VAR_4;

 VAR_9 = FUNC_1(VAR_8, VAR_2 | VAR_3);
 if (VAR_9)
  goto out_unmap;

 FUNC_2(VAR_8);

 VAR_9 = FUNC_10(VAR_8, &VAR_6->dev);
 if (VAR_9)
  goto out_exit;

 FUNC_13(VAR_8);
 goto out;

 out_exit:
 FUNC_0(VAR_8);
 out_unmap:
 FUNC_8(FUNC_9(VAR_8)->io);
 unreg:
 FUNC_12(VAR_8);
 release:
 FUNC_3(VAR_6);
 out:
 return VAR_9;
}

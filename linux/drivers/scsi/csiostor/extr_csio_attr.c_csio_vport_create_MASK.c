
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fc_vport {void* port_name; void* node_name; scalar_t__ dd_data; int dev; struct Scsi_Host* shost; } ;
struct csio_lnode {struct fc_vport* fc_vport; } ;
struct csio_hw {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct csio_lnode*) ;
 scalar_t__ FUNC_2 (struct csio_hw*,struct csio_lnode*) ;
 int FUNC_3 (struct csio_lnode*,char*) ;
 int FUNC_4 (struct csio_lnode*) ;
 int FUNC_5 (struct csio_lnode*) ;
 scalar_t__ FUNC_6 (struct csio_hw*,int *) ;
 struct csio_hw* FUNC_7 (struct csio_lnode*) ;
 int FUNC_8 (struct csio_lnode*) ;
 struct csio_lnode* FUNC_9 (struct csio_hw*,int *,int,struct csio_lnode*) ;
 int FUNC_10 (struct fc_vport*,int ) ;
 int FUNC_11 (int ,int *,int) ;
 struct csio_lnode* FUNC_12 (struct Scsi_Host*) ;
 int FUNC_13 (void*,int *) ;
 void* FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(struct fc_vport *VAR_1, bool VAR_2)
{
 struct Scsi_Host *VAR_3 = VAR_1->shost;
 struct csio_lnode *VAR_4 = FUNC_12(VAR_3);
 struct csio_lnode *VAR_5 = ((void*)0);
 struct csio_hw *VAR_6 = FUNC_7(VAR_4);
 uint8_t VAR_7[8];
 int VAR_8 = -1;

 VAR_5 = FUNC_9(VAR_6, &VAR_1->dev, 0, VAR_4);
 if (!VAR_5)
  goto error;

 if (VAR_1->node_name != 0) {
  FUNC_13(VAR_1->node_name, VAR_7);

  if (!FUNC_0(VAR_7)) {
   FUNC_3(VAR_5,
        "vport create failed. Invalid wwnn\n");
   goto error;
  }
  FUNC_11(FUNC_4(VAR_5), VAR_7, 8);
 }

 if (VAR_1->port_name != 0) {
  FUNC_13(VAR_1->port_name, VAR_7);

  if (!FUNC_0(VAR_7)) {
   FUNC_3(VAR_5,
        "vport create failed. Invalid wwpn\n");
   goto error;
  }

  if (FUNC_6(VAR_6, VAR_7)) {
   FUNC_3(VAR_5,
       "vport create failed. wwpn already exists\n");
   goto error;
  }
  FUNC_11(FUNC_5(VAR_5), VAR_7, 8);
 }

 FUNC_10(VAR_1, VAR_0);
 VAR_5->fc_vport = VAR_1;

 if (FUNC_2(VAR_6, VAR_5))
  goto error;

 *(struct csio_lnode **)VAR_1->dd_data = VAR_5;
 if (!VAR_1->node_name)
  VAR_1->node_name = FUNC_14(FUNC_4(VAR_5));
 if (!VAR_1->port_name)
  VAR_1->port_name = FUNC_14(FUNC_5(VAR_5));
 FUNC_1(VAR_5);
 return 0;
error:
 if (VAR_5)
  FUNC_8(VAR_5);

 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct beiscsi_hba {int dummy; } ;
struct be_dma_mem {struct be_cmd_hba_name* va; } ;
struct TYPE_2__ {int version; } ;
struct be_cmd_hba_name {char* initiator_name; TYPE_1__ hdr; } ;
typedef int resp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct beiscsi_hba*,struct be_dma_mem*,int *,struct be_cmd_hba_name*,int) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int,char*) ;
 int FUNC_2 (struct beiscsi_hba*,struct be_dma_mem*,int ,int ,int) ;
 int FUNC_3 (char*,char*,char*) ;

int FUNC_4(struct beiscsi_hba *VAR_5, char *VAR_6, bool VAR_7)
{
 struct be_dma_mem VAR_8;
 struct be_cmd_hba_name VAR_9;
 struct be_cmd_hba_name *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_5, &VAR_8, VAR_2,
   VAR_4, sizeof(VAR_9));
 if (VAR_11)
  return VAR_11;

 VAR_10 = VAR_8.va;
 if (VAR_7)
  VAR_10->hdr.version = 1;
 VAR_11 = FUNC_0(VAR_5, &VAR_8, ((void*)0),
       &VAR_9, sizeof(VAR_9));
 if (VAR_11) {
  FUNC_1(VAR_5, VAR_3,
       VAR_0 | VAR_1,
       "BS_%d : Initiator Name MBX Failed\n");
  return VAR_11;
 }
 VAR_11 = FUNC_3(VAR_6, "%s\n", VAR_9.initiator_name);
 return VAR_11;
}

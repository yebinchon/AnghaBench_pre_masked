
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* os_type; void* mad_version; void* partition_number; int partition_name; int srp_version; } ;
struct ibmvscsi_host_data {TYPE_1__ madapter_info; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ibmvscsi_host_data *VAR_5)
{
 FUNC_2(&VAR_5->madapter_info, 0x00,
   sizeof(VAR_5->madapter_info));

 FUNC_1(VAR_5->dev, "SRP_VERSION: %s\n", VAR_2);
 FUNC_3(VAR_5->madapter_info.srp_version, VAR_2);

 FUNC_4(VAR_5->madapter_info.partition_name, VAR_3,
   sizeof(VAR_5->madapter_info.partition_name));

 VAR_5->madapter_info.partition_number =
     FUNC_0(VAR_4);

 VAR_5->madapter_info.mad_version = FUNC_0(VAR_1);
 VAR_5->madapter_info.os_type = FUNC_0(VAR_0);
}

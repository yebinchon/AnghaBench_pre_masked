
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snic_fw_req {int dummy; } ;
struct snic {int shost; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct snic *VAR_0, struct snic_fw_req *VAR_1)
{
 FUNC_1(VAR_0->shost, "Message Ack Received.\n");

 FUNC_0(1);
}

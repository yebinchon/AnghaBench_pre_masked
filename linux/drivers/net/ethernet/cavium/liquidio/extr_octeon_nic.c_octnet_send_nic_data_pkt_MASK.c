
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octnic_data_pkt {int reqtype; int datasize; int buf; int cmd; int q_no; } ;
struct octeon_device {int dummy; } ;


 int FUNC_0 (struct octeon_device*,int ,int,int *,int ,int ,int ) ;

int FUNC_1(struct octeon_device *VAR_0,
        struct octnic_data_pkt *VAR_1,
        int VAR_2)
{
 int VAR_3 = !VAR_2;

 return FUNC_0(VAR_0, VAR_1->q_no, VAR_3, &VAR_1->cmd,
       VAR_1->buf, VAR_1->datasize,
       VAR_1->reqtype);
}

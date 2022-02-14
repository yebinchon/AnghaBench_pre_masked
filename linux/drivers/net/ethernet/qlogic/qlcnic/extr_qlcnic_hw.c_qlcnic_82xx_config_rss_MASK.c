
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct qlcnic_nic_req {void** words; void* req_hdr; void* qhdr; } ;
struct qlcnic_adapter {TYPE_1__* netdev; scalar_t__ portnum; } ;
struct cmd_desc_type0 {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (int const) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct qlcnic_nic_req*,int ,int) ;
 int FUNC_3 (struct qlcnic_adapter*,struct cmd_desc_type0*,int) ;

int FUNC_4(struct qlcnic_adapter *VAR_6, int VAR_7)
{
 struct qlcnic_nic_req VAR_8;
 u64 VAR_9;
 int VAR_10, VAR_11;

 static const u64 VAR_12[] = {
  0xbeac01fa6a42b73bULL, 0x8030f20c77cb2da3ULL,
  0xae7b30b4d0ca2bcbULL, 0x43a38fb04167253dULL,
  0x255b0ec26d5a56daULL
 };

 FUNC_2(&VAR_8, 0, sizeof(struct qlcnic_nic_req));
 VAR_8.qhdr = FUNC_0(VAR_2 << 23);

 VAR_9 = VAR_1 | ((u64)VAR_6->portnum << 16);
 VAR_8.req_hdr = FUNC_0(VAR_9);
 VAR_9 = ((u64)(VAR_4 & 0x3) << 4) |
  ((u64)(VAR_4 & 0x3) << 6) |
  ((u64)(VAR_7 & 0x1) << 8) |
  ((u64)VAR_5 << 48) |
  (u64)VAR_0 |
  (u64)VAR_3;

 VAR_8.words[0] = FUNC_0(VAR_9);
 for (VAR_10 = 0; VAR_10 < 5; VAR_10++)
  VAR_8.words[VAR_10+1] = FUNC_0(VAR_12[VAR_10]);

 VAR_11 = FUNC_3(VAR_6, (struct cmd_desc_type0 *)&VAR_8, 1);
 if (VAR_11 != 0)
  FUNC_1(&VAR_6->netdev->dev, "could not configure RSS\n");

 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ehea_cq {int fw_handle; int adapter; int epas; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ehea_cq*,int ) ;
 int FUNC_1 (int ,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

int FUNC_4(struct ehea_cq *VAR_5)
{
 u64 VAR_6, VAR_7, VAR_8;
 if (!VAR_5)
  return 0;

 FUNC_2(&VAR_5->epas);
 VAR_6 = FUNC_0(VAR_5, VAR_4);
 if (VAR_6 == VAR_2) {
  FUNC_1(VAR_5->adapter, VAR_5->fw_handle, &VAR_7, &VAR_8);
  VAR_6 = FUNC_0(VAR_5, VAR_1);
 }

 if (VAR_6 != VAR_3) {
  FUNC_3("destroy CQ failed\n");
  return -VAR_0;
 }

 return 0;
}

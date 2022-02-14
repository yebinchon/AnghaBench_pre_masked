
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvec {int dummy; } ;
struct iscsi_conn {int dummy; } ;
struct iscsi_cmd {int tx_size; int iov_misc_count; struct kvec* iov_misc; int iov_data_count; struct kvec* iov_data; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct iscsi_conn*,struct kvec*,int ,int) ;

int FUNC_2(
 struct iscsi_cmd *VAR_1,
 struct iscsi_conn *VAR_2,
 int VAR_3)
{
 int VAR_4, VAR_5;
 u32 VAR_6;
 struct kvec *VAR_7;

send_data:
 VAR_5 = VAR_1->tx_size;

 if (!VAR_3) {
  VAR_7 = &VAR_1->iov_data[0];
  VAR_6 = VAR_1->iov_data_count;
 } else {
  VAR_7 = &VAR_1->iov_misc[0];
  VAR_6 = VAR_1->iov_misc_count;
 }

 VAR_4 = FUNC_1(VAR_2, &VAR_7[0], VAR_6, VAR_5);
 if (VAR_5 != VAR_4) {
  if (VAR_4 == -VAR_0) {
   FUNC_0("tx_data() returned -EAGAIN\n");
   goto send_data;
  } else
   return -1;
 }
 VAR_1->tx_size = 0;

 return 0;
}

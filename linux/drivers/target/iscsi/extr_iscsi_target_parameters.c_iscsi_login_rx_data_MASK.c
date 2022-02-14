
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvec {int iov_len; char* iov_base; } ;
struct iscsi_conn {int dummy; } ;


 int FUNC_0 (struct kvec*,int ,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct iscsi_conn*,struct kvec*,int,int) ;

int FUNC_3(
 struct iscsi_conn *VAR_0,
 char *VAR_1,
 int VAR_2)
{
 int VAR_3;
 struct kvec VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(struct kvec));
 VAR_4.iov_len = VAR_2;
 VAR_4.iov_base = VAR_1;

 VAR_3 = FUNC_2(VAR_0, &VAR_4, 1, VAR_2);
 if (VAR_3 != VAR_2) {
  FUNC_1("rx_data returned %d, expecting %d.\n",
    VAR_3, VAR_2);
  return -1;
 }

 return 0 ;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvec {int iov_len; char* iov_base; } ;
struct iscsi_conn {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvec*,int ,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct iscsi_conn*,struct kvec*,int,int) ;

int FUNC_3(
 struct iscsi_conn *VAR_1,
 char *VAR_2,
 char *VAR_3,
 int VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 1;
 struct kvec VAR_8[2];

 VAR_5 = (VAR_0 + VAR_4);

 FUNC_0(&VAR_8[0], 0, 2 * sizeof(struct kvec));
 VAR_8[0].iov_len = VAR_0;
 VAR_8[0].iov_base = VAR_2;

 if (VAR_3 && VAR_4) {
  VAR_8[1].iov_len = VAR_4;
  VAR_8[1].iov_base = VAR_3;
  VAR_7++;
 }

 VAR_6 = FUNC_2(VAR_1, &VAR_8[0], VAR_7, VAR_5);
 if (VAR_6 != VAR_5) {
  FUNC_1("tx_data returned %d, expecting %d.\n",
    VAR_6, VAR_5);
  return -1;
 }

 return 0;
}

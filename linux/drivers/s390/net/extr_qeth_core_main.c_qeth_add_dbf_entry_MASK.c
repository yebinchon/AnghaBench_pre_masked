
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_dbf_entry {int dbf_list; scalar_t__ dbf_info; int dbf_name; } ;
struct qeth_card {scalar_t__ debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char*,int,int,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (scalar_t__) ;
 struct qeth_dbf_entry* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_9(struct qeth_card *VAR_7, char *VAR_8)
{
 struct qeth_dbf_entry *VAR_9;

 VAR_7->debug = FUNC_1(VAR_8, 2, 1, 8);
 if (!VAR_7->debug) {
  FUNC_0(VAR_3, 2, "%s", "qcdbf");
  goto err;
 }
 if (FUNC_2(VAR_7->debug, &VAR_4))
  goto err_dbg;
 VAR_9 = FUNC_4(sizeof(struct qeth_dbf_entry), VAR_2);
 if (!VAR_9)
  goto err_dbg;
 FUNC_8(VAR_9->dbf_name, VAR_8, VAR_0);
 VAR_9->dbf_info = VAR_7->debug;
 FUNC_6(&VAR_6);
 FUNC_5(&VAR_9->dbf_list, &VAR_5);
 FUNC_7(&VAR_6);

 return 0;

err_dbg:
 FUNC_3(VAR_7->debug);
err:
 return -VAR_1;
}

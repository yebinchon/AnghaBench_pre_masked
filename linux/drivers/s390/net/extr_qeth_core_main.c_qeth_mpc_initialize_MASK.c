
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;


 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*,int,char*) ;
 int FUNC_3 (struct qeth_card*,int,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct qeth_card*) ;
 int FUNC_6 (struct qeth_card*) ;
 int FUNC_7 (struct qeth_card*) ;
 int FUNC_8 (struct qeth_card*) ;
 int FUNC_9 (struct qeth_card*) ;
 int FUNC_10 (struct qeth_card*) ;
 int FUNC_11 (struct qeth_card*) ;
 int FUNC_12 (struct qeth_card*,int) ;
 int FUNC_13 (struct qeth_card*) ;
 int FUNC_14 (struct qeth_card*) ;
 int FUNC_15 (struct qeth_card*) ;

__attribute__((used)) static int FUNC_16(struct qeth_card *VAR_0)
{
 int VAR_1;

 FUNC_2(VAR_0, 2, "mpcinit");

 VAR_1 = FUNC_10(VAR_0);
 if (VAR_1) {
  FUNC_3(VAR_0, 2, "1err%d", VAR_1);
  return VAR_1;
 }
 VAR_1 = FUNC_6(VAR_0);
 if (VAR_1) {
  FUNC_3(VAR_0, 2, "2err%d", VAR_1);
  goto out_qdio;
 }
 VAR_1 = FUNC_7(VAR_0);
 if (VAR_1) {
  FUNC_3(VAR_0, 2, "3err%d", VAR_1);
  goto out_qdio;
 }
 VAR_1 = FUNC_14(VAR_0);
 if (VAR_1) {
  FUNC_3(VAR_0, 2, "4err%d", VAR_1);
  goto out_qdio;
 }
 VAR_1 = FUNC_15(VAR_0);
 if (VAR_1) {
  FUNC_3(VAR_0, 2, "5err%d", VAR_1);
  goto out_qdio;
 }
 VAR_1 = FUNC_5(VAR_0);
 if (VAR_1) {
  FUNC_3(VAR_0, 2, "5err%d", VAR_1);
  goto out_qdio;
 }
 VAR_1 = FUNC_13(VAR_0);
 if (VAR_1) {
  FUNC_3(VAR_0, 2, "6err%d", VAR_1);
  FUNC_9(VAR_0);
  goto out_qdio;
 }
 VAR_1 = FUNC_11(VAR_0);
 if (VAR_1) {
  FUNC_3(VAR_0, 2, "7err%d", VAR_1);
  goto out_qdio;
 }
 VAR_1 = FUNC_8(VAR_0);
 if (VAR_1) {
  FUNC_3(VAR_0, 2, "8err%d", VAR_1);
  goto out_qdio;
 }

 return 0;
out_qdio:
 FUNC_12(VAR_0, !FUNC_1(VAR_0));
 FUNC_4(FUNC_0(VAR_0));
 return VAR_1;
}

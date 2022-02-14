
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int data; int write; int read; } ;


 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*,int *) ;

__attribute__((used)) static int FUNC_2(struct qeth_card *VAR_0)
{
 int VAR_1 = 0, VAR_2 = 0, VAR_3 = 0;

 FUNC_0(VAR_0, 3, "clearchs");
 VAR_1 = FUNC_1(VAR_0, &VAR_0->read);
 VAR_2 = FUNC_1(VAR_0, &VAR_0->write);
 VAR_3 = FUNC_1(VAR_0, &VAR_0->data);
 if (VAR_1)
  return VAR_1;
 if (VAR_2)
  return VAR_2;
 return VAR_3;
}

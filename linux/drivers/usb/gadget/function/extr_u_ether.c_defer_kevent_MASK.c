
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eth_dev {int work; int todo; } ;


 int FUNC_0 (struct eth_dev*,char*,int) ;
 int FUNC_1 (struct eth_dev*,char*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct eth_dev *VAR_0, int VAR_1)
{
 if (FUNC_3(VAR_1, &VAR_0->todo))
  return;
 if (!FUNC_2(&VAR_0->work))
  FUNC_1(VAR_0, "kevent %d may have been dropped\n", VAR_1);
 else
  FUNC_0(VAR_0, "kevent %d scheduled\n", VAR_1);
}

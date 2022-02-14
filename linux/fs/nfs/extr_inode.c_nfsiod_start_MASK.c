
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct workqueue_struct* FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 struct workqueue_struct* VAR_2 ;

__attribute__((used)) static int FUNC_2(void)
{
 struct workqueue_struct *VAR_3;
 FUNC_1("RPC:       creating workqueue nfsiod\n");
 VAR_3 = FUNC_0("nfsiod", VAR_1, 0);
 if (VAR_3 == ((void*)0))
  return -VAR_0;
 VAR_2 = VAR_3;
 return 0;
}

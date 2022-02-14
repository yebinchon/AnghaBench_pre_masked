
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at86rf230_local {int state; int state_complete; } ;


 int VAR_0 ;
 int FUNC_0 (struct at86rf230_local*,int *,int) ;
 int FUNC_1 (struct at86rf230_local*,int *,unsigned int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 unsigned long FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(struct at86rf230_local *VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(VAR_2, &VAR_2->state, VAR_3,
         VAR_1);

 VAR_4 = FUNC_3(&VAR_2->state_complete,
      FUNC_2(100));
 if (!VAR_4) {
  FUNC_0(VAR_2, &VAR_2->state, -VAR_0);
  return -VAR_0;
 }

 return 0;
}

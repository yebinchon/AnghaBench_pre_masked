
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subchannel {int lock; } ;
struct eadm_private {scalar_t__ state; int * completion; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct subchannel*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct subchannel*) ;
 int FUNC_3 (struct subchannel*,int ) ;
 struct eadm_private* FUNC_4 (struct subchannel*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct subchannel *VAR_3)
{
 struct eadm_private *VAR_4 = FUNC_4(VAR_3);
 FUNC_0(VAR_2);
 int VAR_5;

 FUNC_5(VAR_3->lock);
 if (VAR_4->state != VAR_0)
  goto disable;

 if (FUNC_2(VAR_3))
  goto disable;

 VAR_4->completion = &VAR_2;
 FUNC_6(VAR_3->lock);

 FUNC_7(&VAR_2);

 FUNC_5(VAR_3->lock);
 VAR_4->completion = ((void*)0);

disable:
 FUNC_3(VAR_3, 0);
 do {
  VAR_5 = FUNC_1(VAR_3);
 } while (VAR_5 == -VAR_1);

 FUNC_6(VAR_3->lock);
}

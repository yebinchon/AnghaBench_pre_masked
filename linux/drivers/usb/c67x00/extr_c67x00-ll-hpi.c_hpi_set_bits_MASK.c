
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int lock; } ;
struct c67x00_device {TYPE_1__ hpi; } ;


 int FUNC_0 (struct c67x00_device*,int) ;
 int FUNC_1 (struct c67x00_device*,int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct c67x00_device *VAR_0, u16 VAR_1, u16 VAR_2)
{
 u16 VAR_3;
 unsigned long VAR_4;

 FUNC_2(&VAR_0->hpi.lock, VAR_4);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_1, VAR_3 | VAR_2);
 FUNC_3(&VAR_0->hpi.lock, VAR_4);
}

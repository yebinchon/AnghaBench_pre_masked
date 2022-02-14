
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct be_adapter {int mbox_lock; } ;


 int FUNC_0 (struct be_adapter*) ;
 scalar_t__ FUNC_1 (struct be_adapter*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct be_adapter*) ;

int FUNC_5(struct be_adapter *VAR_0)
{
 u8 *VAR_1;
 int VAR_2;

 if (FUNC_1(VAR_0))
  return 0;

 if (FUNC_2(&VAR_0->mbox_lock))
  return -1;

 VAR_1 = (u8 *)FUNC_4(VAR_0);
 *VAR_1++ = 0xFF;
 *VAR_1++ = 0x12;
 *VAR_1++ = 0x34;
 *VAR_1++ = 0xFF;
 *VAR_1++ = 0xFF;
 *VAR_1++ = 0x56;
 *VAR_1++ = 0x78;
 *VAR_1 = 0xFF;

 VAR_2 = FUNC_0(VAR_0);

 FUNC_3(&VAR_0->mbox_lock);
 return VAR_2;
}

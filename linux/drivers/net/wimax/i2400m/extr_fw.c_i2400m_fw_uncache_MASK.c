
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void i2400m_fw ;
struct i2400m {int rx_lock; int * fw_cached; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct i2400m *VAR_0)
{
 struct i2400m_fw *VAR_1;

 FUNC_1(&VAR_0->rx_lock);
 VAR_1 = VAR_0->fw_cached;
 VAR_0->fw_cached = ((void*)0);
 FUNC_2(&VAR_0->rx_lock);

 if (VAR_1 != ((void*)0) && VAR_1 != (void *) ~0)
  FUNC_0(VAR_1);
}

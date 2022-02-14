
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scu_ipc_data {unsigned int count; int mask; int * data; int * addr; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int *,int *,unsigned int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int *,unsigned int) ;

__attribute__((used)) static int FUNC_3(u32 VAR_2, struct scu_ipc_data *VAR_3)
{
 unsigned int VAR_4 = VAR_3->count;

 if (VAR_4 == 0 || VAR_4 == 3 || VAR_4 > 4)
  return -VAR_0;

 switch (VAR_2) {
 case 130:
  return FUNC_0(VAR_3->addr, VAR_3->data, VAR_4);
 case 128:
  return FUNC_2(VAR_3->addr, VAR_3->data, VAR_4);
 case 129:
  return FUNC_1(VAR_3->addr[0],
          VAR_3->data[0], VAR_3->mask);
 default:
  return -VAR_1;
 }
}

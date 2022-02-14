
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct realtek_smi {int num_ports; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct realtek_smi *VAR_2, int VAR_3, int *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 if (VAR_3 >= VAR_2->num_ports)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_2->map, FUNC_0(VAR_3),
     &VAR_5);
 if (VAR_6)
  return VAR_6;

 *VAR_4 = (VAR_5 >> FUNC_1(VAR_3)) &
  VAR_1;

 return 0;
}

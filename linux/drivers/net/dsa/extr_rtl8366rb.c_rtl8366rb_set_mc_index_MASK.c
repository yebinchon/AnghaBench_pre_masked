
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct realtek_smi {int num_ports; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct realtek_smi *VAR_3, int VAR_4, int VAR_5)
{
 if (VAR_4 >= VAR_3->num_ports || VAR_5 >= VAR_1)
  return -VAR_0;

 return FUNC_2(VAR_3->map, FUNC_0(VAR_4),
    VAR_2 <<
     FUNC_1(VAR_4),
    (VAR_5 & VAR_2) <<
     FUNC_1(VAR_4));
}

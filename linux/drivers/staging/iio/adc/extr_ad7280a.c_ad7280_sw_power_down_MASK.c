
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7280_state {int ctrl_hb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ad7280_state*,int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_3)
{
 struct ad7280_state *VAR_4 = VAR_3;

 FUNC_0(VAR_4, VAR_2, VAR_0, 1,
       VAR_1 | VAR_4->ctrl_hb);
}

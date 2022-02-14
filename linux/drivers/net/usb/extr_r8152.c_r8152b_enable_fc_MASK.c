
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int flow_control; } ;
struct r8152 {TYPE_1__ ups_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct r8152*,int ) ;
 int FUNC_1 (struct r8152*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct r8152 *VAR_3)
{
 u16 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2);
 VAR_4 |= VAR_1 | VAR_0;
 FUNC_1(VAR_3, VAR_2, VAR_4);

 VAR_3->ups_info.flow_control = 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int card; scalar_t__ chan; } ;
typedef TYPE_1__ port_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(port_t *VAR_1)
{
 FUNC_1(FUNC_0(VAR_0, VAR_1->card) &
   (VAR_1->chan ? 0x00FF00FF : 0xFF00FF00), VAR_0, VAR_1->card);
}

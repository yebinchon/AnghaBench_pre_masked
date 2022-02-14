
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mcfqspi {TYPE_1__* cs_control; } ;
struct TYPE_2__ {int (* deselect ) (TYPE_1__*,int ,int) ;} ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct mcfqspi *VAR_0, u8 VAR_1,
    bool VAR_2)
{
 VAR_0->cs_control->deselect(VAR_0->cs_control, VAR_1, VAR_2);
}

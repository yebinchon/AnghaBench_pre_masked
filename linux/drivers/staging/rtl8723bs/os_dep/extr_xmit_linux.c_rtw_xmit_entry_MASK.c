
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int truesize; } ;
typedef TYPE_1__ _pkt ;
typedef int _nic_hdl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(_pkt *VAR_2, _nic_hdl VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2) {
  FUNC_1(VAR_1, VAR_0, VAR_2->truesize);
  VAR_4 = FUNC_0(VAR_2, VAR_3);
 }

 return VAR_4;
}

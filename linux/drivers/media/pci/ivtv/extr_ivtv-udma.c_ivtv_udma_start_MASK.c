
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int SG_handle; } ;
struct ivtv {int i_flags; TYPE_1__ udma; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int ) ;

void FUNC_6(struct ivtv *VAR_5)
{
 FUNC_0("start UDMA\n");
 FUNC_4(VAR_5->udma.SG_handle, VAR_3);
 FUNC_5(FUNC_2(VAR_4) | 0x01, VAR_4);
 FUNC_3(VAR_0, &VAR_5->i_flags);
 FUNC_3(VAR_1, &VAR_5->i_flags);
 FUNC_1(VAR_2, &VAR_5->i_flags);
}

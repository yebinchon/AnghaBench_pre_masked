
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_ioa_cfg {int nvectors; TYPE_2__* vectors_info; TYPE_1__* host; } ;
struct TYPE_4__ {scalar_t__* desc; } ;
struct TYPE_3__ {int host_no; } ;


 int FUNC_0 (scalar_t__*,int,char*,int,int) ;
 size_t FUNC_1 (scalar_t__*) ;

__attribute__((used)) static void FUNC_2(struct ipr_ioa_cfg *VAR_0)
{
 int VAR_1, VAR_2 = sizeof(VAR_0->vectors_info[0].desc) - 1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nvectors; VAR_1++) {
  FUNC_0(VAR_0->vectors_info[VAR_1].desc, VAR_2,
    "host%d-%d", VAR_0->host->host_no, VAR_1);
  VAR_0->vectors_info[VAR_1].
   desc[FUNC_1(VAR_0->vectors_info[VAR_1].desc)] = 0;
 }
}

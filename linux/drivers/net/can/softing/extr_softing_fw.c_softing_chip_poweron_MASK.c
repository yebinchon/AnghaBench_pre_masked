
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void** chip; void* license; void* hw_version; void* fw_version; int serial; } ;
struct softing {int * dpram; TYPE_1__ id; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct softing*,int,int,char*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct softing*,int,char*) ;
 int FUNC_4 (struct softing*) ;

int FUNC_5(struct softing *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, 99, 0x55, "sync-a");
 if (VAR_2 < 0)
  goto failed;

 VAR_2 = FUNC_0(VAR_1, 99, 0xaa, "sync-b");
 if (VAR_2 < 0)
  goto failed;

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2 < 0)
  goto failed;

 VAR_2 = FUNC_3(VAR_1, 43, "get_serial_number");
 if (VAR_2 < 0)
  goto failed;
 VAR_1->id.serial = FUNC_2(&VAR_1->dpram[VAR_0]);

 VAR_2 = FUNC_3(VAR_1, 12, "get_version");
 if (VAR_2 < 0)
  goto failed;
 VAR_1->id.fw_version = FUNC_1(&VAR_1->dpram[VAR_0 + 2]);
 VAR_1->id.hw_version = FUNC_1(&VAR_1->dpram[VAR_0 + 4]);
 VAR_1->id.license = FUNC_1(&VAR_1->dpram[VAR_0 + 6]);
 VAR_1->id.chip[0] = FUNC_1(&VAR_1->dpram[VAR_0 + 8]);
 VAR_1->id.chip[1] = FUNC_1(&VAR_1->dpram[VAR_0 + 10]);
 return 0;
failed:
 return VAR_2;
}

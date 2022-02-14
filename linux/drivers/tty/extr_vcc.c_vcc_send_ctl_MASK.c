
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sid; scalar_t__ stype; int type; } ;
struct vio_vcc {TYPE_1__ tag; } ;
struct TYPE_4__ {int lp; } ;
struct vcc_port {TYPE_2__ vio; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct vio_vcc*,int) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct vcc_port *VAR_1, int VAR_2)
{
 struct vio_vcc VAR_3;
 int VAR_4;

 VAR_3.tag.type = VAR_0;
 VAR_3.tag.sid = VAR_2;
 VAR_3.tag.stype = 0;

 VAR_4 = FUNC_1(VAR_1->vio.lp, &VAR_3, sizeof(VAR_3.tag));
 FUNC_0(!VAR_4);
 FUNC_2("VCC: ldc_write(%ld)=%d\n", sizeof(VAR_3.tag), VAR_4);

 return VAR_4;
}

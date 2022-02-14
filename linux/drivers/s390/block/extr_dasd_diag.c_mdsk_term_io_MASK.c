
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int devno; } ;
struct dasd_diag_init_io {int dev_nr; } ;
struct dasd_diag_private {TYPE_1__ dev_id; struct dasd_diag_init_io iib; } ;
struct dasd_device {struct dasd_diag_private* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct dasd_diag_init_io*,int ) ;
 int FUNC_1 (struct dasd_diag_init_io*,int ,int) ;

__attribute__((used)) static inline int
FUNC_2(struct dasd_device * VAR_1)
{
 struct dasd_diag_private *VAR_2 = VAR_1->private;
 struct dasd_diag_init_io *VAR_3 = &VAR_2->iib;
 int VAR_4;

 FUNC_1(VAR_3, 0, sizeof (struct dasd_diag_init_io));
 VAR_3->dev_nr = VAR_2->dev_id.devno;
 VAR_4 = FUNC_0(VAR_3, VAR_0);
 return VAR_4;
}

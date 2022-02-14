
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int devno; } ;
struct dasd_diag_init_io {unsigned int block_size; int end_block; int flaga; int offset; int dev_nr; } ;
struct dasd_diag_private {TYPE_1__ dev_id; struct dasd_diag_init_io iib; } ;
struct dasd_device {struct dasd_diag_private* private; } ;
typedef int blocknum_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dasd_diag_init_io*,int ) ;
 int FUNC_1 (struct dasd_diag_init_io*,int ,int) ;

__attribute__((used)) static inline int
FUNC_2(struct dasd_device *VAR_2, unsigned int VAR_3,
      blocknum_t VAR_4, blocknum_t *VAR_5)
{
 struct dasd_diag_private *VAR_6 = VAR_2->private;
 struct dasd_diag_init_io *VAR_7 = &VAR_6->iib;
 int VAR_8;

 FUNC_1(VAR_7, 0, sizeof (struct dasd_diag_init_io));

 VAR_7->dev_nr = VAR_6->dev_id.devno;
 VAR_7->block_size = VAR_3;
 VAR_7->offset = VAR_4;
 VAR_7->flaga = VAR_0;

 VAR_8 = FUNC_0(VAR_7, VAR_1);

 if ((VAR_8 & 3) == 0 && VAR_5)
  *VAR_5 = VAR_7->end_block;

 return VAR_8;
}

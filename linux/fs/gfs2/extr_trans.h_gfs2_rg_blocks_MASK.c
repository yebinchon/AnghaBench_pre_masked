
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_rgrpd {unsigned int rd_length; } ;
struct TYPE_3__ {struct gfs2_rgrpd* rgd; } ;
struct TYPE_4__ {TYPE_1__ rs_rbm; } ;
struct gfs2_inode {TYPE_2__ i_res; } ;



__attribute__((used)) static inline unsigned int FUNC_0(const struct gfs2_inode *VAR_0, unsigned VAR_1)
{
 struct gfs2_rgrpd *VAR_2 = VAR_0->i_res.rs_rbm.rgd;

 if (VAR_1 < VAR_2->rd_length)
  return VAR_1 + 1;
 return VAR_2->rd_length;
}

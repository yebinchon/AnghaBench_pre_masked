
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sb_bsize; } ;
struct gfs2_sbd {TYPE_1__ sd_sb; } ;
typedef int __be64 ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct gfs2_sbd *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = (VAR_1->sd_sb.sb_bsize - VAR_0) / (2 * sizeof(__be64));
 return VAR_2;
}

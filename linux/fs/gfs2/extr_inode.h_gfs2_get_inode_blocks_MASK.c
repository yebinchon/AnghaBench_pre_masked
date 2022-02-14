
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct inode {int i_blocks; } ;
struct TYPE_3__ {int sb_bsize_shift; } ;
struct TYPE_4__ {TYPE_1__ sd_sb; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode const*) ;

__attribute__((used)) static inline u64 FUNC_1(const struct inode *VAR_1)
{
 return VAR_1->i_blocks >>
  (FUNC_0(VAR_1)->sd_sb.sb_bsize_shift - VAR_0);
}

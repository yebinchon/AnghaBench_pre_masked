
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_modedef {unsigned long default_density; unsigned long default_blksize; } ;
struct scsi_tape {unsigned long density; unsigned long block_size; int blksize_changed; int density_changed; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct scsi_tape*,int ,unsigned long) ;
 int FUNC_1 (int ,struct scsi_tape*,char*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct scsi_tape * VAR_5, struct st_modedef * VAR_6)
{
 int VAR_7 = 0;
 unsigned long VAR_8;

 if (!VAR_5->density_changed &&
     VAR_6->default_density >= 0 &&
     VAR_6->default_density != VAR_5->density) {
  VAR_8 = VAR_6->default_density;
  VAR_7 = 1;
 } else
  VAR_8 = VAR_5->density;
 VAR_8 <<= VAR_2;
 if (!VAR_5->blksize_changed &&
     VAR_6->default_blksize >= 0 &&
     VAR_6->default_blksize != VAR_5->block_size) {
  VAR_8 |= VAR_6->default_blksize;
  VAR_7 = 1;
 } else
  VAR_8 |= VAR_5->block_size;
 if (VAR_7 &&
     FUNC_0(VAR_5, VAR_3, VAR_8)) {
  FUNC_1(VAR_1, VAR_5,
     "Can't set default block size to %d bytes "
     "and density %x.\n",
     VAR_6->default_blksize, VAR_6->default_density);
  if (VAR_4)
   return (-VAR_0);
 }
 return 0;
}

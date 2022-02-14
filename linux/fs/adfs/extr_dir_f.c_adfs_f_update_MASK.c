
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int s_blocksize; unsigned int s_blocksize_bits; } ;
struct object_info {int indaddr; } ;
struct TYPE_5__ {scalar_t__ endmasseq; char endname; int dircheckbyte; } ;
struct TYPE_6__ {scalar_t__ startmasseq; TYPE_1__ new; int startname; } ;
struct adfs_dir {int nr_buffers; struct super_block* sb; TYPE_3__** bh; TYPE_2__ dirtail; TYPE_2__ dirhead; } ;
struct TYPE_7__ {int* b_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct adfs_dir*,int,struct object_info*) ;
 int FUNC_1 (struct adfs_dir*) ;
 int FUNC_2 (struct adfs_dir*,int ) ;
 int FUNC_3 (struct super_block*,char*) ;
 int FUNC_4 (TYPE_3__**,int) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (int *,char*,int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct adfs_dir *VAR_1, struct object_info *VAR_2)
{
 struct super_block *VAR_3 = VAR_1->sb;
 int VAR_4, VAR_5;

 VAR_4 = FUNC_2(VAR_1, VAR_2->indaddr);
 if (VAR_4 < 0) {
  FUNC_3(VAR_1->sb, "unable to locate entry to update");
  goto out;
 }

 FUNC_0(VAR_1, VAR_4, VAR_2);




 VAR_1->bh[0]->b_data[0] += 1;
 VAR_1->bh[VAR_1->nr_buffers - 1]->b_data[VAR_3->s_blocksize - 6] += 1;

 VAR_4 = FUNC_1(VAR_1);



 VAR_1->bh[VAR_1->nr_buffers - 1]->b_data[VAR_3->s_blocksize - 1] = VAR_4;


 {
 const unsigned int VAR_6 = VAR_3->s_blocksize_bits;

 FUNC_7(&VAR_1->dirhead, FUNC_4(VAR_1->bh, 0), sizeof(VAR_1->dirhead));
 FUNC_7(&VAR_1->dirtail, FUNC_4(VAR_1->bh, 2007), sizeof(VAR_1->dirtail));

 if (VAR_1->dirhead.startmasseq != VAR_1->dirtail.new.endmasseq ||
     FUNC_6(&VAR_1->dirhead.startname, &VAR_1->dirtail.new.endname, 4))
  goto bad_dir;

 if (FUNC_6(&VAR_1->dirhead.startname, "Nick", 4) &&
     FUNC_6(&VAR_1->dirhead.startname, "Hugo", 4))
  goto bad_dir;

 if (FUNC_1(VAR_1) != VAR_1->dirtail.new.dircheckbyte)
  goto bad_dir;
 }

 for (VAR_5 = VAR_1->nr_buffers - 1; VAR_5 >= 0; VAR_5--)
  FUNC_5(VAR_1->bh[VAR_5]);

 VAR_4 = 0;
out:
 return VAR_4;

bad_dir:
 FUNC_3(VAR_1->sb, "whoops!  I broke a directory!");
 return -VAR_0;

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {unsigned int s_blocksize_bits; int s_blocksize; } ;
struct buffer_head {int b_data; } ;
struct adfs_dir {int nr_buffers; struct super_block* sb; struct buffer_head** bh_fplus; struct buffer_head** bh; void* parent_id; } ;
struct adfs_bigdirtail {scalar_t__ bigdirendname; scalar_t__ bigdirendmasseq; scalar_t__* reserved; } ;
struct adfs_bigdirheader {scalar_t__* bigdirversion; scalar_t__ bigdirstartname; scalar_t__ startmasseq; int bigdirparent; int bigdirsize; } ;


 unsigned int FUNC_0 (struct buffer_head**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_1 (struct super_block*,unsigned int,unsigned int) ;
 int FUNC_2 (struct super_block*,char*,unsigned int,...) ;
 int FUNC_3 (struct super_block*,int ,char*,unsigned int,unsigned int) ;
 int FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (int ) ;
 struct buffer_head** FUNC_6 (unsigned int,int,int ) ;
 int FUNC_7 (struct buffer_head**) ;
 void* FUNC_8 (int ) ;
 void* FUNC_9 (struct super_block*,unsigned long) ;

__attribute__((used)) static int
FUNC_10(struct super_block *VAR_7, unsigned int VAR_8, unsigned int VAR_9, struct adfs_dir *VAR_10)
{
 struct adfs_bigdirheader *VAR_11;
 struct adfs_bigdirtail *VAR_12;
 unsigned long VAR_13;
 unsigned int VAR_14, VAR_15;
 int VAR_16, VAR_17 = -VAR_2;

 VAR_10->nr_buffers = 0;


 VAR_10->bh_fplus = &VAR_10->bh[0];

 VAR_13 = FUNC_1(VAR_7, VAR_8, 0);
 if (!VAR_13) {
  FUNC_2(VAR_7, "dir object %X has a hole at offset 0", VAR_8);
  goto out;
 }

 VAR_10->bh_fplus[0] = FUNC_9(VAR_7, VAR_13);
 if (!VAR_10->bh_fplus[0])
  goto out;
 VAR_10->nr_buffers += 1;

 VAR_11 = (struct adfs_bigdirheader *)VAR_10->bh_fplus[0]->b_data;
 VAR_15 = FUNC_8(VAR_11->bigdirsize);
 if (VAR_15 != VAR_9) {
  FUNC_3(VAR_7, VAR_6,
    "directory header size %X does not match directory size %X",
    VAR_15, VAR_9);
 }

 if (VAR_11->bigdirversion[0] != 0 || VAR_11->bigdirversion[1] != 0 ||
     VAR_11->bigdirversion[2] != 0 || VAR_15 & 2047 ||
     VAR_11->bigdirstartname != FUNC_5(VAR_1)) {
  FUNC_2(VAR_7, "dir %06x has malformed header", VAR_8);
  goto out;
 }

 VAR_15 >>= VAR_7->s_blocksize_bits;
 if (VAR_15 > FUNC_0(VAR_10->bh)) {

  struct buffer_head **VAR_18 =
   FUNC_6(VAR_15, sizeof(struct buffer_head *),
    VAR_4);
  if (!VAR_18) {
   FUNC_3(VAR_7, VAR_5,
     "not enough memory for dir object %X (%d blocks)",
     VAR_8, VAR_15);
   VAR_17 = -VAR_3;
   goto out;
  }
  VAR_10->bh_fplus = VAR_18;

  VAR_10->bh_fplus[0] = VAR_10->bh[0];
 }

 for (VAR_14 = 1; VAR_14 < VAR_15; VAR_14++) {
  VAR_13 = FUNC_1(VAR_7, VAR_8, VAR_14);
  if (!VAR_13) {
   FUNC_2(VAR_7, "dir object %X has a hole at offset %d", VAR_8, VAR_14);
   goto out;
  }

  VAR_10->bh_fplus[VAR_14] = FUNC_9(VAR_7, VAR_13);
  if (!VAR_10->bh_fplus[VAR_14]) {
   FUNC_2(VAR_7, "dir object %x failed read for offset %d, mapped block %lX",
       VAR_8, VAR_14, VAR_13);
   goto out;
  }

  VAR_10->nr_buffers += 1;
 }

 VAR_12 = (struct adfs_bigdirtail *)
  (VAR_10->bh_fplus[VAR_15 - 1]->b_data + (VAR_7->s_blocksize - 8));

 if (VAR_12->bigdirendname != FUNC_5(VAR_0) ||
     VAR_12->bigdirendmasseq != VAR_11->startmasseq ||
     VAR_12->reserved[0] != 0 || VAR_12->reserved[1] != 0) {
  FUNC_2(VAR_7, "dir %06x has malformed tail", VAR_8);
  goto out;
 }

 VAR_10->parent_id = FUNC_8(VAR_11->bigdirparent);
 VAR_10->sb = VAR_7;
 return 0;

out:
 if (VAR_10->bh_fplus) {
  for (VAR_16 = 0; VAR_16 < VAR_10->nr_buffers; VAR_16++)
   FUNC_4(VAR_10->bh_fplus[VAR_16]);

  if (&VAR_10->bh[0] != VAR_10->bh_fplus)
   FUNC_7(VAR_10->bh_fplus);

  VAR_10->bh_fplus = ((void*)0);
 }

 VAR_10->nr_buffers = 0;
 VAR_10->sb = ((void*)0);
 return VAR_17;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {unsigned int nrbufs; unsigned int curbuf; int buffers; struct pipe_buffer* bufs; } ;
struct pipe_buffer {size_t len; size_t offset; int flags; int * ops; } ;
struct fuse_dev {int dummy; } ;
struct fuse_copy_state {unsigned int nr_segs; int move_pages; struct pipe_inode_info* pipe; struct pipe_buffer* pipebufs; } ;
struct file {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (struct fuse_copy_state*,int ,int *) ;
 int FUNC_2 (struct fuse_dev*,struct fuse_copy_state*,size_t) ;
 struct fuse_dev* FUNC_3 (struct file*) ;
 int FUNC_4 (struct pipe_buffer*) ;
 struct pipe_buffer* FUNC_5 (unsigned int,int,int ) ;
 int FUNC_6 (struct pipe_inode_info*,struct pipe_buffer*) ;
 int FUNC_7 (struct pipe_inode_info*,struct pipe_buffer*) ;
 int FUNC_8 (struct pipe_inode_info*) ;
 int FUNC_9 (struct pipe_inode_info*) ;

__attribute__((used)) static ssize_t FUNC_10(struct pipe_inode_info *VAR_6,
         struct file *VAR_7, loff_t *VAR_8,
         size_t VAR_9, unsigned int VAR_10)
{
 unsigned VAR_11;
 unsigned VAR_12;
 struct pipe_buffer *VAR_13;
 struct fuse_copy_state VAR_14;
 struct fuse_dev *VAR_15;
 size_t VAR_16;
 ssize_t VAR_17;

 VAR_15 = FUNC_3(VAR_7);
 if (!VAR_15)
  return -VAR_2;

 FUNC_8(VAR_6);

 VAR_13 = FUNC_5(VAR_6->nrbufs, sizeof(struct pipe_buffer),
         VAR_3);
 if (!VAR_13) {
  FUNC_9(VAR_6);
  return -VAR_1;
 }

 VAR_11 = 0;
 VAR_16 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_6->nrbufs && VAR_16 < VAR_9; VAR_12++)
  VAR_16 += VAR_6->bufs[(VAR_6->curbuf + VAR_12) & (VAR_6->buffers - 1)].len;

 VAR_17 = -VAR_0;
 if (VAR_16 < VAR_9)
  goto out_free;

 VAR_16 = VAR_9;
 while (VAR_16) {
  struct pipe_buffer *VAR_18;
  struct pipe_buffer *VAR_19;

  FUNC_0(VAR_11 >= VAR_6->buffers);
  FUNC_0(!VAR_6->nrbufs);
  VAR_18 = &VAR_6->bufs[VAR_6->curbuf];
  VAR_19 = &VAR_13[VAR_11];

  if (VAR_16 >= VAR_18->len) {
   *VAR_19 = *VAR_18;
   VAR_18->ops = ((void*)0);
   VAR_6->curbuf = (VAR_6->curbuf + 1) & (VAR_6->buffers - 1);
   VAR_6->nrbufs--;
  } else {
   if (!FUNC_6(VAR_6, VAR_18))
    goto out_free;

   *VAR_19 = *VAR_18;
   VAR_19->flags &= ~VAR_4;
   VAR_19->len = VAR_16;
   VAR_18->offset += VAR_19->len;
   VAR_18->len -= VAR_19->len;
  }
  VAR_11++;
  VAR_16 -= VAR_19->len;
 }
 FUNC_9(VAR_6);

 FUNC_1(&VAR_14, 0, ((void*)0));
 VAR_14.pipebufs = VAR_13;
 VAR_14.nr_segs = VAR_11;
 VAR_14.pipe = VAR_6;

 if (VAR_10 & VAR_5)
  VAR_14.move_pages = 1;

 VAR_17 = FUNC_2(VAR_15, &VAR_14, VAR_9);

 FUNC_8(VAR_6);
out_free:
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  FUNC_7(VAR_6, &VAR_13[VAR_12]);
 FUNC_9(VAR_6);

 FUNC_4(VAR_13);
 return VAR_17;
}

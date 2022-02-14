
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int nrbufs; int buffers; int curbuf; struct pipe_buffer* bufs; int writers; int readers; } ;
struct pipe_buffer {size_t len; size_t offset; int flags; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pipe_inode_info*,unsigned int) ;
 int FUNC_1 (struct pipe_inode_info*,unsigned int) ;
 int FUNC_2 (struct pipe_inode_info*,struct pipe_buffer*) ;
 int FUNC_3 (struct pipe_buffer*) ;
 int FUNC_4 (struct pipe_inode_info*,struct pipe_inode_info*) ;
 int FUNC_5 (struct pipe_inode_info*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct pipe_inode_info*) ;
 int FUNC_8 (struct pipe_inode_info*) ;

__attribute__((used)) static int FUNC_9(struct pipe_inode_info *VAR_7,
          struct pipe_inode_info *VAR_8,
          size_t VAR_9, unsigned int VAR_10)
{
 struct pipe_buffer *VAR_11, *VAR_12;
 int VAR_13 = 0, VAR_14;
 bool VAR_15 = 0;


retry:
 VAR_13 = FUNC_0(VAR_7, VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_1(VAR_8, VAR_10);
 if (VAR_13)
  return VAR_13;






 FUNC_4(VAR_7, VAR_8);

 do {
  if (!VAR_8->readers) {
   FUNC_6(VAR_4, VAR_6, 0);
   if (!VAR_13)
    VAR_13 = -VAR_2;
   break;
  }

  if (!VAR_7->nrbufs && !VAR_7->writers)
   break;





  if (!VAR_7->nrbufs || VAR_8->nrbufs >= VAR_8->buffers) {

   if (VAR_13)
    break;

   if (VAR_10 & VAR_5) {
    VAR_13 = -VAR_0;
    break;
   }






   FUNC_5(VAR_7);
   FUNC_5(VAR_8);
   goto retry;
  }

  VAR_11 = VAR_7->bufs + VAR_7->curbuf;
  VAR_14 = (VAR_8->curbuf + VAR_8->nrbufs) & (VAR_8->buffers - 1);
  VAR_12 = VAR_8->bufs + VAR_14;

  if (VAR_9 >= VAR_11->len) {



   *VAR_12 = *VAR_11;
   VAR_11->ops = ((void*)0);
   VAR_8->nrbufs++;
   VAR_7->curbuf = (VAR_7->curbuf + 1) & (VAR_7->buffers - 1);
   VAR_7->nrbufs--;
   VAR_15 = 1;
  } else {




   if (!FUNC_2(VAR_7, VAR_11)) {
    if (VAR_13 == 0)
     VAR_13 = -VAR_1;
    break;
   }
   *VAR_12 = *VAR_11;





   VAR_12->flags &= ~VAR_3;

   FUNC_3(VAR_12);

   VAR_12->len = VAR_9;
   VAR_8->nrbufs++;
   VAR_11->offset += VAR_12->len;
   VAR_11->len -= VAR_12->len;
  }
  VAR_13 += VAR_12->len;
  VAR_9 -= VAR_12->len;
 } while (VAR_9);

 FUNC_5(VAR_7);
 FUNC_5(VAR_8);




 if (VAR_13 > 0)
  FUNC_7(VAR_8);

 if (VAR_15)
  FUNC_8(VAR_7);

 return VAR_13;
}

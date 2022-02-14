
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct gfs2_sbd {int sd_inptrs; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_inode {int i_diskflags; int i_inode; int i_eattr; int i_gl; } ;
struct gfs2_ea_request {int dummy; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
typedef scalar_t__ __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct buffer_head*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct gfs2_sbd* FUNC_1 (int *) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_5 (struct gfs2_inode*,void*) ;
 int FUNC_6 (struct gfs2_inode*,int ,struct gfs2_ea_request*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct gfs2_inode*,int *,unsigned int*,int ,int *) ;
 int FUNC_9 (struct buffer_head*,int) ;
 struct buffer_head* FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int ,int ,struct buffer_head**) ;
 scalar_t__ FUNC_12 (struct gfs2_sbd*,struct buffer_head*,int ) ;
 int FUNC_13 (struct buffer_head*,int ,int ) ;
 int FUNC_14 (int ,struct buffer_head*) ;
 int FUNC_15 (struct gfs2_sbd*,int ,int) ;

__attribute__((used)) static int FUNC_16(struct gfs2_inode *VAR_6, struct gfs2_ea_request *VAR_7,
   void *VAR_8)
{
 struct gfs2_sbd *VAR_9 = FUNC_1(&VAR_6->i_inode);
 struct buffer_head *VAR_10, *VAR_11;
 __be64 *VAR_12;
 int VAR_13;
 int VAR_14 = sizeof(struct gfs2_meta_header);

 if (VAR_6->i_diskflags & VAR_3) {
  __be64 *VAR_15;

  VAR_13 = FUNC_11(VAR_6->i_gl, VAR_6->i_eattr, VAR_0, 0,
           &VAR_10);
  if (VAR_13)
   return VAR_13;

  if (FUNC_12(VAR_9, VAR_10, VAR_5)) {
   VAR_13 = -VAR_1;
   goto out;
  }

  VAR_12 = (__be64 *)(VAR_10->b_data + VAR_14);
  VAR_15 = VAR_12 + VAR_9->sd_inptrs;

  for (; VAR_12 < VAR_15; VAR_12++)
   if (!*VAR_12)
    break;

  if (VAR_12 == VAR_15) {
   VAR_13 = -VAR_2;
   goto out;
  }

  FUNC_14(VAR_6->i_gl, VAR_10);
 } else {
  u64 VAR_16;
  unsigned int VAR_17 = 1;
  VAR_13 = FUNC_8(VAR_6, &VAR_16, &VAR_17, 0, ((void*)0));
  if (VAR_13)
   return VAR_13;
  FUNC_15(VAR_9, VAR_16, 1);
  VAR_10 = FUNC_10(VAR_6->i_gl, VAR_16);
  FUNC_14(VAR_6->i_gl, VAR_10);
  FUNC_13(VAR_10, VAR_5, VAR_4);
  FUNC_9(VAR_10, VAR_14);

  VAR_12 = (__be64 *)(VAR_10->b_data + VAR_14);
  *VAR_12 = FUNC_3(VAR_6->i_eattr);
  VAR_6->i_eattr = VAR_16;
  VAR_6->i_diskflags |= VAR_3;
  FUNC_7(&VAR_6->i_inode, 1);

  VAR_12++;
 }

 VAR_13 = FUNC_4(VAR_6, &VAR_11);
 if (VAR_13)
  goto out;

 *VAR_12 = FUNC_3((u64)VAR_11->b_blocknr);
 VAR_13 = FUNC_6(VAR_6, FUNC_0(VAR_11), VAR_7);
 FUNC_2(VAR_11);
 if (VAR_13)
  goto out;

 if (VAR_8)
  FUNC_5(VAR_6, VAR_8);

out:
 FUNC_2(VAR_10);
 return VAR_13;
}

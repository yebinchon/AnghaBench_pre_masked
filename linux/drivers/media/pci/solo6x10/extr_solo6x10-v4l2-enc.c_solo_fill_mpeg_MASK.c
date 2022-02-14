
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vop_header ;
struct vb2_v4l2_buffer {int flags; } ;
struct vb2_buffer {int dummy; } ;
struct solo_enc_dev {int vop_len; struct solo_dev* solo_dev; } ;
struct solo_dev {int dummy; } ;
struct sg_table {int dummy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct solo_dev*) ;
 int FUNC_2 (struct solo_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct solo_enc_dev*,int,struct sg_table*,int,int,int,int) ;
 struct vb2_v4l2_buffer* FUNC_4 (struct vb2_buffer*) ;
 struct sg_table* FUNC_5 (struct vb2_buffer*,int ) ;
 scalar_t__ FUNC_6 (struct vb2_buffer*,int ) ;
 int FUNC_7 (struct vb2_buffer*,int ,scalar_t__) ;
 int FUNC_8 (int const*) ;
 scalar_t__ FUNC_9 (int const*) ;
 int FUNC_10 (int const*) ;

__attribute__((used)) static int FUNC_11(struct solo_enc_dev *VAR_5,
  struct vb2_buffer *VAR_6, const vop_header *VAR_7)
{
 struct vb2_v4l2_buffer *VAR_8 = FUNC_4(VAR_6);
 struct solo_dev *VAR_9 = VAR_5->solo_dev;
 struct sg_table *VAR_10 = FUNC_5(VAR_6, 0);
 int VAR_11, VAR_12;
 int VAR_13 = 0;

 if (FUNC_6(VAR_6, 0) < FUNC_9(VAR_7))
  return -VAR_1;


 VAR_8->flags &= ~(VAR_3 | VAR_4 |
  VAR_2);
 if (!FUNC_10(VAR_7)) {
  VAR_13 = VAR_5->vop_len;
  VAR_8->flags |= VAR_3;
  FUNC_7(VAR_6, 0, FUNC_9(VAR_7) +
   VAR_5->vop_len);
 } else {
  VAR_8->flags |= VAR_4;
  FUNC_7(VAR_6, 0, FUNC_9(VAR_7));
 }


 VAR_11 = (FUNC_8(VAR_7) - FUNC_1(VAR_9) +
  sizeof(*VAR_7)) % FUNC_2(VAR_9);
 VAR_12 = FUNC_0(FUNC_9(VAR_7) + VAR_13, VAR_0);

 return FUNC_3(VAR_5, VAR_13, VAR_10, VAR_11, VAR_12,
   FUNC_1(VAR_9),
   FUNC_2(VAR_9));
}

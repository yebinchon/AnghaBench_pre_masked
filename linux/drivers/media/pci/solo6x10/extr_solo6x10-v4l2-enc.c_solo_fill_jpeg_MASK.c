
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vop_header ;
struct vb2_v4l2_buffer {int flags; } ;
struct vb2_buffer {int dummy; } ;
struct solo_enc_dev {scalar_t__ jpeg_len; struct solo_dev* solo_dev; } ;
struct solo_dev {int dummy; } ;
struct sg_table {int dummy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct solo_dev*) ;
 int FUNC_2 (struct solo_dev*) ;
 int VAR_2 ;
 int FUNC_3 (struct solo_enc_dev*,scalar_t__,struct sg_table*,scalar_t__,int,scalar_t__,int ) ;
 struct vb2_v4l2_buffer* FUNC_4 (struct vb2_buffer*) ;
 struct sg_table* FUNC_5 (struct vb2_buffer*,int ) ;
 scalar_t__ FUNC_6 (struct vb2_buffer*,int ) ;
 int FUNC_7 (struct vb2_buffer*,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int const*) ;
 scalar_t__ FUNC_9 (int const*) ;

__attribute__((used)) static int FUNC_10(struct solo_enc_dev *VAR_3,
     struct vb2_buffer *VAR_4, const vop_header *VAR_5)
{
 struct vb2_v4l2_buffer *VAR_6 = FUNC_4(VAR_4);
 struct solo_dev *VAR_7 = VAR_3->solo_dev;
 struct sg_table *VAR_8 = FUNC_5(VAR_4, 0);
 int VAR_9;

 VAR_6->flags |= VAR_2;

 if (FUNC_6(VAR_4, 0) < FUNC_9(VAR_5) + VAR_3->jpeg_len)
  return -VAR_1;

 VAR_9 = FUNC_0(FUNC_9(VAR_5) + VAR_3->jpeg_len, VAR_0);
 FUNC_7(VAR_4, 0, FUNC_9(VAR_5) + VAR_3->jpeg_len);

 return FUNC_3(VAR_3, VAR_3->jpeg_len, VAR_8,
        FUNC_8(VAR_5) - FUNC_1(VAR_7),
        VAR_9, FUNC_1(VAR_7),
        FUNC_2(VAR_7));
}

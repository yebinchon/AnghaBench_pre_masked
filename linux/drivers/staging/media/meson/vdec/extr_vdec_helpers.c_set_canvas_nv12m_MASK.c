
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vb2_buffer {int dummy; } ;
struct amvdec_session {struct amvdec_core* core; } ;
struct amvdec_core {int canvas; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct amvdec_core*,int,int) ;
 int FUNC_1 (struct amvdec_session*,int*) ;
 int FUNC_2 (int ,int,int ,int,int,int ,int ,int ) ;
 int FUNC_3 (struct vb2_buffer*,int) ;

__attribute__((used)) static int FUNC_4(struct amvdec_session *VAR_4,
       struct vb2_buffer *VAR_5, u32 VAR_6,
       u32 VAR_7, u32 VAR_8)
{
 struct amvdec_core *VAR_9 = VAR_4->core;
 u8 VAR_10[VAR_3];
 dma_addr_t VAR_11[VAR_3];
 int VAR_12, VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_3; ++VAR_13) {
  VAR_12 = FUNC_1(VAR_4, &VAR_10[VAR_13]);
  if (VAR_12)
   return VAR_12;

  VAR_11[VAR_13] =
      FUNC_3(VAR_5, VAR_13);
 }


 FUNC_2(VAR_9->canvas, VAR_10[0], VAR_11[0],
       VAR_6, VAR_7, VAR_2,
       VAR_0,
       VAR_1);


 FUNC_2(VAR_9->canvas, VAR_10[1], VAR_11[1],
       VAR_6, VAR_7 / 2, VAR_2,
       VAR_0,
       VAR_1);

 FUNC_0(VAR_9, VAR_8,
    ((VAR_10[1]) << 16) |
    ((VAR_10[1]) << 8) |
    (VAR_10[0]));

 return 0;
}

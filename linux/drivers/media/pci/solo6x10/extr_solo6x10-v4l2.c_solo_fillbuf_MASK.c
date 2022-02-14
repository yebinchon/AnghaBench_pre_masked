
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vb2_v4l2_buffer {scalar_t__ sequence; } ;
struct vb2_buffer {int timestamp; } ;
struct solo_dev {unsigned int old_write; int sequence; } ;
typedef int dma_addr_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct solo_dev*) ;
 int FUNC_1 () ;
 unsigned int FUNC_2 (struct solo_dev*) ;
 int FUNC_3 (struct solo_dev*) ;
 int FUNC_4 (struct solo_dev*,int ,int ,unsigned int,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_5 (struct solo_dev*) ;
 struct vb2_v4l2_buffer* FUNC_6 (struct vb2_buffer*) ;
 int FUNC_7 (struct vb2_buffer*,int ) ;
 int FUNC_8 (struct vb2_buffer*,int ) ;
 void* FUNC_9 (struct vb2_buffer*,int ) ;
 int FUNC_10 (struct vb2_buffer*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_11(struct solo_dev *VAR_4,
    struct vb2_buffer *VAR_5)
{
 struct vb2_v4l2_buffer *VAR_6 = FUNC_6(VAR_5);
 dma_addr_t VAR_7;
 unsigned int VAR_8;
 int VAR_9 = -1;
 int VAR_10;

 VAR_7 = FUNC_8(VAR_5, 0);
 if (!VAR_7)
  goto finish_buf;

 if (FUNC_0(VAR_4)) {
  void *VAR_11 = FUNC_9(VAR_5, 0);
  int VAR_12 = FUNC_3(VAR_4);

  for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10 += 2) {
   ((u8 *)VAR_11)[VAR_10] = 0x80;
   ((u8 *)VAR_11)[VAR_10 + 1] = 0x00;
  }
  VAR_9 = 0;
 } else {
  VAR_8 = VAR_0 + (VAR_4->old_write *
    (VAR_1 * FUNC_5(VAR_4)));

  VAR_9 = FUNC_4(VAR_4, 0, VAR_7, VAR_8,
           FUNC_2(VAR_4),
           FUNC_5(VAR_4), VAR_1);
 }

finish_buf:
 if (!VAR_9) {
  FUNC_10(VAR_5, 0,
   FUNC_5(VAR_4) * FUNC_2(VAR_4));
  VAR_6->sequence = VAR_4->sequence++;
  VAR_5->timestamp = FUNC_1();
 }

 FUNC_7(VAR_5, VAR_9 ? VAR_3 : VAR_2);
}

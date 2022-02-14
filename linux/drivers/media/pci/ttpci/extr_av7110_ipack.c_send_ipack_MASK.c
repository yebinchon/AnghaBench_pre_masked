
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct ipack {int mpeg; int count; int* buf; int cid; int data; int (* func ) (int*,int,int ) ;int repack_subids; } ;
struct dvb_audio_info {int framesize; int off; } ;
typedef void* ac3_off ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct dvb_audio_info*,int ) ;
 int FUNC_1 (int*,int,int ) ;
 int FUNC_2 (int*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct ipack *VAR_1)
{
 int VAR_2;
 struct dvb_audio_info VAR_3;
 int VAR_4 = 0;
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 0;

 switch (VAR_1->mpeg) {
 case 2:
  if (VAR_1->count < 10)
   return;
  VAR_1->buf[3] = VAR_1->cid;
  VAR_1->buf[4] = (u8)(((VAR_1->count - 6) & 0xff00) >> 8);
  VAR_1->buf[5] = (u8)((VAR_1->count - 6) & 0x00ff);
  if (VAR_1->repack_subids && VAR_1->cid == VAR_0) {
   VAR_2 = 9 + VAR_1->buf[8];
   VAR_5 = VAR_1->buf[VAR_2];
   if ((VAR_5 & 0xf8) == 0x80) {
    VAR_3.off = 0;
    VAR_4 = ((VAR_1->buf[VAR_2 + 2] << 8)|
        VAR_1->buf[VAR_2 + 3]);
    if (VAR_4 < VAR_1->count)
     VAR_7 = FUNC_0(*(VAR_1->buf + VAR_2 + 3 + VAR_4),
           VAR_1->count - VAR_4, &VAR_3, 0);
    if (!VAR_7) {
     VAR_6 = (VAR_1->count - VAR_2 - 3 - VAR_4) /
      VAR_3.framesize + 1;
     VAR_1->buf[VAR_2 + 2] = (VAR_4 >> 8) & 0xff;
     VAR_1->buf[VAR_2 + 3] = (VAR_4) & 0xff;
     VAR_1->buf[VAR_2 + 1] = VAR_6;
     VAR_4 += VAR_6 * VAR_3.framesize - VAR_1->count;
    }
   }
  }
  VAR_1->func(VAR_1->buf, VAR_1->count, VAR_1->data);

  VAR_1->buf[6] = 0x80;
  VAR_1->buf[7] = 0x00;
  VAR_1->buf[8] = 0x00;
  VAR_1->count = 9;
  if (VAR_1->repack_subids && VAR_1->cid == VAR_0
      && (VAR_5 & 0xf8) == 0x80) {
   VAR_1->count += 4;
   VAR_1->buf[9] = VAR_5;
   VAR_1->buf[10] = (VAR_4 >> 8) & 0xff;
   VAR_1->buf[11] = (VAR_4) & 0xff;
   VAR_1->buf[12] = 0;
  }
  break;

 case 1:
  if (VAR_1->count < 8)
   return;
  VAR_1->buf[3] = VAR_1->cid;
  VAR_1->buf[4] = (u8)(((VAR_1->count - 6) & 0xff00) >> 8);
  VAR_1->buf[5] = (u8)((VAR_1->count - 6) & 0x00ff);
  VAR_1->func(VAR_1->buf, VAR_1->count, VAR_1->data);

  VAR_1->buf[6] = 0x0f;
  VAR_1->count = 7;
  break;
 }
}

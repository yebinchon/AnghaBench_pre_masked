
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct v4l2_enc_idx_entry {int offset; int pts; int length; int flags; scalar_t__* reserved; } ;
struct v4l2_enc_idx {size_t entries; struct v4l2_enc_idx_entry* entry; } ;
struct cx18_enc_idx_entry {int flags; int length; int pts_low; int pts_high; int offset_low; int offset_high; } ;
struct cx18_buffer {int bytesused; int readpos; int * buf; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct cx18_buffer *VAR_4,
      struct v4l2_enc_idx *VAR_5)
{
 int VAR_6, VAR_7;
 struct v4l2_enc_idx_entry *VAR_8;
 struct cx18_enc_idx_entry *VAR_9;


 const int VAR_10[8] = {
  -1, VAR_2, VAR_3,
  -1, VAR_1, -1, -1, -1
 };






 VAR_7 = VAR_4->bytesused - VAR_4->readpos;
 VAR_6 = 0;
 VAR_8 = &VAR_5->entry[VAR_5->entries];
 VAR_9 = (struct cx18_enc_idx_entry *) &VAR_4->buf[VAR_4->readpos];

 while (VAR_7 >= sizeof(struct cx18_enc_idx_entry) &&
        VAR_5->entries < VAR_0) {

  VAR_8->offset = (((u64) FUNC_0(VAR_9->offset_high)) << 32)
    | FUNC_0(VAR_9->offset_low);

  VAR_8->pts = (((u64) (FUNC_0(VAR_9->pts_high) & 1)) << 32)
        | FUNC_0(VAR_9->pts_low);

  VAR_8->length = FUNC_0(VAR_9->length);

  VAR_8->flags = VAR_10[FUNC_0(VAR_9->flags) & 0x7];

  VAR_8->reserved[0] = 0;
  VAR_8->reserved[1] = 0;

  VAR_5->entries++;
  VAR_8 = &VAR_5->entry[VAR_5->entries];
  VAR_9++;

  VAR_7 -= sizeof(struct cx18_enc_idx_entry);
  VAR_6 += sizeof(struct cx18_enc_idx_entry);
 }


 if (VAR_7 > 0 && VAR_7 < sizeof(struct cx18_enc_idx_entry))
  VAR_6 += VAR_7;

 VAR_4->readpos += VAR_6;
 return VAR_6;
}

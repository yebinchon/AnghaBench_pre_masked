
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_stream {int mutex; int endpoint; int dev; } ;
struct pvr2_buffer {int max_count; int id; int purb; scalar_t__ ptr; int status; struct pvr2_stream* stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pvr2_buffer*) ;
 int FUNC_3 (struct pvr2_buffer*) ;
 int FUNC_4 (int ,int ,int ,scalar_t__,int,int ,struct pvr2_buffer*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

int FUNC_7(struct pvr2_buffer *VAR_5)
{





 int VAR_6 = 0;
 struct pvr2_stream *VAR_7;
 if (!VAR_5) return -VAR_1;
 VAR_7 = VAR_5->stream;
 FUNC_0(&VAR_7->mutex);
 do {
  FUNC_3(VAR_5);
  if (!VAR_7->dev) {
   VAR_6 = -VAR_2;
   break;
  }
  FUNC_2(VAR_5);







  VAR_5->status = -VAR_0;
  FUNC_4(VAR_5->purb,
      VAR_7->dev,

      FUNC_5(VAR_7->dev, VAR_7->endpoint),
      VAR_5->ptr,
      VAR_5->max_count,
      VAR_4,
      VAR_5);
  FUNC_6(VAR_5->purb, VAR_3);
 } while (0);
 FUNC_1(&VAR_7->mutex);
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_context_stream {struct pvr2_channel* user; } ;
struct pvr2_channel {int mc_head; struct pvr2_context_stream* stream; } ;


 int VAR_0 ;
 int FUNC_0 (struct pvr2_channel*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct pvr2_channel *VAR_1,
         struct pvr2_context_stream *VAR_2)
{
 int VAR_3 = 0;
 FUNC_1(VAR_1->mc_head); do {
  if (VAR_2 == VAR_1->stream) break;
  if (VAR_2 && VAR_2->user) {
   VAR_3 = -VAR_0;
   break;
  }
  FUNC_0(VAR_1);
  if (!VAR_2) break;
  VAR_2->user = VAR_1;
  VAR_1->stream = VAR_2;
 } while (0);
 FUNC_2(VAR_1->mc_head);
 return VAR_3;
}

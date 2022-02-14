
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_buffer {int dummy; } ;
struct cobalt_stream {TYPE_1__* alsa; } ;
struct TYPE_2__ {scalar_t__ alsa_pb_channel; } ;


 int FUNC_0 (TYPE_1__*,int ,int,int) ;
 int FUNC_1 (struct vb2_buffer*,int ) ;
 int FUNC_2 (struct vb2_buffer*,int ) ;

__attribute__((used)) static int FUNC_3(struct vb2_buffer *VAR_0, void *VAR_1)
{
 struct cobalt_stream *VAR_2 = VAR_1;

 if (VAR_2->alsa->alsa_pb_channel)
  FUNC_0(VAR_2->alsa,
    FUNC_2(VAR_0, 0),
    8 * 4,
    FUNC_1(VAR_0, 0) / (8 * 4));
 return 0;
}

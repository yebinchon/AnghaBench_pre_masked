
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ch_space_offset; } ;
struct visorchannel {TYPE_1__ chan_hdr; } ;
struct signal_queue_header {int dummy; } ;
struct channel_header {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct visorchannel*,int ,struct signal_queue_header*,int) ;

__attribute__((used)) static int FUNC_2(struct visorchannel *VAR_1, u32 VAR_2,
      struct signal_queue_header *VAR_3)
{
 if (VAR_1->chan_hdr.ch_space_offset < sizeof(struct channel_header))
  return -VAR_0;


 return FUNC_1(VAR_1,
     FUNC_0(&VAR_1->chan_hdr, VAR_2),
     VAR_3, sizeof(struct signal_queue_header));
}

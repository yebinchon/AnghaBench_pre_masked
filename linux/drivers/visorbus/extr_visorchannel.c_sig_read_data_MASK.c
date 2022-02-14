
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct visorchannel {int chan_hdr; } ;
struct signal_queue_header {int signal_size; } ;


 int FUNC_0 (int *,int ,struct signal_queue_header*,int ) ;
 int FUNC_1 (struct visorchannel*,int,void*,int ) ;

__attribute__((used)) static int FUNC_2(struct visorchannel *VAR_0, u32 VAR_1,
    struct signal_queue_header *VAR_2, u32 VAR_3,
    void *VAR_4)
{
 int VAR_5 = FUNC_0(&VAR_0->chan_hdr, VAR_1,
       VAR_2, VAR_3);

 return FUNC_1(VAR_0, VAR_5,
     VAR_4, VAR_2->signal_size);
}

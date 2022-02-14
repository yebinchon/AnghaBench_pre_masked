
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct signal_queue_header {int sig_base_offset; int signal_size; } ;
struct channel_header {int dummy; } ;


 int FUNC_0 (struct channel_header*,int) ;

__attribute__((used)) static int FUNC_1(struct channel_header *VAR_0, int VAR_1,
      struct signal_queue_header *VAR_2, int VAR_3)
{
 return (FUNC_0(VAR_0, VAR_1) + VAR_2->sig_base_offset +
        (VAR_3 * VAR_2->signal_size));
}

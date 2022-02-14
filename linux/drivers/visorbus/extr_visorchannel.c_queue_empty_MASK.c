
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct visorchannel {int dummy; } ;
struct signal_queue_header {scalar_t__ head; scalar_t__ tail; } ;


 scalar_t__ FUNC_0 (struct visorchannel*,int ,struct signal_queue_header*) ;

__attribute__((used)) static bool FUNC_1(struct visorchannel *VAR_0, u32 VAR_1)
{
 struct signal_queue_header VAR_2;

 if (FUNC_0(VAR_0, VAR_1, &VAR_2))
  return 1;
 return (VAR_2.head == VAR_2.tail);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct visorchannel {int dummy; } ;
struct signal_queue_header {int head; int tail; int max_slots; int num_received; } ;


 int VAR_0 ;
 int FUNC_0 (struct visorchannel*,int ,struct signal_queue_header*,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (struct visorchannel*,int ,struct signal_queue_header*,int,void*) ;
 int FUNC_3 (struct visorchannel*,int ,struct signal_queue_header*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct visorchannel *VAR_3, u32 VAR_4,
         void *VAR_5)
{
 struct signal_queue_header VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3, VAR_4, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_6.head == VAR_6.tail)
  return -VAR_0;
 VAR_6.tail = (VAR_6.tail + 1) % VAR_6.max_slots;
 VAR_7 = FUNC_2(VAR_3, VAR_4, &VAR_6, VAR_6.tail, VAR_5);
 if (VAR_7)
  return VAR_7;
 VAR_6.num_received++;




 FUNC_1();
 VAR_7 = FUNC_0(VAR_3, VAR_4, &VAR_6, VAR_2);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_0(VAR_3, VAR_4, &VAR_6, VAR_1);
 if (VAR_7)
  return VAR_7;
 return 0;
}

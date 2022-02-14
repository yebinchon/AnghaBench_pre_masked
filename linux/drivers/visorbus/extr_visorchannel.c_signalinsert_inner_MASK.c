
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct visorchannel {int dummy; } ;
struct signal_queue_header {int head; int max_slots; int tail; int num_sent; int num_overflows; } ;


 int VAR_0 ;
 int FUNC_0 (struct visorchannel*,int ,struct signal_queue_header*,int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct visorchannel*,int ,struct signal_queue_header*) ;
 int FUNC_3 (struct visorchannel*,int ,struct signal_queue_header*,int,void*) ;

__attribute__((used)) static int FUNC_4(struct visorchannel *VAR_4, u32 VAR_5,
         void *VAR_6)
{
 struct signal_queue_header VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_4, VAR_5, &VAR_7);
 if (VAR_8)
  return VAR_8;
 VAR_7.head = (VAR_7.head + 1) % VAR_7.max_slots;
 if (VAR_7.head == VAR_7.tail) {
  VAR_7.num_overflows++;
  VAR_8 = FUNC_0(VAR_4, VAR_5, &VAR_7, VAR_2);
  if (VAR_8)
   return VAR_8;
  return -VAR_0;
 }
 VAR_8 = FUNC_3(VAR_4, VAR_5, &VAR_7, VAR_7.head, VAR_6);
 if (VAR_8)
  return VAR_8;
 VAR_7.num_sent++;




 FUNC_1();
 VAR_8 = FUNC_0(VAR_4, VAR_5, &VAR_7, VAR_1);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_0(VAR_4, VAR_5, &VAR_7, VAR_3);
 if (VAR_8)
  return VAR_8;
 return 0;
}

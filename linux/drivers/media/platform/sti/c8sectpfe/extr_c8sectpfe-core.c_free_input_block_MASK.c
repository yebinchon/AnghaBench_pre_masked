
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_info {int pid_buffer_start; scalar_t__ pid_buffer_busaddr; int back_buffer_start; scalar_t__ back_buffer_busaddr; } ;
struct c8sectpfei {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct c8sectpfei *VAR_3, struct channel_info *VAR_4)
{
 if (!VAR_3 || !VAR_4)
  return;

 if (VAR_4->back_buffer_busaddr)
  if (!FUNC_0(VAR_3->dev, VAR_4->back_buffer_busaddr))
   FUNC_1(VAR_3->dev, VAR_4->back_buffer_busaddr,
    VAR_1, VAR_0);

 FUNC_2(VAR_4->back_buffer_start);

 if (VAR_4->pid_buffer_busaddr)
  if (!FUNC_0(VAR_3->dev, VAR_4->pid_buffer_busaddr))
   FUNC_1(VAR_3->dev, VAR_4->pid_buffer_busaddr,
    VAR_2, VAR_0);

 FUNC_2(VAR_4->pid_buffer_start);
}

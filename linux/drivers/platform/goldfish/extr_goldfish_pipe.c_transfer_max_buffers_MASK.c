
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct goldfish_pipe {int lock; int pages; TYPE_2__* command_buffer; } ;
typedef int s32 ;
struct TYPE_3__ {int consumed_size; } ;
struct TYPE_4__ {TYPE_1__ rw_params; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct goldfish_pipe*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned long,unsigned long,unsigned int,int,int ,unsigned int*) ;
 int FUNC_4 (int ,int,unsigned long,unsigned long,unsigned long,unsigned long,unsigned int,int,TYPE_2__*) ;
 int FUNC_5 (int ,int,int,int ) ;

__attribute__((used)) static int FUNC_6(struct goldfish_pipe *VAR_4,
    unsigned long VAR_5,
    unsigned long VAR_6,
    int VAR_7,
    unsigned long VAR_8,
    unsigned int VAR_9,
    s32 *VAR_10,
    int *VAR_11)
{
 unsigned long VAR_12 = VAR_5 & VAR_1;
 unsigned int VAR_13;
 int VAR_14;


 if (FUNC_1(&VAR_4->lock))
  return -VAR_0;

 VAR_14 = FUNC_3(VAR_12, VAR_8,
         VAR_9, VAR_7,
         VAR_4->pages, &VAR_13);
 if (VAR_14 < 0) {
  FUNC_2(&VAR_4->lock);
  return VAR_14;
 }

 FUNC_4(VAR_4->pages, VAR_14, VAR_5, VAR_6,
      VAR_12, VAR_8, VAR_13, VAR_7,
      VAR_4->command_buffer);


 *VAR_11 = FUNC_0(VAR_4,
    VAR_7 ? VAR_3 : VAR_2);

 *VAR_10 = VAR_4->command_buffer->rw_params.consumed_size;

 FUNC_5(VAR_4->pages, VAR_14, VAR_7, *VAR_10);

 FUNC_2(&VAR_4->lock);
 return 0;
}

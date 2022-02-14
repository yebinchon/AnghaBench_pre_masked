
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct videobuf_queue {TYPE_2__** bufs; TYPE_1__* int_ops; } ;
typedef enum v4l2_memory { ____Placeholder_v4l2_memory } v4l2_memory ;
struct TYPE_4__ {unsigned int i; int memory; unsigned int bsize; unsigned int boff; } ;
struct TYPE_3__ {int magic; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 unsigned int FUNC_1 (unsigned int) ;




 int FUNC_2 (struct videobuf_queue*) ;
 int FUNC_3 (int,char*,unsigned int,unsigned int) ;
 TYPE_2__* FUNC_4 (struct videobuf_queue*) ;

int FUNC_5(struct videobuf_queue *VAR_2,
   unsigned int VAR_3, unsigned int VAR_4,
   enum v4l2_memory VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 FUNC_0(VAR_2->int_ops->magic, VAR_1);

 VAR_7 = FUNC_2(VAR_2);
 if (0 != VAR_7)
  return VAR_7;


 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_2->bufs[VAR_6] = FUNC_4(VAR_2);

  if (((void*)0) == VAR_2->bufs[VAR_6])
   break;

  VAR_2->bufs[VAR_6]->i = VAR_6;
  VAR_2->bufs[VAR_6]->memory = VAR_5;
  VAR_2->bufs[VAR_6]->bsize = VAR_4;
  switch (VAR_5) {
  case 130:
   VAR_2->bufs[VAR_6]->boff = FUNC_1(VAR_4) * VAR_6;
   break;
  case 128:
  case 129:
  case 131:

   break;
  }
 }

 if (!VAR_6)
  return -VAR_0;

 FUNC_3(1, "mmap setup: %d buffers, %d bytes each\n", VAR_6, VAR_4);

 return VAR_6;
}

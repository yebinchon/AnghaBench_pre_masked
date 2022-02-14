
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct goldfish_pipe_dev {int pipes_capacity; struct goldfish_pipe** pipes; } ;
struct goldfish_pipe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct goldfish_pipe** FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct goldfish_pipe**) ;
 int FUNC_2 (struct goldfish_pipe**,struct goldfish_pipe**,int) ;

__attribute__((used)) static int FUNC_3(struct goldfish_pipe_dev *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->pipes_capacity; ++VAR_3)
  if (!VAR_2->pipes[VAR_3])
   return VAR_3;

 {




  u32 VAR_4 = 2 * VAR_2->pipes_capacity;
  struct goldfish_pipe **VAR_5 =
   FUNC_0(VAR_4, sizeof(*VAR_5), VAR_1);
  if (!VAR_5)
   return -VAR_0;
  FUNC_2(VAR_5, VAR_2->pipes, sizeof(*VAR_5) * VAR_2->pipes_capacity);
  FUNC_1(VAR_2->pipes);
  VAR_2->pipes = VAR_5;
  VAR_3 = VAR_2->pipes_capacity;
  VAR_2->pipes_capacity = VAR_4;
 }
 return VAR_3;
}

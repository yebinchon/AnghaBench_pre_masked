
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct cobalt_stream {unsigned int input; int sd; int q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cobalt_stream*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_4 ;
 struct cobalt_stream* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, void *VAR_6, unsigned int VAR_7)
{
 struct cobalt_stream *VAR_8 = FUNC_3(VAR_5);

 if (VAR_7 >= 2)
  return -VAR_2;
 if (FUNC_2(&VAR_8->q))
  return -VAR_1;
 VAR_8->input = VAR_7;

 FUNC_0(VAR_8);

 if (VAR_8->input == 1)
  return 0;

 return FUNC_1(VAR_8->sd, VAR_4, VAR_3,
   VAR_0, 0, 0);
}

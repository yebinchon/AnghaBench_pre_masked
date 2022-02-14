
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007_snd {int card; } ;
struct go7007 {int v4l2_dev; struct go7007_snd* snd_context; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct go7007 *VAR_0)
{
 struct go7007_snd *VAR_1 = VAR_0->snd_context;

 FUNC_0(VAR_1->card);
 FUNC_1(VAR_1->card);
 FUNC_2(&VAR_0->v4l2_dev);
 return 0;
}

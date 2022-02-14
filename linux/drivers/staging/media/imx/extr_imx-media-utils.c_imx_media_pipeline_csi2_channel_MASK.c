
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_pad {int index; } ;
struct media_entity {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct media_pad* FUNC_0 (struct media_entity*,int ,int ,int) ;

int FUNC_1(struct media_entity *VAR_2)
{
 struct media_pad *VAR_3;
 int VAR_4 = -VAR_0;

 VAR_3 = FUNC_0(VAR_2, VAR_1,
         0, 1);
 if (VAR_3)
  VAR_4 = VAR_3->index - 1;

 return VAR_4;
}

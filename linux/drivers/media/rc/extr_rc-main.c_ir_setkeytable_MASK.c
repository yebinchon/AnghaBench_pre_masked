
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_map {unsigned int size; unsigned int len; TYPE_1__* scan; int rc_proto; int name; } ;
struct rc_dev {struct rc_map rc_map; } ;
struct TYPE_2__ {int keycode; int scancode; } ;


 int VAR_0 ;
 int FUNC_0 (struct rc_dev*,struct rc_map*,int ,int ,unsigned int) ;
 unsigned int FUNC_1 (struct rc_dev*,struct rc_map*,int ,int) ;
 int FUNC_2 (struct rc_map*) ;
 int FUNC_3 (struct rc_dev*,struct rc_map*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct rc_dev *VAR_1,
     const struct rc_map *VAR_2)
{
 struct rc_map *VAR_3 = &VAR_1->rc_map;
 unsigned int VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_2->name, VAR_2->rc_proto,
        VAR_2->size);
 if (VAR_6)
  return VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_2->size; VAR_4++) {
  VAR_5 = FUNC_1(VAR_1, VAR_3,
           VAR_2->scan[VAR_4].scancode, 0);
  if (VAR_5 >= VAR_3->len) {
   VAR_6 = -VAR_0;
   break;
  }

  FUNC_3(VAR_1, VAR_3, VAR_5,
      VAR_2->scan[VAR_4].keycode);
 }

 if (VAR_6)
  FUNC_2(VAR_3);

 return VAR_6;
}

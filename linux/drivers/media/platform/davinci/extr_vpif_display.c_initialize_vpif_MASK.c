
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct channel_obj {int dummy; } ;
struct TYPE_2__ {int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_4;
 int VAR_5, VAR_6, VAR_7;


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_3.dev[VAR_6] =
      FUNC_1(sizeof(struct channel_obj), VAR_1);

  if (!VAR_3.dev[VAR_6]) {
   VAR_4 = VAR_6;
   VAR_5 = -VAR_0;
   goto vpif_init_free_channel_objects;
  }
 }

 return 0;

vpif_init_free_channel_objects:
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  FUNC_0(VAR_3.dev[VAR_7]);
 return VAR_5;
}

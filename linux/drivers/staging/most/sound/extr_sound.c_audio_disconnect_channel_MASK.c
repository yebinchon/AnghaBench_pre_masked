
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sound_adapter {int dev_list; } ;
struct most_interface {struct sound_adapter* priv; } ;
struct channel {int list; } ;


 int VAR_0 ;
 struct channel* FUNC_0 (struct most_interface*,int) ;
 int FUNC_1 (struct channel*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct sound_adapter*) ;

__attribute__((used)) static int FUNC_6(struct most_interface *VAR_1,
        int VAR_2)
{
 struct channel *VAR_3;
 struct sound_adapter *VAR_4 = VAR_1->priv;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3) {
  FUNC_4("sound_disconnect_channel(), invalid channel %d\n",
         VAR_2);
  return -VAR_0;
 }

 FUNC_2(&VAR_3->list);

 FUNC_1(VAR_3);
 if (FUNC_3(&VAR_4->dev_list))
  FUNC_5(VAR_4);
 return 0;
}

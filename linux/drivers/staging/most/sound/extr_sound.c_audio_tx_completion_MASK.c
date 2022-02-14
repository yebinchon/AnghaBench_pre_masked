
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct most_interface {int dummy; } ;
struct channel {int playback_waitq; } ;


 int VAR_0 ;
 struct channel* FUNC_0 (struct most_interface*,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct most_interface *VAR_1, int VAR_2)
{
 struct channel *VAR_3 = FUNC_0(VAR_1, VAR_2);

 if (!VAR_3) {
  FUNC_1("sound_tx_completion(), invalid channel %d\n",
         VAR_2);
  return -VAR_0;
 }

 FUNC_2(&VAR_3->playback_waitq);

 return 0;
}

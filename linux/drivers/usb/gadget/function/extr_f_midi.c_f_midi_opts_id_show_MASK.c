
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f_midi_opts {int lock; scalar_t__ id; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__,int ) ;
 struct f_midi_opts* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_1, char *VAR_2)
{
 struct f_midi_opts *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 FUNC_0(&VAR_3->lock);
 if (VAR_3->id) {
  VAR_4 = FUNC_2(VAR_2, VAR_3->id, VAR_0);
 } else {
  VAR_2[0] = 0;
  VAR_4 = 0;
 }

 FUNC_1(&VAR_3->lock);

 return VAR_4;
}

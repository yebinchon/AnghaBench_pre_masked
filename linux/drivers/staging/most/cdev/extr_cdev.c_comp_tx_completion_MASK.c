
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct most_interface {int num_channels; } ;
struct comp_channel {int wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct comp_channel* FUNC_0 (struct most_interface*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct most_interface *VAR_2, int VAR_3)
{
 struct comp_channel *VAR_4;

 if (!VAR_2) {
  FUNC_1("Bad interface pointer\n");
  return -VAR_0;
 }
 if ((VAR_3 < 0) || (VAR_3 >= VAR_2->num_channels)) {
  FUNC_1("Channel ID out of range\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_4)
  return -VAR_1;
 FUNC_2(&VAR_4->wq);
 return 0;
}

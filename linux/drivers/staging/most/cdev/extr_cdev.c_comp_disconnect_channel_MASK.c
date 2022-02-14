
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct most_interface {int dummy; } ;
struct comp_channel {int io_mutex; int wq; scalar_t__ access_ref; int unlink; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comp_channel*) ;
 int FUNC_1 (struct comp_channel*) ;
 struct comp_channel* FUNC_2 (struct most_interface*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct comp_channel*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct most_interface *VAR_2, int VAR_3)
{
 struct comp_channel *VAR_4;

 if (!VAR_2) {
  FUNC_5("Bad interface pointer\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_4)
  return -VAR_1;

 FUNC_3(&VAR_4->io_mutex);
 FUNC_6(&VAR_4->unlink);
 VAR_4->dev = ((void*)0);
 FUNC_7(&VAR_4->unlink);
 FUNC_0(VAR_4);
 if (VAR_4->access_ref) {
  FUNC_8(VAR_4);
  FUNC_9(&VAR_4->wq);
  FUNC_4(&VAR_4->io_mutex);
 } else {
  FUNC_4(&VAR_4->io_mutex);
  FUNC_1(VAR_4);
 }
 return 0;
}

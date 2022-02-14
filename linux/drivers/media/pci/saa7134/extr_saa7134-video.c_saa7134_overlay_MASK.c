
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dev {void* overlay_owner; int slock; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct saa7134_dev*) ;
 int FUNC_3 (struct saa7134_dev*) ;
 int FUNC_4 (char*) ;
 struct saa7134_dev* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_3, void *VAR_4, unsigned int VAR_5)
{
 struct saa7134_dev *VAR_6 = FUNC_5(VAR_3);
 unsigned long VAR_7;

 if (VAR_5) {
  if (VAR_2 > 0) {
   FUNC_4("no_overlay\n");
   return -VAR_1;
  }

  if (VAR_6->overlay_owner && VAR_4 != VAR_6->overlay_owner)
   return -VAR_0;
  VAR_6->overlay_owner = VAR_4;
  FUNC_0(&VAR_6->slock, VAR_7);
  FUNC_2(VAR_6);
  FUNC_1(&VAR_6->slock, VAR_7);
 }
 if (!VAR_5) {
  if (VAR_4 != VAR_6->overlay_owner)
   return -VAR_1;
  FUNC_0(&VAR_6->slock, VAR_7);
  FUNC_3(VAR_6);
  FUNC_1(&VAR_6->slock, VAR_7);
  VAR_6->overlay_owner = ((void*)0);
 }
 return 0;
}

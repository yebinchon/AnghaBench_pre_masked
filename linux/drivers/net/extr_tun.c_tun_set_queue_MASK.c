
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int flags; int dev; int security; } ;
struct tun_file {struct tun_struct* detached; int tun; } ;
struct ifreq {int ifr_flags; } ;
struct file {struct tun_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct tun_file*,int) ;
 int FUNC_1 (int ) ;
 struct tun_struct* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct tun_struct*,struct file*,int,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_6, struct ifreq *VAR_7)
{
 struct tun_file *VAR_8 = VAR_6->private_data;
 struct tun_struct *VAR_9;
 int VAR_10 = 0;

 FUNC_3();

 if (VAR_7->ifr_flags & VAR_1) {
  VAR_9 = VAR_8->detached;
  if (!VAR_9) {
   VAR_10 = -VAR_0;
   goto unlock;
  }
  VAR_10 = FUNC_5(VAR_9->security);
  if (VAR_10 < 0)
   goto unlock;
  VAR_10 = FUNC_6(VAR_9, VAR_6, 0, VAR_9->flags & VAR_4,
     VAR_9->flags & VAR_5, 1);
 } else if (VAR_7->ifr_flags & VAR_2) {
  VAR_9 = FUNC_2(VAR_8->tun);
  if (!VAR_9 || !(VAR_9->flags & VAR_3) || VAR_8->detached)
   VAR_10 = -VAR_0;
  else
   FUNC_0(VAR_8, 0);
 } else
  VAR_10 = -VAR_0;

 if (VAR_10 >= 0)
  FUNC_1(VAR_9->dev);

unlock:
 FUNC_4();
 return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_file {int flags; int fasync; } ;
struct file {struct tun_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int,struct file*,int,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(int VAR_3, struct file *VAR_4, int VAR_5)
{
 struct tun_file *VAR_6 = VAR_4->private_data;
 int VAR_7;

 if ((VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_6->fasync)) < 0)
  goto out;

 if (VAR_5) {
  FUNC_0(VAR_4, FUNC_2(VAR_2), VAR_0, 0);
  VAR_6->flags |= VAR_1;
 } else
  VAR_6->flags &= ~VAR_1;
 VAR_7 = 0;
out:
 return VAR_7;
}

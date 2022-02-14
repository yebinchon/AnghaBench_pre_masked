
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct mic_driver* private; } ;
struct mic_device {int dummy; } ;
struct mic_driver {struct mic_device mdev; } ;


 int FUNC_0 (struct mic_device*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct mic_driver *VAR_2 = VAR_0->private;
 struct mic_device *VAR_3 = &VAR_2->mdev;

 FUNC_0(VAR_3, 0);
 FUNC_1(1000);
 FUNC_0(VAR_3, 1);
 FUNC_1(1000);
 FUNC_0(VAR_3, 2);
 FUNC_1(1000);
 FUNC_0(VAR_3, 3);
 FUNC_1(1000);

 return 0;
}

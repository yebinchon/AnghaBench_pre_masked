
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viu_fh {int dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,unsigned int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4, unsigned int VAR_5)
{
 struct viu_fh *VAR_6 = VAR_4;

 if (VAR_5)
  return -VAR_0;

 FUNC_0(VAR_6->dev, VAR_2, VAR_1, VAR_5, 0, 0);
 return 0;
}

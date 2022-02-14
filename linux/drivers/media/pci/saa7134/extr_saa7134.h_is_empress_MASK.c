
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int * queue; } ;
struct saa7134_dev {int empress_vbq; } ;
struct file {int dummy; } ;


 struct video_device* FUNC_0 (struct file*) ;
 struct saa7134_dev* FUNC_1 (struct video_device*) ;

__attribute__((used)) static inline bool FUNC_2(struct file *VAR_0)
{
 struct video_device *VAR_1 = FUNC_0(VAR_0);
 struct saa7134_dev *VAR_2 = FUNC_1(VAR_1);

 return VAR_1->queue == &VAR_2->empress_vbq;
}

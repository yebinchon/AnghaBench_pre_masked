
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_input {int dummy; } ;
struct input_dev {int dummy; } ;


 struct virtio_input* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct virtio_input*,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct input_dev *VAR_0, unsigned int VAR_1,
       unsigned int VAR_2, int VAR_3)
{
 struct virtio_input *VAR_4 = FUNC_0(VAR_0);

 return FUNC_1(VAR_4, VAR_1, VAR_2, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_device {int dev; } ;


 int FUNC_0 (int *,char*,char const*,char const*) ;
 int FUNC_1 (struct virtio_device*,unsigned int) ;

__attribute__((used)) static bool FUNC_2(struct virtio_device *VAR_0,
        unsigned int VAR_1,
        const char *VAR_2, const char *VAR_3)
{
 if (!FUNC_1(VAR_0, VAR_1))
  return 0;

 FUNC_0(&VAR_0->dev, "device advertises feature %s but not %s",
  VAR_2, VAR_3);

 return 1;
}

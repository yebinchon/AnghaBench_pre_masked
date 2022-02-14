
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtnet_info {int vdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct virtnet_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,size_t,char*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, char *VAR_3,
          size_t VAR_4)
{
 struct virtnet_info *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 if (!FUNC_2(VAR_5->vdev, VAR_1))
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_3, VAR_4, "sby");
 if (VAR_6 >= VAR_4)
  return -VAR_0;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdev_link {int datatype; int channel; int device; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mdev_link *VAR_0)
{
 return FUNC_0(VAR_0->device, VAR_0->channel,
         VAR_0->datatype);
}

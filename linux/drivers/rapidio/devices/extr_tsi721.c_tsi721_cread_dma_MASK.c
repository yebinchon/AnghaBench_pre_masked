
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tsi721_device {int dummy; } ;
struct rio_mport {int sys_size; struct tsi721_device* priv; } ;


 int FUNC_0 (struct tsi721_device*,int ,int ,int ,int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct rio_mport *VAR_0, int VAR_1, u16 VAR_2,
   u8 VAR_3, u32 VAR_4, int VAR_5, u32 *VAR_6)
{
 struct tsi721_device *VAR_7 = VAR_0->priv;

 return FUNC_0(VAR_7, VAR_0->sys_size, VAR_2, VAR_3,
    VAR_4, VAR_5, VAR_6, 0);
}

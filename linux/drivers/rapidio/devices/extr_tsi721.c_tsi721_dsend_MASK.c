
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tsi721_device {scalar_t__ odb_base; TYPE_1__* pdev; } ;
struct rio_mport {scalar_t__ sys_size; struct tsi721_device* priv; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int ,int *,char*,int,int) ;

__attribute__((used)) static int FUNC_2(struct rio_mport *VAR_3, int VAR_4,
   u16 VAR_5, u16 VAR_6)
{
 struct tsi721_device *VAR_7 = VAR_3->priv;
 u32 VAR_8;

 VAR_8 = (((VAR_3->sys_size) ? VAR_1 : VAR_2) << 18) |
   (VAR_5 << 2);

 FUNC_1(VAR_0, &VAR_7->pdev->dev,
    "Send Doorbell 0x%04x to destID 0x%x", VAR_6, VAR_5);
 FUNC_0(VAR_6, VAR_7->odb_base + VAR_8);

 return 0;
}

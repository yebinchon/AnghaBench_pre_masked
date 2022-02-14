
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xen_pcibk_device {TYPE_1__* xdev; } ;
typedef int str ;
struct TYPE_2__ {int nodename; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int,char*,unsigned int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ,char*,char*,unsigned int,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct xen_pcibk_device *VAR_2,
       unsigned int VAR_3, unsigned int VAR_4,
       unsigned int VAR_5, unsigned int VAR_6)
{
 int VAR_7;
 int VAR_8;
 char VAR_9[64];

 VAR_8 = FUNC_2(VAR_9, sizeof(VAR_9), "vdev-%d", VAR_6);
 if (FUNC_3(VAR_8 >= (sizeof(VAR_9) - 1))) {
  VAR_7 = -VAR_0;
  goto out;
 }


 VAR_7 = FUNC_4(VAR_1, VAR_2->xdev->nodename, VAR_9,
       "%04x:%02x:%02x.%02x", VAR_3, VAR_4,
       FUNC_1(VAR_5), FUNC_0(VAR_5));

out:
 return VAR_7;
}

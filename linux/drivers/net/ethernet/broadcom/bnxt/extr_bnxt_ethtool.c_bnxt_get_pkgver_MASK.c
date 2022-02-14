
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct bnxt {scalar_t__ fw_ver_str; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct net_device*,int ,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_1 (struct net_device*,int ,int ,int ,int *) ;
 char* FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 scalar_t__ FUNC_4 (char) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ) ;
 struct bnxt* FUNC_7 (struct net_device*) ;
 int FUNC_8 (scalar_t__,int,char*,char*) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_6)
{
 struct bnxt *VAR_7 = FUNC_7(VAR_6);
 u16 VAR_8 = 0;
 char *VAR_9;
 u32 VAR_10;
 u8 *VAR_11;
 int VAR_12;

 if (FUNC_0(VAR_6, VAR_2,
     VAR_1, VAR_0,
     &VAR_8, ((void*)0), &VAR_10) != 0)
  return;

 VAR_11 = FUNC_6(VAR_10, VAR_5);
 if (!VAR_11) {
  FUNC_3(&VAR_7->pdev->dev, "Unable to allocate memory for pkg version, length = %u\n",
   VAR_10);
  return;
 }

 if (FUNC_1(VAR_6, VAR_8, 0, VAR_10, VAR_11))
  goto err;

 VAR_9 = FUNC_2(VAR_3, VAR_11,
       VAR_10);
 if (VAR_9 && *VAR_9 != 0 && FUNC_4(*VAR_9)) {
  VAR_12 = FUNC_9(VAR_7->fw_ver_str);
  FUNC_8(VAR_7->fw_ver_str + VAR_12, VAR_4 - VAR_12 - 1,
    "/pkg %s", VAR_9);
 }
err:
 FUNC_5(VAR_11);
}

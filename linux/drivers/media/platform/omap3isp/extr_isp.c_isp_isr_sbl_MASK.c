
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u32 ;
struct isp_pipeline {int error; } ;
struct TYPE_20__ {int entity; } ;
struct TYPE_11__ {TYPE_9__ subdev; } ;
struct TYPE_18__ {int entity; } ;
struct TYPE_19__ {TYPE_7__ subdev; } ;
struct TYPE_16__ {int entity; } ;
struct TYPE_17__ {TYPE_5__ subdev; } ;
struct TYPE_14__ {int entity; } ;
struct TYPE_15__ {TYPE_3__ subdev; } ;
struct TYPE_12__ {int entity; } ;
struct TYPE_13__ {TYPE_1__ subdev; } ;
struct isp_device {int isp_aewb; int isp_af; TYPE_10__ isp_res; TYPE_8__ isp_prev; TYPE_6__ isp_ccdc; TYPE_4__ isp_csi2a; TYPE_2__ isp_ccp2; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct isp_device*,int ,int ) ;
 int FUNC_2 (struct isp_device*,int,int ,int ) ;
 int FUNC_3 (int *) ;
 struct isp_pipeline* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct isp_device *VAR_13)
{
 struct device *VAR_14 = VAR_13->dev;
 struct isp_pipeline *VAR_15;
 u32 VAR_16;





 VAR_16 = FUNC_1(VAR_13, VAR_12, VAR_0);
 FUNC_2(VAR_13, VAR_16, VAR_12, VAR_0);
 VAR_16 &= ~VAR_1;

 if (VAR_16)
  FUNC_0(VAR_14, "SBL overflow (PCR = 0x%08x)\n", VAR_16);

 if (VAR_16 & VAR_4) {
  VAR_15 = FUNC_4(&VAR_13->isp_ccp2.subdev.entity);
  if (VAR_15 != ((void*)0))
   VAR_15->error = 1;
 }

 if (VAR_16 & VAR_3) {
  VAR_15 = FUNC_4(&VAR_13->isp_csi2a.subdev.entity);
  if (VAR_15 != ((void*)0))
   VAR_15->error = 1;
 }

 if (VAR_16 & VAR_2) {
  VAR_15 = FUNC_4(&VAR_13->isp_ccdc.subdev.entity);
  if (VAR_15 != ((void*)0))
   VAR_15->error = 1;
 }

 if (VAR_16 & VAR_7) {
  VAR_15 = FUNC_4(&VAR_13->isp_prev.subdev.entity);
  if (VAR_15 != ((void*)0))
   VAR_15->error = 1;
 }

 if (VAR_16 & (VAR_8
         | VAR_9
         | VAR_10
         | VAR_11)) {
  VAR_15 = FUNC_4(&VAR_13->isp_res.subdev.entity);
  if (VAR_15 != ((void*)0))
   VAR_15->error = 1;
 }

 if (VAR_16 & VAR_6)
  FUNC_3(&VAR_13->isp_af);

 if (VAR_16 & VAR_5)
  FUNC_3(&VAR_13->isp_aewb);
}

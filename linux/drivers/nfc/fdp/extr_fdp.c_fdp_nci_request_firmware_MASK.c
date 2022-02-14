
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct nci_dev {int dummy; } ;
struct fdp_nci_info {int ram_patch_version; int otp_patch_version; TYPE_3__* otp_patch; TYPE_3__* ram_patch; TYPE_2__* phy; } ;
struct device {int dummy; } ;
struct TYPE_6__ {scalar_t__ size; scalar_t__ data; } ;
struct TYPE_5__ {TYPE_1__* i2c_dev; } ;
struct TYPE_4__ {struct device dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 struct fdp_nci_info* FUNC_1 (struct nci_dev*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (TYPE_3__**,int ,struct device*) ;

__attribute__((used)) static int FUNC_4(struct nci_dev *VAR_3)
{
 struct fdp_nci_info *VAR_4 = FUNC_1(VAR_3);
 struct device *VAR_5 = &VAR_4->phy->i2c_dev->dev;
 u8 *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(&VAR_4->ram_patch, VAR_2, VAR_5);
 if (VAR_7 < 0) {
  FUNC_2(VAR_5, "RAM patch request error\n");
  goto error;
 }

 VAR_6 = (u8 *) VAR_4->ram_patch->data;
 VAR_4->ram_patch_version =
  VAR_6[VAR_0] |
  (VAR_6[VAR_0 + 1] << 8) |
  (VAR_6[VAR_0 + 2] << 16) |
  (VAR_6[VAR_0 + 3] << 24);

 FUNC_0(VAR_5, "RAM patch version: %d, size: %d\n",
    VAR_4->ram_patch_version, (int) VAR_4->ram_patch->size);


 VAR_7 = FUNC_3(&VAR_4->otp_patch, VAR_1, VAR_5);
 if (VAR_7 < 0) {
  FUNC_2(VAR_5, "OTP patch request error\n");
  goto out;
 }

 VAR_6 = (u8 *) VAR_4->otp_patch->data;
 VAR_4->otp_patch_version =
  VAR_6[VAR_0] |
  (VAR_6[VAR_0 + 1] << 8) |
  (VAR_6[VAR_0+2] << 16) |
  (VAR_6[VAR_0+3] << 24);

 FUNC_0(VAR_5, "OTP patch version: %d, size: %d\n",
   VAR_4->otp_patch_version, (int) VAR_4->otp_patch->size);
out:
 return 0;
error:
 return VAR_7;
}

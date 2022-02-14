
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nci_dev {int dummy; } ;
struct fdp_nci_info {scalar_t__ otp_version; scalar_t__ otp_patch_version; int setup_patch_sent; int setup_reset_ntf; int setup_patch_ntf; int setup_patch_status; int setup_wq; int ndev; TYPE_2__* phy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* i2c_dev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nci_dev*) ;
 int FUNC_1 (struct nci_dev*,int ) ;
 int FUNC_2 (struct nci_dev*,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 struct fdp_nci_info* FUNC_5 (struct nci_dev*) ;
 int FUNC_6 (struct device*,char*,int) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static int FUNC_8(struct nci_dev *VAR_4)
{
 struct fdp_nci_info *VAR_5 = FUNC_5(VAR_4);
 struct device *VAR_6 = &VAR_5->phy->i2c_dev->dev;
 int VAR_7;
 int VAR_8 = 0;

 if (VAR_5->otp_version >= VAR_5->otp_patch_version)
  goto out;

 VAR_5->setup_patch_sent = 0;
 VAR_5->setup_reset_ntf = 0;
 VAR_5->setup_patch_ntf = 0;


 VAR_8 = FUNC_1(VAR_4, VAR_3);
 if (VAR_8)
  goto out;


 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 < 0) {
  VAR_8 = VAR_7;
  goto out;
 }


 VAR_8 = FUNC_2(VAR_4, VAR_7, VAR_3);
 if (VAR_8)
  goto out;


 FUNC_7(VAR_5->setup_wq,
     VAR_5->setup_patch_sent == 1);


 FUNC_3(VAR_1);


 VAR_8 = FUNC_4(VAR_5->ndev, VAR_7);
 if (VAR_8)
  goto out;


 if (FUNC_1(VAR_4, VAR_2)) {
  FUNC_6(VAR_6, "OTP patch error 0x%x\n", VAR_8);
  VAR_8 = -VAR_0;
  goto out;
 }


 FUNC_7(VAR_5->setup_wq, VAR_5->setup_patch_ntf);


 VAR_8 = VAR_5->setup_patch_status;
 if (VAR_8) {
  FUNC_6(VAR_6, "OTP patch error 0x%x\n", VAR_8);
  VAR_8 = -VAR_0;
  goto out;
 }





 FUNC_7(VAR_5->setup_wq, VAR_5->setup_reset_ntf);

out:
 return VAR_8;
}

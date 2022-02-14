
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct b43legacy_firmware {TYPE_2__* initvals_band; TYPE_1__* initvals; } ;
struct b43legacy_wldev {struct b43legacy_firmware fw; } ;
struct b43legacy_iv {int dummy; } ;
struct b43legacy_fw_header {int size; } ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__ size; scalar_t__ data; } ;


 int FUNC_0 (struct b43legacy_wldev*,struct b43legacy_iv const*,size_t,scalar_t__) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct b43legacy_wldev *VAR_0)
{
 const size_t VAR_1 = sizeof(struct b43legacy_fw_header);
 const struct b43legacy_fw_header *VAR_2;
 struct b43legacy_firmware *VAR_3 = &VAR_0->fw;
 const struct b43legacy_iv *VAR_4;
 size_t VAR_5;
 int VAR_6;

 VAR_2 = (const struct b43legacy_fw_header *)(VAR_3->initvals->data);
 VAR_4 = (const struct b43legacy_iv *)(VAR_3->initvals->data + VAR_1);
 VAR_5 = FUNC_1(VAR_2->size);
 VAR_6 = FUNC_0(VAR_0, VAR_4, VAR_5,
     VAR_3->initvals->size - VAR_1);
 if (VAR_6)
  goto out;
 if (VAR_3->initvals_band) {
  VAR_2 = (const struct b43legacy_fw_header *)
        (VAR_3->initvals_band->data);
  VAR_4 = (const struct b43legacy_iv *)(VAR_3->initvals_band->data
   + VAR_1);
  VAR_5 = FUNC_1(VAR_2->size);
  VAR_6 = FUNC_0(VAR_0, VAR_4, VAR_5,
      VAR_3->initvals_band->size - VAR_1);
  if (VAR_6)
   goto out;
 }
out:

 return VAR_6;
}

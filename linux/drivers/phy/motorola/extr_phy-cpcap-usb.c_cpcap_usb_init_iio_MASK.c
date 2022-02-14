
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct cpcap_phy_ddata {int dev; TYPE_1__* vbus; } ;
typedef enum iio_chan_type { ____Placeholder_iio_chan_type } iio_chan_type ;
struct TYPE_5__ {int indio_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,int) ;
 TYPE_1__* FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*,int*) ;

__attribute__((used)) static int FUNC_5(struct cpcap_phy_ddata *VAR_3)
{
 enum iio_chan_type VAR_4;
 int VAR_5;

 VAR_3->vbus = FUNC_3(VAR_3->dev, "vbus");
 if (FUNC_0(VAR_3->vbus)) {
  VAR_5 = FUNC_1(VAR_3->vbus);
  goto out_err;
 }

 if (!VAR_3->vbus->indio_dev) {
  VAR_5 = -VAR_1;
  goto out_err;
 }

 VAR_5 = FUNC_4(VAR_3->vbus, &VAR_4);
 if (VAR_5 < 0)
  goto out_err;

 if (VAR_4 != VAR_2) {
  VAR_5 = -VAR_0;
  goto out_err;
 }

 return 0;

out_err:
 FUNC_2(VAR_3->dev, "could not initialize VBUS or ID IIO: %i\n",
  VAR_5);

 return VAR_5;
}

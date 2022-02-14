
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; scalar_t__* data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cdc_ncm_ctx {int drvflags; int mtx; scalar_t__ delayed_ndp16; int max_ndp_size; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct usbnet* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*,int*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_4, struct device_attribute *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct usbnet *VAR_8 = FUNC_1(FUNC_7(VAR_4));
 struct cdc_ncm_ctx *VAR_9 = (struct cdc_ncm_ctx *)VAR_8->data[0];
 bool VAR_10;

 if (FUNC_6(VAR_6, &VAR_10))
  return -VAR_1;


 if (VAR_10 == (VAR_9->drvflags & VAR_0))
  return VAR_7;

 if (VAR_10 && !VAR_9->delayed_ndp16) {
  VAR_9->delayed_ndp16 = FUNC_0(VAR_9->max_ndp_size, VAR_3);
  if (!VAR_9->delayed_ndp16)
   return -VAR_2;
 }


 FUNC_2(VAR_8->net);
 FUNC_8(((void*)0), VAR_8->net);
 FUNC_4(&VAR_9->mtx);
 if (VAR_10)
  VAR_9->drvflags |= VAR_0;
 else
  VAR_9->drvflags &= ~VAR_0;
 FUNC_5(&VAR_9->mtx);
 FUNC_3(VAR_8->net);

 return VAR_7;
}

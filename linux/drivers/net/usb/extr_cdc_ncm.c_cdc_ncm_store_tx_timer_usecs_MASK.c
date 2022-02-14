
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {scalar_t__* data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cdc_ncm_ctx {unsigned long timer_interval; int mtx; scalar_t__ tx_timer_pending; } ;
typedef size_t ssize_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 size_t VAR_2 ;
 unsigned long VAR_3 ;
 size_t FUNC_0 (char const*,int ,unsigned long*) ;
 struct usbnet* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_4, struct device_attribute *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct usbnet *VAR_8 = FUNC_1(FUNC_4(VAR_4));
 struct cdc_ncm_ctx *VAR_9 = (struct cdc_ncm_ctx *)VAR_8->data[0];
 ssize_t VAR_10;
 unsigned long VAR_11;

 VAR_10 = FUNC_0(VAR_6, 0, &VAR_11);
 if (VAR_10)
  return VAR_10;
 if (VAR_11 && (VAR_11 < VAR_1 || VAR_11 > VAR_0))
  return -VAR_2;

 FUNC_2(&VAR_9->mtx);
 VAR_9->timer_interval = VAR_11 * VAR_3;
 if (!VAR_9->timer_interval)
  VAR_9->tx_timer_pending = 0;
 FUNC_3(&VAR_9->mtx);
 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int value ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int misc; scalar_t__ retries; int code; } ;
struct iw_statistics {TYPE_1__ discard; int status; } ;
struct wl3501_card {struct iw_statistics wstats; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct iw_statistics*,int ,int) ;
 struct wl3501_card* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct wl3501_card*,int ,scalar_t__*,int) ;

__attribute__((used)) static struct iw_statistics *FUNC_4(struct net_device *VAR_8)
{
 struct wl3501_card *VAR_9 = FUNC_1(VAR_8);
 struct iw_statistics *VAR_10 = &VAR_9->wstats;
 u32 VAR_11;

 FUNC_0(VAR_10, 0, sizeof(*VAR_10));
 VAR_10->status = FUNC_2(VAR_8);
 if (!FUNC_3(VAR_9, VAR_6,
      &VAR_11, sizeof(VAR_11)))
  VAR_10->discard.code += VAR_11;
 if (!FUNC_3(VAR_9, VAR_7,
      &VAR_11, sizeof(VAR_11)))
  VAR_10->discard.code += VAR_11;
 if (!FUNC_3(VAR_9, VAR_5,
      &VAR_11, sizeof(VAR_11)))
  VAR_10->discard.code += VAR_11;
 if (!FUNC_3(VAR_9, VAR_3,
      &VAR_11, sizeof(VAR_11)))
  VAR_10->discard.retries = VAR_11;
 if (!FUNC_3(VAR_9, VAR_1,
      &VAR_11, sizeof(VAR_11)))
  VAR_10->discard.misc += VAR_11;
 if (!FUNC_3(VAR_9, VAR_4,
      &VAR_11, sizeof(VAR_11)))
  VAR_10->discard.misc += VAR_11;
 if (!FUNC_3(VAR_9, VAR_0,
      &VAR_11, sizeof(VAR_11)))
  VAR_10->discard.misc += VAR_11;
 if (!FUNC_3(VAR_9, VAR_2,
      &VAR_11, sizeof(VAR_11)))
  VAR_10->discard.misc += VAR_11;
 return VAR_10;
}

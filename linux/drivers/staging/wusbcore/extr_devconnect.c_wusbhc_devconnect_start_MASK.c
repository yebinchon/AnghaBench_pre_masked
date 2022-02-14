
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wusbhc {int trust_timeout; int keep_alive_timer; struct wuie_host_info* wuie_host_info; int chid; TYPE_1__* rsv; struct device* dev; } ;
struct TYPE_4__ {int bLength; int bIEIdentifier; } ;
struct wuie_host_info {TYPE_2__ hdr; int CHID; int attributes; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int stream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct wuie_host_info*) ;
 struct wuie_host_info* FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *,int ) ;
 int VAR_4 ;
 int FUNC_6 (struct wusbhc*,int ,int ,TYPE_2__*) ;

int FUNC_7(struct wusbhc *VAR_5)
{
 struct device *VAR_6 = VAR_5->dev;
 struct wuie_host_info *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_7->hdr.bLength = sizeof(*VAR_7);
 VAR_7->hdr.bIEIdentifier = VAR_3;
 VAR_7->attributes = FUNC_0((VAR_5->rsv->stream << 3) | VAR_2);
 VAR_7->CHID = VAR_5->chid;
 VAR_8 = FUNC_6(VAR_5, 0, 0, &VAR_7->hdr);
 if (VAR_8 < 0) {
  FUNC_1(VAR_6, "Cannot add Host Info MMCIE: %d\n", VAR_8);
  goto error_mmcie_set;
 }
 VAR_5->wuie_host_info = VAR_7;

 FUNC_5(VAR_4, &VAR_5->keep_alive_timer,
      FUNC_4(VAR_5->trust_timeout / 2));

 return 0;

error_mmcie_set:
 FUNC_2(VAR_7);
 return VAR_8;
}

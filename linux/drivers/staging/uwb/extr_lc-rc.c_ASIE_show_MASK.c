
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uwb_rc {int ies_mutex; TYPE_1__* ies; } ;
struct uwb_ie_hdr {scalar_t__ element_id; scalar_t__ length; } ;
struct uwb_dev {struct uwb_rc* rc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int wIELength; void* IEData; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*) ;
 struct uwb_dev* FUNC_4 (struct device*) ;
 int FUNC_5 (struct uwb_ie_hdr*,scalar_t__,char*,int ) ;
 struct uwb_ie_hdr* FUNC_6 (void**,size_t*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
    struct device_attribute *VAR_3, char *VAR_4)
{
 struct uwb_dev *VAR_5 = FUNC_4(VAR_2);
 struct uwb_rc *VAR_6 = VAR_5->rc;
 struct uwb_ie_hdr *VAR_7;
 void *VAR_8;
 size_t VAR_9;
 int VAR_10 = 0;


 VAR_10 = FUNC_3(VAR_4, VAR_0, "\n");
 FUNC_1(&VAR_6->ies_mutex);

 VAR_8 = VAR_6->ies->IEData;
 VAR_9 = FUNC_0(VAR_6->ies->wIELength);
 for (;;) {
  VAR_7 = FUNC_6(&VAR_8, &VAR_9);
  if (!VAR_7)
   break;
  if (VAR_7->element_id == VAR_1) {
   VAR_10 = FUNC_5(VAR_7,
     VAR_7->length + sizeof(struct uwb_ie_hdr),
     VAR_4, VAR_0);
   break;
  }
 }
 FUNC_2(&VAR_6->ies_mutex);

 return VAR_10;
}

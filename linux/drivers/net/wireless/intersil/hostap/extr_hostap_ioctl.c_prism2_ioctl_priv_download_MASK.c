
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct prism2_download_param {int num_areas; } ;
struct prism2_download_area {int dummy; } ;
struct iw_point {int length; int pointer; } ;
struct TYPE_6__ {TYPE_1__* func; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_5__ {int (* download ) (TYPE_2__*,struct prism2_download_param*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct prism2_download_param*) ;
 int FUNC_1 (struct prism2_download_param*) ;
 int FUNC_2 (struct prism2_download_param*) ;
 struct prism2_download_param* FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_2__*,struct prism2_download_param*) ;

__attribute__((used)) static int FUNC_5(local_info_t *VAR_1, struct iw_point *VAR_2)
{
 struct prism2_download_param *VAR_3;
 int VAR_4 = 0;

 if (VAR_2->length < sizeof(struct prism2_download_param) ||
     VAR_2->length > 1024 || !VAR_2->pointer)
  return -VAR_0;

 VAR_3 = FUNC_3(VAR_2->pointer, VAR_2->length);
 if (FUNC_0(VAR_3)) {
  return FUNC_1(VAR_3);
 }

 if (VAR_2->length < sizeof(struct prism2_download_param) +
     VAR_3->num_areas * sizeof(struct prism2_download_area)) {
  VAR_4 = -VAR_0;
  goto out;
 }

 VAR_4 = VAR_1->func->download(VAR_1, VAR_3);

 out:
 FUNC_2(VAR_3);
 return VAR_4;
}

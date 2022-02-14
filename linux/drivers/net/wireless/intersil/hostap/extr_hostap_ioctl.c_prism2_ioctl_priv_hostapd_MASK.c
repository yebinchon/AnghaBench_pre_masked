
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct prism2_hostapd_param {int cmd; } ;
struct iw_point {int length; int pointer; } ;
struct TYPE_11__ {int ap; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct prism2_hostapd_param*) ;


 int VAR_2 ;






 int FUNC_1 (struct prism2_hostapd_param*) ;
 scalar_t__ FUNC_2 (int ,struct prism2_hostapd_param*,int) ;
 int FUNC_3 (struct prism2_hostapd_param*) ;
 struct prism2_hostapd_param* FUNC_4 (int ,int) ;
 int FUNC_5 (int ,struct prism2_hostapd_param*) ;
 int FUNC_6 (TYPE_1__*,struct prism2_hostapd_param*,int) ;
 int FUNC_7 (TYPE_1__*,struct prism2_hostapd_param*,int) ;
 int FUNC_8 (TYPE_1__*,struct prism2_hostapd_param*) ;
 int FUNC_9 (TYPE_1__*,struct prism2_hostapd_param*) ;
 int FUNC_10 (TYPE_1__*,struct prism2_hostapd_param*,int) ;
 int FUNC_11 (TYPE_1__*,struct prism2_hostapd_param*,int) ;
 int FUNC_12 (TYPE_1__*,struct prism2_hostapd_param*,int) ;
 int FUNC_13 (TYPE_1__*,struct prism2_hostapd_param*,int) ;

__attribute__((used)) static int FUNC_14(local_info_t *VAR_3, struct iw_point *VAR_4)
{
 struct prism2_hostapd_param *VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 0;

 if (VAR_4->length < sizeof(struct prism2_hostapd_param) ||
     VAR_4->length > VAR_2 || !VAR_4->pointer)
  return -VAR_1;

 VAR_5 = FUNC_4(VAR_4->pointer, VAR_4->length);
 if (FUNC_0(VAR_5)) {
  return FUNC_1(VAR_5);
 }

 switch (VAR_5->cmd) {
 case 128:
  VAR_6 = FUNC_11(VAR_3, VAR_5, VAR_4->length);
  break;
 case 135:
  VAR_6 = FUNC_6(VAR_3, VAR_5, VAR_4->length);
  break;
 case 134:
  VAR_6 = FUNC_7(VAR_3, VAR_5, VAR_4->length);
  break;
 case 129:
  VAR_6 = FUNC_13(VAR_3, VAR_5, VAR_4->length);
  break;
 case 131:
  VAR_6 = FUNC_10(VAR_3, VAR_5, VAR_4->length);
  break;
 case 130:
  VAR_6 = FUNC_12(VAR_3, VAR_5,
             VAR_4->length);
  break;
 case 133:
  VAR_6 = FUNC_8(VAR_3, VAR_5);
  break;
 case 132:
  VAR_6 = FUNC_9(VAR_3, VAR_5);
  break;
 default:
  VAR_6 = FUNC_5(VAR_3->ap, VAR_5);
  VAR_7 = 1;
  break;
 }

 if (VAR_6 == 1 || !VAR_7) {
  if (FUNC_2(VAR_4->pointer, VAR_5, VAR_4->length)) {
   VAR_6 = -VAR_0;
   goto out;
  } else if (VAR_7)
   VAR_6 = 0;
 }

 out:
 FUNC_3(VAR_5);
 return VAR_6;
}

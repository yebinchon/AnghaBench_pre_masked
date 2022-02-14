
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int dummy; } ;
struct drvextra_cmd_parm {int ec_id; scalar_t__ size; scalar_t__ pbuf; int type; } ;
struct adapter {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct adapter*,int ) ;
 int FUNC_3 (struct adapter*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*,struct sta_info*) ;
 int FUNC_7 (struct adapter*,int) ;
 int FUNC_8 (struct adapter*,int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct adapter*,int ) ;
 int FUNC_10 (struct adapter*) ;
 int FUNC_11 (struct adapter*) ;

u8 FUNC_12(struct adapter *VAR_3, unsigned char *VAR_4)
{
 struct drvextra_cmd_parm *VAR_5;

 if (!VAR_4)
  return VAR_0;

 VAR_5 = (struct drvextra_cmd_parm *)VAR_4;

 switch (VAR_5->ec_id) {
 case 133:
  FUNC_0(VAR_3);
  break;
 case 129:
  FUNC_10(VAR_3);
  break;
 case 130:
  FUNC_2(VAR_3, (u8)VAR_5->type);
  break;
 case 135:
  FUNC_5(VAR_3);
  break;
 case 131:
  FUNC_9(VAR_3, (u8)VAR_5->type);
  break;
 case 136:
  FUNC_4(VAR_3);
  break;

 case 128:
  FUNC_11(VAR_3);
  break;
 case 132:
  FUNC_7(VAR_3, 1);
  break;
 case 137:
  FUNC_8(VAR_3, VAR_2, VAR_5->pbuf, VAR_5->size);
  break;
 case 134:
  FUNC_6(VAR_3, (struct sta_info *)VAR_5->pbuf);
  break;
 case 138:
  FUNC_3(VAR_3, VAR_5->pbuf, VAR_5->size);
  break;
 default:
  break;
 }

 if (VAR_5->pbuf && VAR_5->size > 0) {
  FUNC_1(VAR_5->pbuf);
 }

 return VAR_1;
}

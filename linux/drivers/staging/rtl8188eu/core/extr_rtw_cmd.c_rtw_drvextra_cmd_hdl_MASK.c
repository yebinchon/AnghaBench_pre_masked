
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drvextra_cmd_parm {int ec_id; scalar_t__ type_size; scalar_t__ pbuf; } ;
struct adapter {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct adapter*,scalar_t__) ;
 int FUNC_1 (struct adapter*,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct adapter*,int ) ;
 int FUNC_4 (struct adapter*,scalar_t__) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (struct adapter*) ;

u8 FUNC_7(struct adapter *VAR_2, unsigned char *VAR_3)
{
 struct drvextra_cmd_parm *VAR_4;

 if (!VAR_3)
  return VAR_0;

 VAR_4 = (struct drvextra_cmd_parm *)VAR_3;

 switch (VAR_4->ec_id) {
 case 131:
  FUNC_1(VAR_2, VAR_4->pbuf, VAR_4->type_size);
  break;
 case 129:
  FUNC_6(VAR_2);
  break;
 case 130:
  FUNC_3(VAR_2, (u8)VAR_4->type_size);
  break;
 case 128:
  FUNC_4(VAR_2, VAR_4->type_size);
  break;
 case 133:
  FUNC_0(VAR_2, VAR_4->type_size);
  break;





 default:
  break;
 }

 if (VAR_4->pbuf && VAR_4->type_size > 0)
  FUNC_2(VAR_4->pbuf);

 return VAR_1;
}

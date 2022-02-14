
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ TupleDataLen; scalar_t__ TupleDataMax; int TupleCode; } ;
typedef TYPE_1__ tuple_t ;
struct TYPE_22__ {int format; int org; int vers_2; int device_geo; int cftable_entry; int config; int funce; int funcid; int manfid; int jedec; int altstr; int version_1; int longlink_mfc; int longlink; int checksum; int device; } ;
typedef TYPE_2__ cisparse_t ;
 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 int FUNC_12 (TYPE_1__*,int *) ;
 int FUNC_13 (TYPE_1__*,int *) ;
 int FUNC_14 (TYPE_1__*,int *) ;
 int FUNC_15 (TYPE_1__*,int *) ;
 int FUNC_16 (char*,int) ;

int FUNC_17(tuple_t *VAR_1, cisparse_t *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_1->TupleDataLen > VAR_1->TupleDataMax)
  return -VAR_0;
 switch (VAR_1->TupleCode) {
 case 146:
 case 145:
  VAR_3 = FUNC_4(VAR_1, &VAR_2->device);
  break;
 case 148:
  VAR_3 = FUNC_2(VAR_1, &VAR_2->checksum);
  break;
 case 135:
 case 134:
  VAR_3 = FUNC_10(VAR_1, &VAR_2->longlink);
  break;
 case 133:
  VAR_3 = FUNC_11(VAR_1, &VAR_2->longlink_mfc);
  break;
 case 129:
  VAR_3 = FUNC_14(VAR_1, &VAR_2->version_1);
  break;
 case 150:
  VAR_3 = FUNC_0(VAR_1, &VAR_2->altstr);
  break;
 case 138:
 case 137:
  VAR_3 = FUNC_9(VAR_1, &VAR_2->jedec);
  break;
 case 132:
  VAR_3 = FUNC_12(VAR_1, &VAR_2->manfid);
  break;
 case 139:
  VAR_3 = FUNC_8(VAR_1, &VAR_2->funcid);
  break;
 case 140:
  VAR_3 = FUNC_7(VAR_1, &VAR_2->funce);
  break;
 case 147:
  VAR_3 = FUNC_3(VAR_1, &VAR_2->config);
  break;
 case 149:
  VAR_3 = FUNC_1(VAR_1, &VAR_2->cftable_entry);
  break;
 case 144:
 case 143:
  VAR_3 = FUNC_5(VAR_1, &VAR_2->device_geo);
  break;
 case 128:
  VAR_3 = FUNC_15(VAR_1, &VAR_2->vers_2);
  break;
 case 130:
  VAR_3 = FUNC_13(VAR_1, &VAR_2->org);
  break;
 case 142:
 case 141:
  VAR_3 = FUNC_6(VAR_1, &VAR_2->format);
  break;
 case 131:
 case 136:
  VAR_3 = 0;
  break;
 default:
  VAR_3 = -VAR_0;
  break;
 }
 if (VAR_3)
  FUNC_16("parse_tuple failed %d\n", VAR_3);
 return VAR_3;
}

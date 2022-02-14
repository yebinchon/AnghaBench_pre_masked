
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zd1201 {short monitor; int essidlen; int essid; TYPE_1__* dev; scalar_t__ ap; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
typedef int __u32 ;
typedef int __le16 ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;

 short VAR_5 ;
 short VAR_6 ;
 short VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,int ,int ) ;
 struct zd1201* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct zd1201*) ;
 int FUNC_4 (struct zd1201*,char*,int) ;
 int FUNC_5 (struct zd1201*) ;
 int FUNC_6 (struct zd1201*,int ,unsigned char*,int,int) ;
 int FUNC_7 (struct zd1201*,int ,short) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_11,
    struct iw_request_info *VAR_12, __u32 *VAR_13, char *VAR_14)
{
 struct zd1201 *VAR_15 = FUNC_2(VAR_11);
 short VAR_16, VAR_17 = 0;
 unsigned char VAR_18[VAR_3+2];
 int VAR_19;

 if (VAR_15->ap) {
  if (*VAR_13 != VAR_4)
   return -VAR_2;
  return 0;
 }

 VAR_19 = FUNC_7(VAR_15, VAR_10, 0);
 if (VAR_19)
  return VAR_19;
 VAR_15->dev->type = VAR_0;
 switch(*VAR_13) {
  case 128:
   VAR_17 = 1;
   VAR_15->dev->type = VAR_1;




   FUNC_4(VAR_15, "\0-*#\0", 5);


  case 8:
   VAR_16 = VAR_7;
   break;
  case 130:
   VAR_16 = VAR_6;
   break;
  case 129:
   VAR_16 = VAR_5;
   break;
  default:
   return -VAR_2;
 }

 VAR_19 = FUNC_7(VAR_15, VAR_9, VAR_16);
 if (VAR_19)
  return VAR_19;
 if (VAR_15->monitor && !VAR_17) {
   FUNC_3(VAR_15);
   *(__le16 *)VAR_18 = FUNC_0(VAR_15->essidlen);
   FUNC_1(VAR_18+2, VAR_15->essid, VAR_15->essidlen);
   VAR_19 = FUNC_6(VAR_15, VAR_8,
       VAR_18, VAR_3+2, 1);
   if (VAR_19)
    return VAR_19;
 }
 VAR_15->monitor = VAR_17;



 FUNC_5(VAR_15);

 return 0;
}

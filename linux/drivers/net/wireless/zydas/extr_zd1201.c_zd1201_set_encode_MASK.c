
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int encode_enabled; int encode_restricted; int * encode_keys; int * encode_keylen; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 short VAR_5 ;
 short VAR_6 ;
 int VAR_7 ;
 short VAR_8 ;
 int VAR_9 ;
 short VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,int ) ;
 struct zd1201* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct zd1201*,int ,short*) ;
 int FUNC_3 (struct zd1201*) ;
 int FUNC_4 (struct zd1201*,int,char*,int ,int) ;
 int FUNC_5 (struct zd1201*,int ,short) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_13,
    struct iw_request_info *VAR_14, struct iw_point *VAR_15, char *VAR_16)
{
 struct zd1201 *VAR_17 = FUNC_1(VAR_13);
 short VAR_18;
 int VAR_19, VAR_20;

 if (VAR_15->length > VAR_7)
  return -VAR_0;

 VAR_18 = (VAR_15->flags & VAR_2)-1;
 if (VAR_18 == -1) {
  VAR_19 = FUNC_2(VAR_17,VAR_11,&VAR_18);
  if (VAR_19)
   return VAR_19;
 } else {
  VAR_19 = FUNC_5(VAR_17, VAR_11, VAR_18);
  if (VAR_19)
   return VAR_19;
 }

 if (VAR_18 < 0 || VAR_18 >= VAR_8)
  return -VAR_0;

 VAR_20 = VAR_10 + VAR_18;
 VAR_19 = FUNC_4(VAR_17, VAR_20, VAR_16, VAR_15->length, 1);
 if (VAR_19)
  return VAR_19;
 VAR_17->encode_keylen[VAR_18] = VAR_15->length;
 FUNC_0(VAR_17->encode_keys[VAR_18], VAR_16, VAR_15->length);

 VAR_18=0;
 if (!(VAR_15->flags & VAR_1 & VAR_3)) {
  VAR_18 |= 0x01;
  VAR_17->encode_enabled = 1;
 } else
  VAR_17->encode_enabled = 0;
 if (VAR_15->flags & VAR_4 & VAR_3) {
  VAR_18 |= 0x02;
  VAR_17->encode_restricted = 1;
 } else
  VAR_17->encode_restricted = 0;
 VAR_19 = FUNC_5(VAR_17, VAR_12, VAR_18);
 if (VAR_19)
  return VAR_19;

 if (VAR_17->encode_enabled)
  VAR_18 = VAR_6;
 else
  VAR_18 = VAR_5;
 VAR_19 = FUNC_5(VAR_17, VAR_9, VAR_18);
 if (VAR_19)
  return VAR_19;

 return FUNC_3(VAR_17);
}

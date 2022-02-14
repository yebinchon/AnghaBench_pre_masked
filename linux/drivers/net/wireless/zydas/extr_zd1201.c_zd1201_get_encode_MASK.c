
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int * encode_keys; int * encode_keylen; scalar_t__ encode_restricted; scalar_t__ encode_enabled; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 short VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int ,int ) ;
 struct zd1201* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct zd1201*,int ,short*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_8,
    struct iw_request_info *VAR_9, struct iw_point *VAR_10, char *VAR_11)
{
 struct zd1201 *VAR_12 = FUNC_1(VAR_8);
 short VAR_13;
 int VAR_14;

 if (VAR_12->encode_enabled)
  VAR_10->flags = VAR_2;
 else
  VAR_10->flags = VAR_1;
 if (VAR_12->encode_restricted)
  VAR_10->flags |= VAR_5;
 else
  VAR_10->flags |= VAR_4;

 VAR_13 = (VAR_10->flags & VAR_3) -1;
 if (VAR_13 == -1) {
  VAR_14 = FUNC_2(VAR_12, VAR_7, &VAR_13);
  if (VAR_14)
   return VAR_14;
 }
 if (VAR_13<0 || VAR_13>= VAR_6)
  return -VAR_0;

 VAR_10->flags |= VAR_13+1;

 VAR_10->length = VAR_12->encode_keylen[VAR_13];
 FUNC_0(VAR_11, VAR_12->encode_keys[VAR_13], VAR_10->length);

 return 0;
}

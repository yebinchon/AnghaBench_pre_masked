
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cec_msg {int len; int* msg; } ;
struct cec_adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct cec_adapter *VAR_4, u8 VAR_5,
     u32 VAR_6, struct cec_msg *VAR_7)
{
 u16 VAR_8, VAR_9, VAR_10, VAR_11 = 0;
 u8 *VAR_12;
 int VAR_13;
 u8 VAR_14;


 VAR_9 = VAR_7->len - 1;


 VAR_13 = FUNC_0(VAR_2, VAR_9);
 if (VAR_13)
  goto err;


 if (VAR_9 > 0) {
  VAR_13 = FUNC_0(VAR_3, VAR_7->msg[1]);
  if (VAR_13)
   goto err;
 }

 if (VAR_9 > 1) {

  VAR_8 = VAR_7->len - 2;
  VAR_12 = &VAR_7->msg[2];


  for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14 += 2) {

   VAR_11 = VAR_12[VAR_14 + 1] << 8;


   VAR_11 |= VAR_12[VAR_14];

   VAR_13 = FUNC_0(VAR_1 + VAR_14 / 2, VAR_11);
   if (VAR_13)
    goto err;
  }
 }

 VAR_10 = VAR_7->msg[0];
 VAR_13 = FUNC_0(VAR_0, VAR_10);
 if (VAR_13)
  goto err;

 return 0;

err:
 return VAR_13;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mwifiex_private {int dummy; } ;
struct mwifiex_ie_list {TYPE_1__* ie_list; int len; int type; } ;
struct mwifiex_ie {int ie_index; int ie_length; } ;
struct TYPE_2__ {int ie_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mwifiex_ie_list*) ;
 struct mwifiex_ie_list* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,struct mwifiex_ie*,int) ;
 int FUNC_6 (struct mwifiex_private*,struct mwifiex_ie_list*) ;

__attribute__((used)) static int
FUNC_7(struct mwifiex_private *VAR_5,
        struct mwifiex_ie *VAR_6, u16 *VAR_7,
        struct mwifiex_ie *VAR_8, u16 *VAR_9,
        struct mwifiex_ie *VAR_10, u16 *VAR_11)
{
 struct mwifiex_ie_list *VAR_12;
 u8 *VAR_13;
 u16 VAR_14;
 int VAR_15;

 VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->type = FUNC_0(VAR_4);
 VAR_13 = (u8 *)VAR_12->ie_list;

 if (VAR_6) {
  VAR_14 = sizeof(struct mwifiex_ie) - VAR_2 +
        FUNC_3(VAR_6->ie_length);
  FUNC_5(VAR_13, VAR_6, VAR_14);
  VAR_13 += VAR_14;
  FUNC_4(&VAR_12->len, VAR_14);
 }
 if (VAR_8) {
  VAR_14 = sizeof(struct mwifiex_ie) - VAR_2 +
        FUNC_3(VAR_8->ie_length);
  FUNC_5(VAR_13, VAR_8, VAR_14);
  VAR_13 += VAR_14;
  FUNC_4(&VAR_12->len, VAR_14);
 }
 if (VAR_10) {
  VAR_14 = sizeof(struct mwifiex_ie) - VAR_2 +
        FUNC_3(VAR_10->ie_length);
  FUNC_5(VAR_13, VAR_10, VAR_14);
  VAR_13 += VAR_14;
  FUNC_4(&VAR_12->len, VAR_14);
 }

 VAR_15 = FUNC_6(VAR_5, VAR_12);

 VAR_13 = (u8 *)(&VAR_12->ie_list[0].ie_index);
 if (VAR_6 && *VAR_7 == VAR_3) {

  *VAR_7 = FUNC_3(VAR_12->ie_list[0].ie_index);
  VAR_14 = sizeof(*VAR_6) - VAR_2 +
        FUNC_3(VAR_6->ie_length);
  VAR_13 += VAR_14;
 }
 if (VAR_8 && FUNC_3(VAR_8->ie_index) == VAR_3) {

  *VAR_9 = *((u16 *)VAR_13);
  VAR_14 = sizeof(*VAR_8) - VAR_2 +
        FUNC_3(VAR_8->ie_length);
  VAR_13 += VAR_14;
 }
 if (VAR_10 && FUNC_3(VAR_10->ie_index) == VAR_3)

  *VAR_11 = *((u16 *)VAR_13);

 FUNC_1(VAR_12);
 return VAR_15;
}

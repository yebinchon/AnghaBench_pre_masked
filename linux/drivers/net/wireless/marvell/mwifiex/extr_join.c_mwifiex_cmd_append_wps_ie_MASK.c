
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_private {int wps_ie_len; struct mwifiex_ie_types_header* wps_ie; int adapter; } ;
struct mwifiex_ie_types_header {void* len; void* type; } ;
typedef int ie_header ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct mwifiex_ie_types_header*) ;
 int FUNC_2 (int *,struct mwifiex_ie_types_header*,int) ;
 int FUNC_3 (int ,int ,char*,int,int *) ;

__attribute__((used)) static int
FUNC_4(struct mwifiex_private *VAR_2, u8 **VAR_3)
{
 int VAR_4 = 0;
 struct mwifiex_ie_types_header VAR_5;

 if (!VAR_3 || !*VAR_3)
  return 0;





 if (VAR_2->wps_ie_len) {
  FUNC_3(VAR_2->adapter, VAR_0,
       "cmd: append wps ie %d to %p\n",
       VAR_2->wps_ie_len, *VAR_3);


  VAR_5.type = FUNC_0(VAR_1);
  VAR_5.len = FUNC_0(VAR_2->wps_ie_len);
  FUNC_2(*VAR_3, &VAR_5, sizeof(VAR_5));
  *VAR_3 += sizeof(VAR_5);
  VAR_4 += sizeof(VAR_5);

  FUNC_2(*VAR_3, VAR_2->wps_ie, VAR_2->wps_ie_len);
  *VAR_3 += VAR_2->wps_ie_len;
  VAR_4 += VAR_2->wps_ie_len;

 }

 FUNC_1(VAR_2->wps_ie);
 VAR_2->wps_ie_len = 0;
 return VAR_4;
}

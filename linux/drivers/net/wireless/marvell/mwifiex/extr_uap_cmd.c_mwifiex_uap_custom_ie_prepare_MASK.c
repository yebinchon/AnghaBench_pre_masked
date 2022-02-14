
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mwifiex_ie_types_header {scalar_t__ len; int type; } ;
struct mwifiex_ie_list {scalar_t__ len; int ie_list; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(u8 *VAR_1, void *VAR_2, u16 *VAR_3)
{
 struct mwifiex_ie_list *VAR_4 = VAR_2;
 struct mwifiex_ie_types_header *VAR_5 = (void *)VAR_1;

 if (!VAR_4 || !VAR_4->len)
  return -1;

 *VAR_3 += FUNC_1(VAR_4->len) +
   sizeof(struct mwifiex_ie_types_header);

 VAR_5->type = FUNC_0(VAR_0);
 VAR_5->len = VAR_4->len;
 VAR_1 += sizeof(struct mwifiex_ie_types_header);

 FUNC_2(VAR_1, VAR_4->ie_list, FUNC_1(VAR_4->len));

 return 0;
}

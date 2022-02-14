
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wmi_add_wow_pattern_cmd {int filter_list_id; int filter_size; int filter_offset; int* filter; } ;
struct wmi {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wmi*,int,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int*,int const*,int) ;

int FUNC_3(struct wmi *VAR_3, u8 VAR_4,
       u8 VAR_5, u8 VAR_6,
       u8 VAR_7, const u8 *VAR_8,
       const u8 *VAR_9)
{
 struct sk_buff *VAR_10;
 struct wmi_add_wow_pattern_cmd *VAR_11;
 u16 VAR_12;
 u8 *VAR_13;
 int VAR_14;





 VAR_12 = sizeof(*VAR_11) + (2 * VAR_6);

 VAR_10 = FUNC_1(VAR_12);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = (struct wmi_add_wow_pattern_cmd *) VAR_10->data;
 VAR_11->filter_list_id = VAR_5;
 VAR_11->filter_size = VAR_6;
 VAR_11->filter_offset = VAR_7;

 FUNC_2(VAR_11->filter, VAR_8, VAR_6);

 VAR_13 = (u8 *) (VAR_11->filter + VAR_6);
 FUNC_2(VAR_13, VAR_9, VAR_6);

 VAR_14 = FUNC_0(VAR_3, VAR_4, VAR_10, VAR_2,
      VAR_1);

 return VAR_14;
}
